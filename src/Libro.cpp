#include "Libro.h"
#include "Fecha.h"
#include "Autor.h"
#include "Genero.h"
#include "Editorial.h"
#include"string.h"

Libro::Libro()
{

}
Libro::Libro(int IdLibro,char* Titulo,int IdAutor,int IdGenero,int IdEditorial,Fecha FechaPublicacion,float Precio,int Stock)
{
_IdLibro=IdLibro;
strcpy(_Titulo,Titulo);
_IdAutor=IdAutor;
_IdGenero=IdGenero;
_IdEditorial=IdEditorial;
_FechaPublicacion=FechaPublicacion;
_Precio=Precio;
_Stock=Stock;
};

/// GETTERS
int Libro::get_IdLibro(){
    return _IdLibro;
}
const char* Libro::get_Titulo(){
    return _Titulo;
}
int Libro::get_IdAutor(){
    return _IdAutor;
}
int Libro::get_IdGenero(){
    return _IdGenero;
}
int Libro::get_IdEditorial(){
    return _IdEditorial;
}
Fecha Libro::get_FechaPublicacion(){
    return _FechaPublicacion;
}
float Libro::get_Precio(){
    return _Precio;
}
int Libro::get_Stock(){
    return _Stock;
}

/// SETTERS
void Libro::set_IdLibro(int IdLibro){
    _IdLibro=IdLibro;
}
void Libro::set_Titulo(const char* Titulo){
    strcpy(_Titulo,Titulo);
}
void Libro::set_IdAutor(int IdAutor){
    _IdAutor=IdAutor;
}
void Libro::set_IdGenero(int IdGenero){
    _IdGenero=IdGenero;
}
void Libro::set_IdEditorial(int IdEditorial){
    _IdEditorial=IdEditorial;
}
void Libro::set_FechaPublicacion(Fecha FechaPublicacion){
    _FechaPublicacion=FechaPublicacion;
}
void Libro::set_Precio(float Precio){
    _Precio=Precio;
}
void Libro::set_Stock(int Stock){
    _Stock=Stock;
}
