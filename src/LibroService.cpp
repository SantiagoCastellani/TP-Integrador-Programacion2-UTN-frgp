#include "LibroService.h"
#include <cstdio>

LibroService::LibroService(){}

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
    /// TODO: Reemplazar por codigo de autor
    std::cout << "Ingresar ID AUTOR: ";
    std::cin>>idAutor;
    std::cout << "Ingresar ID GENERO: ";
    std::cin>>idGenero;
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
    std::cout << " Titulo: "<<l.getTitulo()<<std::endl;
    /// TODO: Reemplazar por AUTOR NOMBRE
    std::cout << " Autor: "<<l.getIdAutor()<<std::endl;
    /// TODO: Reemplazar por Nombre Genero
    std::cout << " Genero: "<<l.getIdGenero()<<std::endl;
    /// TODO: Reemplazar por Editorial Nombre
    std::cout << " Editorial: "<<l.getIdEditorial()<<std::endl;
    std::cout << " Fecha Publicacion: "<<l.getFechaPublicacion().fechaFormateada()<<std::endl;
    std::cout << " Precio: "<<l.getPrecio()<<std::endl;
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





