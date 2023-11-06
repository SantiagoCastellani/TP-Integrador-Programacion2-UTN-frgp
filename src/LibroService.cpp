#include "LibroService.h"
#include <cstdio>
#include "string.h"
#include "Autor.h"
#include "Genero.h"
#include "Editorial.h"

LibroService::LibroService(){}

Autor autorService;
Genero generoService;
Editorial editorialService;

/// LIBROS

// Cargar un Libro
Libro LibroService::cargarLibro(){
    std::cout << "CARGAR LIBRO" <<std::endl;
    int idLibro;
    char titulo[100];
    int idAutor;
    int idGenero;
    int idEditorial;
    Fecha fechaPublicacion;
    float precio;
    int stock;
    std::cout << "Ingresar TITULO: ";
    std::cin.getline(titulo,100);
    // Se elige el autor dentro de la funcion
    idAutor=autorService.elegirAutor();
    std::cout << " "<<std::endl;
    std::cout << "Generos Disponibles: "<<std::endl;
    generoService.leerArchivoGeneros2();
    std::cout << "Ingresar ID GENERO: ";
    std::cin>>idGenero;
    std::cout << " "<<std::endl;
    std::cout << "Editoriales Disponibles: "<<std::endl;
    editorialService.leerArchivoEditorial2();
    std::cout << "Ingresar ID EDITORIAL: ";
    std::cin>>idEditorial;
    std::cout << "Ingresar FECHA PUBLICACION: "<<std::endl;
    Fecha fecha = fecha.cargarFecha();
    std::cout << "Fecha cargada: "<<fecha.fechaFormateada()<<std::endl;
    std::cout << "Ingresar PRECIO unitario: ";
    std::cin>>precio;
    std::cout << "Ingresar STOCK: ";
    std::cin>>stock;
    idLibro = proximoIdLibro();
    Libro l(idLibro,titulo,idAutor,idGenero,idEditorial,fecha,precio,stock);
    return l;
};

// Mostrar un Libro
void LibroService::mostrarLibro(Libro l){
    Autor autor = autorService.buscarAutorById(l.getIdAutor());
    Genero genero = generoService.buscarGeneroById(l.getIdGenero());
    Editorial editorial = editorialService.buscarEditorialById(l.getIdEditorial());
    std::cout << " Titulo: "<<l.getTitulo()<<std::endl;
    std::cout << " Autor: "<<autor.getNombre()<<" "<<autor.getApellido()<<std::endl;
    std::cout << " Genero: "<<genero.getGenero()<<std::endl;
    std::cout << " Editorial: "<<editorial.getNombre()<<std::endl;
    std::cout << " Fecha Publicacion: "<<l.getFechaPublicacion().fechaFormateada()<<std::endl;
    std::cout << " Precio: $"<<l.getPrecio()<<std::endl;
    std::cout << " Stock: "<<l.getStock()<<std::endl;
    std::cout << "  "<<std::endl;
};

// Devuelve el proximo IdLibro a setear
int LibroService::proximoIdLibro(){
    FILE *archivo;
    Libro l;
    int id=0;
    archivo = fopen(ARCHIVO_LIBROS,"rb");
    while(fread(&l,sizeof(Libro),1,archivo)==1){
        if(l.getIdLibro()>0){
            id=l.getIdLibro();
        }
    }
    fclose(archivo);
    return id+1;
};

// Registra un LIBRO en Archivo
void LibroService::registrarLibro(Libro libro){
    FILE *archivo;
    archivo = fopen(ARCHIVO_LIBROS,"ab");
    fwrite(&libro,sizeof(Libro),1,archivo);
    fclose(archivo);
};

// Leer Archivo de Libros
void LibroService::leerArchivoLibros(){
    FILE *archivo;
    Libro l;
    archivo = fopen(ARCHIVO_LIBROS,"rb");
    std::cout<<" "<< std::endl;
    std::cout<<"\tLIBROS en ARCHIVO"<<std::endl;
    std::cout<<" "<<std::endl;
    while(fread(&l,sizeof(Libro),1,archivo)==1){
        mostrarLibro(l);
    }
    std::cout<<" "<<std::endl;
    fclose(archivo);
};

// Buscar LIBRO By ID
Libro LibroService::buscarLibroById(int id){
    FILE *archivo;
    Libro l;
    Libro libro;
    archivo = fopen(ARCHIVO_LIBROS,"rb");
    while(fread(&l,sizeof(Libro),1,archivo)==1){
        if(l.getIdLibro()==id){
            libro=l;
        }
    }
    fclose(archivo);
    return libro;
};

// Existe LIBRO?
bool LibroService::existeLibro(int id){
    FILE *archivo;
    Libro l;
    bool existe = false;
    archivo = fopen(ARCHIVO_LIBROS,"rb");
    while(fread(&l,sizeof(Libro),1,archivo)==1){
        if(l.getIdLibro()==id){
            existe=true;
        }
    }
    fclose(archivo);
    return existe;
};

// Buscar LIBRO por TITULO (si no existe elige 1)
Libro LibroService::buscarLibroByTitulo(){
    Libro libro;
    char titulo[100];
    std::cout<<" Ingrese el titulo a buscar:";
    std::cin>>titulo;
    if(existeTitulo(titulo)){
        libro=buscarLibroByTitulo(titulo);
    } else {
        int idElegido=elegirLibro(titulo);
        libro=buscarLibroById(idElegido);
    }
    return libro;
};

bool LibroService::existeTitulo(char* titulo){
    FILE *archivo;
    Libro l;
    bool existe = false;
    archivo = fopen(ARCHIVO_LIBROS,"rb");
    while(fread(&l,sizeof(Libro),1,archivo)==1){
        if(strcmp(l.getTitulo(),titulo)==0){
            existe=true;
        }
    }
    fclose(archivo);
    return existe;
};


// Buscar Libto By Titulo
Libro LibroService::buscarLibroByTitulo(char*titulo){
    FILE *archivo;
    Libro l;
    Libro libro;
    archivo = fopen(ARCHIVO_LIBROS,"rb");
    while(fread(&l,sizeof(Libro),1,archivo)==1){
        if(strcmp(l.getTitulo(),titulo)==0){
            libro=l;
        }
    }
    fclose(archivo);
    return libro;
};

// Devolver un Libro Elegido
int LibroService::elegirLibro(char*titulo){
    int idElegido=0;
    FILE *archivo;
    Libro l;
    Libro libro;
    archivo = fopen(ARCHIVO_LIBROS,"rb");
    while(fread(&l,sizeof(Libro),1,archivo)==1){
        if(l.getTitulo()[0]==titulo[0]){
            Autor autor = autorService.buscarAutorById(l.getIdAutor());
            std::cout<<"ID: "<<l.getIdLibro()<<" "<<l.getTitulo()<<" ("<<autor.getNombre()<<" "<<autor.getApellido()<<")"<<std::endl;
        }
    }
    fclose(archivo);
    std::cout<<" Elija el ID del LIBRO que esta buscando - (0 en caso de que no este en la lista)"<<std::endl;
    std::cin>>idElegido;
    return idElegido;
}
