#include <iostream>
#include "menu.h"
#include"Libro.h"
#include"Genero.h"
#include"Editorial.h"
#include "Autor.h"
#include "LibroService.h"

LibroService libroService;
Genero gS;
Editorial eS;
Autor aS;

/*************************************************************************************/

/// MENU INICIAL

void menuInicio(){
    system("cls");
    int opcion;
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" Sistema de Gestion de Ventas de Libros"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tLibreria IOSTREAM"<<std::endl;
    std::cout<<" "<<std::endl;std::cout<<" "<<std::endl;
    std::cout<<"\t1 - LIBROS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - VENTAS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t3 - CLIENTES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t4 - ESTADISTICAS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t5 - CONFIGURACIONES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Salir"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
    std::cout<<" "<<std::endl;
    std::cout<<"*************************************************"<<std::endl;
    switch(opcion){
    case 1:
        menuLibros();
        break;
    case 2:
        menuVentas();
        break;
    case 3:
        menuClientes();
        break;
    case 4:
        menuEstadisticas();
        break;
    case 5:
        menuConfiguraciones();
        break;
    case 0:
        finalizar();
        break;
    default:
        break;
    }
}

/****************************************************************************************/

/// MENU LIBROS

void menuLibros(){
    int opcion;
    system("cls");
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tLibreria IOSTREAM"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu LIBROS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - BUSCAR LIBRO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - CARGAR LIBRO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t3 - MODIFICAR LIBRO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t4 - LISTADO DE LIBROS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t5 - CONFIGURACION DE GENERO, EDITORIALES Y AUTORES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
    switch(opcion){
    case 1:
        menuBuscarLibro();
        break;
    case 2:
        menuCargarLibro();
        break;
    case 3:
        menuModificarLibro();
        break;
    case 4:
        menuListadoLibros();
        break;
    case 5:
        menuConfiguracionesGEA();
        break;
    case 0:
        menuInicio();
        break;
    default:
        break;
    system("pause");
    menuInicio();
};
}

/// Menu BUSCAR LIBRO -----------------------------

void menuBuscarLibro(){
    int opcion;
    system("cls");
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tLibreria IOSTREAM"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu BUSCAR LIBRO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - BUSQUEDA POR TITULO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - BUSQUEDA POR CODIGO de AUTOR"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
    ///TODOS: COLOCAR LAS FUNCIONES PARA BUSQUEDAS
    switch(opcion){
    case 1:
        system("cls");
        std::cout<<"*************************************************"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tLibreria IOSTREAM"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tBUSCAR LIBRO por TITULO"<<std::endl;
        std::cout<<" "<<std::endl;
        libroService.buscarLibroTitulo();
        system("pause");
        menuBuscarLibro();
        break;
     case 2:
        system("cls");
        std::cin.ignore();
        std::cout<<"*************************************************"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tLibreria IOSTREAM"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tBUSCAR LIBRO por AUTOR"<<std::endl;
        std::cout<<"\t(Primeras 2 letras del nombre y primeras 2 letras del apellido)"<<std::endl;
        std::cout<<" "<<std::endl;
        libroService.buscarLibroCodAutor();
        system("pause");
        menuBuscarLibro();
        break;
    case 0:
        menuLibros();
        break;
    default:
        break;
    system("pause");
    menuInicio();
  };
}

/// Menu CARGAR LIBRO -----------------------------

void menuCargarLibro(){
    int opcion;
    system("cls");
    std::cin.ignore();
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tLibreria IOSTREAM"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tCARGAR LIBRO"<<std::endl;
    Libro libro = libroService.cargarLibro();
    std::cout<<" "<<std::endl;
    std::cout<<"\LIBRO CARGADO: "<<std::endl;
    libroService.mostrarLibro(libro);
    std::cout<<" "<<std::endl;
    std::cout<<"Desea registrarlo? (1=SI / 0=NO):   ";
    std::cin>>opcion;
    switch(opcion){
    case 1:
        libroService.registrarLibro(libro);
        std::cout<<" "<<std::endl;
        std::cout<<"El libro ha sido registrado."<<std::endl;
        std::cout<<" "<<std::endl;
        system("pause");
        menuLibros();
        break;
    case 0:
        std::cout<<" "<<std::endl;
        std::cout<<"El libro NO se ha registrado."<<std::endl;
        std::cout<<" "<<std::endl;
        system("pause");
        menuLibros();
        break;
    default:
        break;
    system("pause");
    menuLibros();
    }
}

/// Menu MODIFICAR LIBRO -----------------------------

void menuModificarLibro(){

    system("pause");
    menuInicio();
}

/// Menu LISTADO de LIBROS -----------------------------

void menuListadoLibros(){
    int opcion;
    system("cls");
    std::cin.ignore();
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tLibreria IOSTREAM"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu LISTADO de LIBROS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - Listar por GENERO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - Listar por EDITORIAL"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t3 - Listar por TITULO de la A a la Z"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
    switch(opcion){
    case 1:
        system("cls");
        std::cout<<"*************************************************"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tLibreria IOSTREAM"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tListado por GENERO"<<std::endl;
        std::cout<<" "<<std::endl;
        libroService.listarPorGenero();
        system("pause");
        menuListadoLibros();
        break;
    case 2:
        system("cls");
        std::cout<<"*************************************************"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tLibreria IOSTREAM"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tListado por EDITORIAL"<<std::endl;
        std::cout<<" "<<std::endl;
        libroService.listarPorEditorial();
        system("pause");
        menuListadoLibros();
    case 3:
        system("cls");
        std::cout<<"*************************************************"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tLibreria IOSTREAM"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tListado por TITULO de la A a la Z"<<std::endl;
        std::cout<<" "<<std::endl;
        libroService.listarPorTituloAZ();
        std::cout<<" "<<std::endl;
        system("pause");
        menuListadoLibros();
    case 0:
        menuLibros();
        break;
    default:
        break;
    system("pause");
    menuInicio();
    }
}

/// MENU Configuraciones GEA -------------------------------------------

void menuConfiguracionesGEA(){
    int opcion;
    system("cls");
    std::cin.ignore();
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tLibreria IOSTREAM"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu CONFIGURACIONES GEA"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - Configuracion GENERO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - Configuracion AUTOR"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t3 - Configuracion EDITORIAL"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
    switch(opcion){
    case 1:
        menuConfiguracionGenero();
        break;
    case 2:
        menuConfiguracionAutor();
        break;
    case 3:
        menuConfiguracionEditorial();
        break;
    case 0:
        menuLibros();
        break;
    default:
        break;
    system("pause");
    menuInicio();
  }
}

/// MENU Configuraciones GENERO -----------------------------------------

void menuConfiguracionGenero(){
    int opcion;
    system("cls");
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tLibreria IOSTREAM"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tConfiguracion de GENEROS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - Listar GENEROS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - Cargar GENERO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t3 - Modificar GENERO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
    std::cin.ignore();
    Genero genero;
    switch(opcion){
    case 1:
        system("cls");
        std::cout<<"*************************************************"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tLibreria IOSTREAM"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tListado de GENEROS ACTIVOS:"<<std::endl;
        std::cout<<" "<<std::endl;
        gS.leerArchivoGenerosActivos();
        std::cout<<" "<<std::endl;
        gS.leerArchivoGenerosInactivos();
        std::cout<<" "<<std::endl;
        system("pause");
        menuConfiguracionGenero();
        break;
    case 2:
        system("cls");
        std::cout<<"*************************************************"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tLibreria IOSTREAM"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tCargar nuevo GENERO:"<<std::endl;
        std::cout<<" "<<std::endl;
        genero = gS.cargarGenero();
        gS.registrarGenero(genero);
        std::cout<<" "<<std::endl;
        std::cout<<" El Genero ha sido registrado."<<std::endl;
        std::cout<<" "<<std::endl;
        system("pause");
        menuConfiguracionGenero();
        break;
    case 3:
        system("cls");
        std::cout<<"*************************************************"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tLibreria IOSTREAM"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tModificar GENERO:"<<std::endl;
        std::cout<<" "<<std::endl;
        gS.modificarGenero();
        std::cout<<" "<<std::endl;
        menuConfiguracionGenero();
        break;
    case 0:
        menuLibros();
        break;
    default:
        break;
    system("pause");
    menuInicio();
  }
}

/// MENU Configuraciones AUTOR ---------------------------------------------------

void menuConfiguracionAutor(){
    int opcion;
    system("cls");
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tLibreria IOSTREAM"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tConfiguracion de AUTORES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - Listar AUTORES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - Cargar AUTOR"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t3 - Modificar AUTOR"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
    std::cin.ignore();
    Autor autor;
    switch(opcion){
    case 1:
        system("cls");
        std::cout<<"*************************************************"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tLibreria IOSTREAM"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tListado de AUTORES:"<<std::endl;
        std::cout<<" "<<std::endl;
        aS.leerArchivoAutor();
        std::cout<<" "<<std::endl;
        system("pause");
        menuConfiguracionAutor();
        break;
    case 2:
        system("cls");
        std::cout<<"*************************************************"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tLibreria IOSTREAM"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tCargar Nuevo AUTOR:"<<std::endl;
        std::cout<<" "<<std::endl;
        autor = aS.cargarAutor();
        aS.registrarAutor(autor);
        std::cout<<" "<<std::endl;
        std::cout<<" El Autor ha sido registrado."<<std::endl;
        std::cout<<" "<<std::endl;
        system("pause");
        menuConfiguracionAutor();
        break;
    case 3:
        system("cls");
        std::cout<<"*************************************************"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tLibreria IOSTREAM"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tModificar AUTOR:"<<std::endl;
        std::cout<<" "<<std::endl;
        aS.modificarAutor();
        std::cout<<" "<<std::endl;
        menuConfiguracionAutor();
        break;
    case 0:
        menuLibros();
        break;
    default:
        break;
    system("pause");
    menuInicio();
  }
}

/// MENU Configuraciones EDITORIAL -------------------------------------------------

void menuConfiguracionEditorial(){
    int opcion;
    system("cls");
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tLibreria IOSTREAM"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tConfiguracion de EDITORIALES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - Listar EDITORIALES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - Cargar EDITORIAL"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t3 - Modificar EDITORIAL"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
    std::cin.ignore();
    Editorial editorial;
    switch(opcion){
    case 1:
        system("cls");
        std::cout<<"*************************************************"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tLibreria IOSTREAM"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tListado de EDITORIALES ACTIVAS:"<<std::endl;
        std::cout<<" "<<std::endl;
        eS.leerArchivoEditorial();
        std::cout<<" "<<std::endl;
        system("pause");
        menuConfiguracionEditorial();
        break;
    case 2:
        system("cls");
        std::cout<<"*************************************************"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tLibreria IOSTREAM"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tCargar nueva EDITORIAL:"<<std::endl;
        std::cout<<" "<<std::endl;
        editorial = eS.cargarEditorial();
        eS.registrarEditorial(editorial);
        std::cout<<" "<<std::endl;
        std::cout<<" La Editorial ha sido registrada."<<std::endl;
        std::cout<<" "<<std::endl;
        system("pause");
        menuConfiguracionEditorial();
        break;
    case 3:
        system("cls");
        std::cout<<"*************************************************"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tLibreria IOSTREAM"<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tModificar EDITORIAL:"<<std::endl;
        std::cout<<" "<<std::endl;
        eS.modificarEditorial();
        std::cout<<" "<<std::endl;
        menuConfiguracionEditorial();
        break;
    case 0:
        menuLibros();
        break;
    default:
        break;
    system("pause");
    menuInicio();
  }
}


///*************************************************************************************

/// VENTAS

///Menu Ventas
void menuVentas(){
    int opcion;
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu VENTAS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - CARGAR UNA VENTA"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - BUSCAR DETALLE DE VENTA"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t3 - LISTADO DE VENTAS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t4 - ANULAR VENTA"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" - - - - - - - - - - - - "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
       switch(opcion){
    case 1:
        menuCargarVenta();
        break;
    case 2:
        menuDetalleVenta();
        break;
    case 3:
        menuListadoVentas();
        break;
    case 4:
        menuAnularVenta();
        break;
    case 0:
        menuInicio();
        break;
    default:
        break;
    system("pause");
    menuInicio();
};
}

// menuCargarVenta
void menuCargarVenta(){
int opcion;
 //   Venta VentaService::cargarVenta();
  //  Venta VentaService::mostrarVenta(Venta v);
    std::cout<<" "<<std::endl;
    std::cout<<"Carga Finalizada. Desea registrarlo? (1=SI / 2=NO) "<<std::endl;
    std::cin>>opcion;
    switch(opcion){
    case 1:
   //     Venta VentaService::registrarVenta();
        break;
    case 2:
   //     void menuCargarVenta();
        break;
    default:
        break;

    system("pause");
    menuInicio();
    }
}

// menuDetalleVenta
void menuDetalleVenta(){
// DetalleVenta VentasService::detalleDeVenta(int idVenta);

    system("pause");
    menuInicio();
}

//menuListadoVentas
void menuListadoVentas(){
    int opcion;
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu LISTADO VENTAS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - VENTAS POR FECHA"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - VENTAS POR CLIENTE"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t3 - VENTAS POR LIBRO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t4 - VENTAS POR GENERO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t5 - VENTAS POR EDITORIAL"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t6 - VENTAS POR MEDIO DE PAGO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" - - - - - - - - - - - - "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
       switch(opcion){
    case 1:
       // ventasByFecha();
        break;
    case 2:
       // ventasByCliente();
        break;
    case 3:
        //menuListadoLibro();
        break;
    case 4:
        //ventasByGenero();
        break;
     case 5:
        //ventasByEditorial();
        break;
     case 6:
        //ventasByMediodePago();
        break;
    case 0:
        menuVentas();
        break;
    default:
        break;
    system("pause");
    menuInicio();
};
}

//menuAnularVenta
void menuAnularVenta(){

    system("pause");
    menuInicio();
}

// Menu Clientes
void menuClientes(){
    int opcion;
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu CLIENTES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - CARGAR UN CLIENTE"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - BUSCAR CLIENTE"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t3 - LISTADO DE CLIENTES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t4 - MODIFICAR CLIENTE"<<std::endl;
    std::cout<<" "<<std::endl;
    ///TODOS: REVISAR POSIBLE OPCION EXTRA
  //  std::cout<<"\t5 - EXTRA?"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" - - - - - - - - - - - - "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
       switch(opcion){
    case 1:
        menuCargarCliente();
        break;
    case 2:
        menuBuscarCliente();
        break;
    case 3:
        menuListadoClientes();
        break;
    case 4:
        menuModificarCliente();
        break;
   // case 5:

     //   break;
    case 0:
        menuInicio();
        break;
    default:
        break;

    system("pause");
    menuInicio();
};
}

// menuBuscarCliente
void menuBuscarCliente(){
//Cliente ClienteService::buscarClientexDni(char* dni)

    system("pause");
    menuInicio();
}

// menuCargarCliente
void menuCargarCliente(){
int opcion;
 //   Cliente ClienteService::cargarCliente();
  //  Cliente ClienteService::mostrarCliente(Cliente cliente);
    std::cout<<" "<<std::endl;
    std::cout<<"Carga Finalizada. Desea registrarlo? (1=SI / 2=NO) "<<std::endl;
    std::cin>>opcion;
    switch(opcion){
    case 1:
   //     Cliente ClienteService::registrarCliente(Cliente cliente);
        break;
    case 2:
   //     void menuCargarCliente();
        break;
    default:
        break;

    system("pause");
    menuInicio();
    }
}

// menuListadoClientes
void menuListadoClientes(){
  int opcion;
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu LISTADO CLIENTES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - ORDENADOS POR APELLIDO (A-Z)"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - ORDENADOS POR FECHA DE NACIMIENTO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" - - - - - - - - - - - - "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
       switch(opcion){
    case 1:
       // listarClientesByApellido();
        break;
    case 2:
       // listarClientesByFechaNacimiento();
        break;
    case 0:
        menuClientes();
        break;
    default:
        break;

    system("pause");
    menuInicio();
};
}
///TODOS: QUEDA PENDIENTE LA FUNCION MODIFICAR CLIENTE EN CLIENTE SERVICE
// menuModificarCliente
void menuModificarCliente(){
// Cliente Clienteservice::modificarCliente();

    system("pause");
    menuInicio();
}

//Menu Estadisticas
void menuEstadisticas(){
    int opcion;
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu ESTADISTICAS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - ESTADISTICAS DE LIBROS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - ESTADISTICAS DE RECAUDACION"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t3 - ESTADISTICAS CLIENTES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" - - - - - - - - - - - - "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
       switch(opcion){
    case 1:
        menuEstadisticasLibros();
        break;
    case 2:
        menuEstadisticasRecaudacion();
        break;
    case 3:
        menuEstadisticasCliente();
        break;
    case 0:
        menuInicio();
        break;
    default:
        break;

    system("pause");
    menuInicio();
};
}

// menuEstadisticasLibros
void menuEstadisticasLibros(){
    int opcion;
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu ESTADISTICAS DE LIBROS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - LIBRO MAS VENDIDO DEL Anio"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - LIBRO MAS VENDIDO DEL MES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" - - - - - - - - - - - - "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
       switch(opcion){
    case 1:
       // libroMayorVentaAnio();
        break;
    case 2:
       // libroMayorVentaMes();
        break;
    case 0:
        menuEstadisticas();
        break;
    default:
        break;

    system("pause");
    menuInicio();
};
}

// menuEstadisticasRecaudacion
void menuEstadisticasRecaudacion(){
    int opcion;
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu ESTADISTICAS DE RECAUDACION"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - RECAUDACION POR EDITORIAL"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - RECAUDACION POR GENERO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t3 - RECAUDACION POR TITULO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t4 - RECAUDACION POR MEDIO DE PAGO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t5 - RECAUDACION TOTAL POR MES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t6 - RECAUDACION ANUAL"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" - - - - - - - - - - - - "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
       switch(opcion){
    case 1:
       // recaudacionByEditorial();
        break;
    case 2:
       // recaudacionByGenero();
        break;
    case 3:
       // recaudacionByTitulo();
        break;
    case 4:
       // recaudacionByMediodePago();
        break;
     case 5:
       // recaudacionTotalMes();
        break;
      case 6:
       // recaudacionAnual();
        break;
    case 0:
        menuEstadisticas();
        break;
    default:
        break;

    system("pause");
    menuInicio();
};
}

// menuEstadisticasCliente
void menuEstadisticasCliente(){
    int opcion;
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu ESTADISTICAS CLIENTES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - CLIENTE DE MAYOR GASTO DEL MES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - CLIENTE DE MAYOR GASTO DEL ANIO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" - - - - - - - - - - - - "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
       switch(opcion){
    case 1:
      //  clienteMayorGastoMes();
        break;
    case 2:
      //  clienteMayorGastoAnio();
        break;
    case 0:
        menuEstadisticas();
        break;
    default:
        break;

    system("pause");
    menuInicio();
};
}

// Menu Configuraciones
void menuConfiguraciones(){
    int opcion;
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu CONFIGURACIONES"<<std::endl;
    std::cout<<"\t1 - REALIZAR BACKUP"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - RESTAURAR ARCHIVOS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" - - - - - - - - - - - - "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
       switch(opcion){
    case 1:
        menuRealizarBackup();
        break;
    case 2:
        menuRestaurarArchivos();
        break;
    case 0:
        menuInicio();
        break;
    default:
        break;

    system("pause");
    menuInicio();
};
}

// menuRealizarBackup
void menuRealizarBackup(){
    int opcion;
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu BACKUP"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - REALIZAR BACKUP ARCHIVO DE LIBROS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - REALIZAR BACKUP ARCHIVO DE CLIENTES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t3 - REALIZAR BACKUP ARCHIVO DE VENTAS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" - - - - - - - - - - - - "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
       switch(opcion){
    case 1:
      //  realizarBackupLibros();
        break;
    case 2:
      //  realizarBackupClientes();
        break;
    case 3:
      //  realizarBackupVentas();
    case 0:
        menuConfiguraciones();
        break;
    default:
        break;

    system("pause");
    menuInicio();
};
}

//  menuRestaurarArchivos
void  menuRestaurarArchivos(){
    int opcion;
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu RESTAURAR ARCHIVOS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - RESTAURAR ARCHIVO DE LIBROS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - RESTAURAR ARCHIVO DE CLIENTES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t3 - RESTAURAR ARCHIVO DE VENTAS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" - - - - - - - - - - - - "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
       switch(opcion){
    case 1:
      //  restaurarLibros();
        break;
    case 2:
      //  restaurarClientes();
        break;
    case 3:
      //  restaurarVentas();
    case 0:
        menuConfiguraciones();
        break;
    default:
        break;

    system("pause");
    menuInicio();
};
}

// Finalizar
void finalizar(){
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tCerrando LIBRERIA IOSTREAM"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" Gracias por usar nuestro sistema"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" "<<std::endl;
    system("pause");
};
