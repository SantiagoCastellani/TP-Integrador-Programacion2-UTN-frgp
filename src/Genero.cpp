#include "Genero.h"
#include "string.h"

Genero::Genero(){
}
Genero::Genero(int IdGenero,char* Genero){
    _IdGenero=IdGenero;
    strcpy(_Genero,Genero);}

/// GETTERS
int Genero::get_IdGenero(){
    return _IdGenero;
}
const char* Genero::get_Genero(){
    return _Genero;
}

/// SETTERS
void Genero::set_IdGenero(int IdGenero){
    _IdGenero=IdGenero;
}
void Genero::set_Genero(const char* Genero){
    strcpy(_Genero,Genero);
}
