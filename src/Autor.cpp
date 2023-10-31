#include "Autor.h"
#include "string.h"

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
