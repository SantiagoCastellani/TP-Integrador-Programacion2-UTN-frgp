#include <iostream>
#include "menu.h"
#include "Venta.h"
#include "VentasService.h"
#include "LibroService.h"
#include "Libro.h"
#include "Editorial.h"
#include "Autor.h"
#include "Genero.h"


int main()
{

      //menuInicio();
    LibroService ls;
    Libro libro=ls.cargarLibro();
    ls.registrarLibro(libro);
    ls.leerArchivoLibros();
//    std::cout<<"Titulo";
//    char titulo[100];
//    std::cin>>titulo;
//    Libro libro=ls.buscarLibroByTitulo();
//    ls.mostrarLibro(libro);
Autor a;
//for(int x=0;x<3;x++){
//    Autor autor=a.cargarAutor();
//    a.registrarAutor(autor);
//}
a.leerArchivoAutor();
//Editorial e;
//e.leerArchivoEditorial();
//}

//LibroService l;
//for(int x=0;x<2;x++){
//    Libro libro=l.cargarLibro();
//    l.registrarLibro(libro);
//}
//l.leerArchivoLibros();
//Genero g;
//for(int x=0;x<1;x++){
//    Genero genero=g.cargarGenero();
//    g.registrarGenero(genero);
//}
//g.leerArchivoGeneros();
 return 0;
}
