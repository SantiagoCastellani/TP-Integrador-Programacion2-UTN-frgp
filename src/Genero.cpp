#include "Genero.h"
#include "string.h"

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
