#include <iostream>
#include "menu.h"
#include "Venta.h"
#include "VentasService.h"
#include "LibroService.h"
#include "Libro.h"
#include "Editorial.h"


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

        Editorial e;
        for(int x=0;x<2;x++){
            Editorial editorial = e.cargarEditorial();
            e.mostrarEditorial(editorial);
            e.registrarEditorial(editorial);
        }
        e.leerArchivoEditorial();


      return 0;

}
