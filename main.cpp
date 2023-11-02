#include <iostream>
#include "menu.h"
#include "Venta.h"
#include "VentasService.h"
#include "LibroService.h"
#include "Libro.h"
#include "Editorial.h"
#include "Autor.h"


int main()
{

      //menuInicio();

//    VentasService ventasService;
//    ventasService.leerArchivoMedioDePago();

//    for(int x=0;x<3;x++){
//        Venta v = ventasService.cargarVenta();
//        ventasService.registrarVenta(v);
//    }
//
//
//    ventasService.leerArchivoVentas();

//        LibroService libroService;
//        Libro libro = libroService.cargarLibro();
//        //libroService.mostrarLibro(libro);
//        libroService.registrarLibro(libro);
//        libroService.leerArchivoLibros();


//        Editorial e;
//        Editorial editorial = e.buscarEditorialById(3);
//        e.mostrarEditorial(editorial);

       Autor aS;
//        for(int x=0;x<2;x++){
//            Autor a = aS.cargarAutor();
//            aS.mostrarAutor(a);
//            aS.registrarAutor(a);
//        }
//
       aS.leerArchivoAutor();
//        std::cout<<"ksfhhskfskl";
//        Autor z = aS.buscarAutorById(1);
//        aS.mostrarAutor(z);
int idElegido = aS.elegirAutor();
Autor au = aS.buscarAutorById(idElegido);
aS.mostrarAutor(au);

      return 0;

}
