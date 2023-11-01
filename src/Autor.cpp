#include "Autor.h"
#include "string.h"
#include <iostream>

Autor::Autor(){
}

Autor::Autor(int idAutor,char* nombre,char* apellido,char* codAutor){
    _idAutor=idAutor;
    strcpy(_nombre,nombre);
    strcpy(_apellido,apellido);
    strcpy(_codAutor,codAutor);
}

/// GETTERS
int Autor::getIdAutor(){
    return _idAutor;
}
const char* Autor::getNombre(){
    return _nombre;
}
const char* Autor::getApellido(){
    return _apellido;
}
const char* Autor::getCodAutor(){
    return _codAutor;
}

/// SETTERS
void Autor::setIdAutor(int idAutor){
    _idAutor=idAutor;
}
void Autor::setNombre(const char* nombre){
    strcpy(_nombre,nombre);
}
void Autor::setApellido(const char* apellido){
    strcpy(_apellido,apellido);
}
void Autor::setCodAutor(const char* codAutor){
    strcpy(_codAutor,codAutor);
}

/// FUNCIONES

// Cargar AUTOR
Autor Autor::cargarAutor(){
    std::cout << "CARGAR AUTOR" <<std::endl;
    int idAutor=proximoIdAutor();
    char nombre[25];
    char apellido[24];
    char codigo[5];
    std::cout << "Ingresar PRIMER NOMBRE: ";
    std::cin.getline(nombre,25);
    std::cout << "Ingresar APELLIDO: ";
    std::cin.getline(apellido,24);
    strncpy(codigo, nombre, 2);
    codigo[2] = '\0';
    strncat(codigo, apellido, 2);
    int i = 0;
    while (codigo[i]) {
        codigo[i] = std::toupper(codigo[i]);
        i++;
    }
//    i = 0;
//    while (codigo[i]) {
//        codigo[i] = std::tolower(codigo[i]);
//        i++;
//    }
    Autor autor(idAutor,nombre,apellido,codigo);
    return autor;
};

// REGISTRAR un AUTOR en ARCHIVO
void Autor::registrarAutor(Autor autor){
    FILE *archivo;
    archivo = fopen(ARCHIVO_AUTORES,"ab");
    fwrite(&autor,sizeof(Autor),1,archivo);
    fclose(archivo);
};

// Mostrar AUTOR
void Autor::mostrarAutor(Autor autor){
    std::cout << " ID: "<<autor.getIdAutor()<<std::endl;
    std::cout << " Nombre: "<<autor.getNombre()<<std::endl;
    std::cout << " Apellido: "<<autor.getApellido()<<std::endl;
    std::cout << " CODIGO: "<<autor.getCodAutor()<<std::endl;
    std::cout << "  "<<std::endl;
};

// LEER Archivo de AUTORES
void Autor::leerArchivoAutor(){
    FILE *archivo;
    Autor a;
    archivo = fopen(ARCHIVO_AUTORES,"rb");
    std::cout<<" "<< std::endl;
    std::cout<<"\tEDITORIAL en ARCHIVO"<<std::endl;
    std::cout<<" "<<std::endl;
    while(fread(&a,sizeof(Autor),1,archivo)==1){
        mostrarAutor(a);
    }
    std::cout<<" "<<std::endl;
    fclose(archivo);

};

// Devuelve el proximo Id a setear
int Autor::proximoIdAutor(){
    FILE *archivo;
    Autor a;
    int id=0;
    archivo = fopen(ARCHIVO_AUTORES,"rb");
    while(fread(&a,sizeof(Autor),1,archivo)==1){
        if(a.getIdAutor()>0){
            id=a.getIdAutor();
        }
    }
    fclose(archivo);
    return id+1;
};


// Devuelve AUTOR By ID
Autor Autor::buscarAutorById(int id){
    FILE *archivo;
    Autor a;
    Autor autor;
    archivo = fopen(ARCHIVO_AUTORES,"rb");
    while(fread(&a,sizeof(Autor),1,archivo)==1){
        if(a.getIdAutor()==id){
            autor=a;
        }
    }
    fclose(archivo);
    return autor;
};
