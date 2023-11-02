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

      menuInicio();

       LibroService ls;
       Libro libro=ls.buscarLibroById(1);
std::cout<<libro.getTitulo();
std::cout<<ls.existeLibro(13);
      return 0;

}
