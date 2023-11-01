#include <iostream>
#include "menu.h"
#include "Venta.h"
#include "VentasService.h"
#include "LibroService.h"
#include "Libro.h"


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

        LibroService libroService;
        Libro libro = libroService.cargarLibro();
        //libroService.mostrarLibro(libro);
        libroService.registrarLibro(libro);
        libroService.leerArchivoLibros();

      return 0;

}
