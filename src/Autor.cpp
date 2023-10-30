#include "Autor.h"
#include "string.h"

Autor::Autor(){
}

Autor::Autor(int IdAutor,char* Nombre,char* Apellido,char* CodAutor){
    _IdAutor=IdAutor;
    strcpy(_Nombre,Nombre);
    strcpy(_Apellido,Apellido);
    strcpy(_CodAutor,CodAutor);
}

/// GETTERS
int Autor::get_IdAutor(){
    return _IdAutor;
}
const char* Autor::get_Nombre(){
    return _Nombre;
}
const char* Autor::get_Apellido(){
    return _Apellido;
}
const char* Autor::get_CodAutor(){
    return _CodAutor;
}

/// SETTERS
void Autor::set_IdAutor(int IdAutor){
    _IdAutor=IdAutor;
}
void Autor::set_Nombre(const char* Nombre){
    strcpy(_Nombre,Nombre);
}
void Autor::set_Apellido(const char* Apellido){
    strcpy(_Apellido,Apellido);
}
void Autor::set_CodAutor(const char* CodAutor){
    strcpy(_CodAutor,CodAutor);
}
