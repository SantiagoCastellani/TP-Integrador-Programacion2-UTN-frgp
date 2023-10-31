#include "Editorial.h"
#include "string.h"

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
