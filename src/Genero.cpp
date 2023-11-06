#include "Genero.h"
#include "string.h"
#include <iostream>
#include <cstdio>

Genero::Genero(){
}
Genero::Genero(int idGenero,char* genero){
    _idGenero=idGenero;
    strcpy(_genero,genero);}

/// GETTERS
int Genero::getIdGenero(){
    return _idGenero;
}
const char* Genero::getGenero(){
    return _genero;
}

/// SETTERS
void Genero::setIdGenero(int idGenero){
    _idGenero=idGenero;
}
void Genero::setGenero(const char* genero){
    strcpy(_genero,genero);
}

/// FUNCIONES

// Cargar GENERO
Genero Genero::cargarGenero(){
    std::cout << "CARGAR GENERO" <<std::endl;
    int idGenero=proximoIdGenero();
    char nombre[30];
    std::cout << "Ingresar NOMBRE de GENERO: ";
    std::cin.getline(nombre,30);
    Genero g(idGenero,nombre);
    return g;
};

// REGISTRAR una Genero en ARCHIVO
void Genero::registrarGenero(Genero g){
    FILE *archivo;
    archivo = fopen(ARCHIVO_GENEROS,"ab");
    fwrite(&g,sizeof(Genero),1,archivo);
    fclose(archivo);
};

// Mostrar Genero
void Genero::mostrarGeneros(Genero genero){
    std::cout << " ID: "<<genero.getIdGenero()<<std::endl;
    std::cout << " Nombre: "<<genero.getGenero()<<std::endl;
    std::cout << "  "<<std::endl;
};

// LEER Archivo de Generos
void Genero::leerArchivoGeneros2(){
    FILE *archivo;
    Genero g;
    archivo = fopen(ARCHIVO_GENEROS,"rb");
    while(fread(&g,sizeof(Genero),1,archivo)==1){
        std::cout << " "<<g.getIdGenero()<<" - "<<g.getGenero()<<std::endl;
    }
    std::cout<<" "<<std::endl;
    fclose(archivo);
};

// LEER Archivo de Generos
void Genero::leerArchivoGeneros(){
    FILE *archivo;
    Genero g;
    archivo = fopen(ARCHIVO_GENEROS,"rb");
    std::cout<<" "<< std::endl;
    std::cout<<"\tGENEROS en ARCHIVO"<<std::endl;
    std::cout<<" "<<std::endl;
    while(fread(&g,sizeof(Genero),1,archivo)==1){
        mostrarGeneros(g);
    }
    std::cout<<" "<<std::endl;
    fclose(archivo);
};

// Devuelve el proximo Id a setear
int Genero::proximoIdGenero(){
    FILE *archivo;
    Genero g;
    int id=0;
    archivo = fopen(ARCHIVO_GENEROS,"rb");
    while(fread(&g,sizeof(Genero),1,archivo)==1){
        if(g.getIdGenero()>0){
            id=g.getIdGenero();
        }
    }
    fclose(archivo);
    return id+1;
};

// Devuelve Genero By ID
Genero Genero::buscarGeneroById(int idGenero){
    FILE *archivo;
    Genero g;
    Genero genero;
    archivo = fopen(ARCHIVO_GENEROS,"rb");
    while(fread(&g,sizeof(Genero),1,archivo)==1){
        if(g.getIdGenero()==idGenero){
            genero=g;
        }
    }
    fclose(archivo);
    return genero;
};

// Existe Genero?
bool Genero::existeGenero(int id){
    FILE *archivo;
    Genero g;
    bool existe=false;
    archivo = fopen(ARCHIVO_GENEROS,"rb");
    while(fread(&g,sizeof(Genero),1,archivo)==1){
        if(g.getIdGenero()==id){
            existe=true;
        }
    }
    fclose(archivo);
    return existe;
};
