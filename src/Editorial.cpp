#include "Editorial.h"
#include "string.h"
#include <iostream>

Editorial::Editorial(){
}

Editorial::Editorial(int idEditorial,char* nombre){
    _idEditorial=idEditorial;
    strcpy(_nombre,nombre);
}

/// GETTERS
int Editorial::getIdEditorial(){
    return _idEditorial;
}
const char* Editorial::getNombre(){
    return _nombre;
}

/// SETTERS
void Editorial::setIdEditorial(int idEditorial){
    _idEditorial=idEditorial;
}
void Editorial::setNombre(const char* nombre){
    strcpy(_nombre,nombre);
}


/// FUNCIONES

// Cargar EDITORIAL
Editorial Editorial::cargarEditorial(){
    std::cout << "CARGAR EDITORIAL" <<std::endl;
    int idEditorial=proximoIdEditorial();
    char nombre[30];
    std::cout << "Ingresar NOMBRE de EDITORIAL: ";
    std::cin.getline(nombre,30);
    Editorial e(idEditorial,nombre);
    return e;
};

// REGISTRAR una EDITORIAL en ARCHIVO
void Editorial::registrarEditorial(Editorial e){
    FILE *archivo;
    archivo = fopen(ARCHIVO_EDITORIAL,"ab");
    fwrite(&e,sizeof(Editorial),1,archivo);
    fclose(archivo);
};

// Mostrar EDITORIAL
void Editorial::mostrarEditorial(Editorial editorial){
    std::cout << " ID: "<<editorial.getIdEditorial()<<std::endl;
    std::cout << " Nombre: "<<editorial.getNombre()<<std::endl;
    std::cout << "  "<<std::endl;
};

// LEER Archivo de Editoriales
void Editorial::leerArchivoEditorial(){
    FILE *archivo;
    Editorial e;
    archivo = fopen(ARCHIVO_EDITORIAL,"rb");
    std::cout<<" "<< std::endl;
    std::cout<<"\tEDITORIAL en ARCHIVO"<<std::endl;
    std::cout<<" "<<std::endl;
    while(fread(&e,sizeof(Editorial),1,archivo)==1){
        mostrarEditorial(e);
    }
    std::cout<<" "<<std::endl;
    fclose(archivo);
};

// Devuelve el proximo IdEditorial a setear
int Editorial::proximoIdEditorial(){
    FILE *archivo;
    Editorial e;
    int id=0;
    archivo = fopen(ARCHIVO_EDITORIAL,"rb");
    while(fread(&e,sizeof(Editorial),1,archivo)==1){
        if(e.getIdEditorial()>0){
            id=e.getIdEditorial();
        }
    }
    fclose(archivo);
    return id+1;
};
