#include <iostream>
#include "menu.h"


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


// Menu Libros
void menuLibros(){
    int opcion;
    system("cls");
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tLibreia IOSTREAM"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\tMENU de LIBROS"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - BUSCAR LIBRO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - CARGAR LIBRO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t3 - MODIFICAR LIBRO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t4 - CONFIGURACION DE GENERO, EDITORIALES Y AUTORES"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Salir"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"*************************************************"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
    switch(opcion){
    case 1:
        //BuscarLibro();
        break;
    case 2:
        //menuCargarLibro();
        break;
    case 3:
        //menuModificarLibro();
        break;
    case 4:
        //menuConfiguracionesGEA();
        break;
    case 0:
        finalizar();
        break;
    default:
        break;
    system("pause");
    menuInicio();
};
}

// Menu Ventas
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
    std::cout<<"\t0 - Salir"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" - - - - - - - - - - - - "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
       switch(opcion){
    case 1:
        //menuCargarVenta();
        break;
    case 2:
        //menuDetalleVenta();
        break;
    case 3:
        //menuListadoVentas();
        break;
    case 4:
        //menuAnularVenta();
        break;
    case 0:
        finalizar();
        break;
    default:
        break;
    system("pause");
    menuInicio();
};
}

// Menu Clientes
void menuClientes(){
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu CLIENTES"<<std::endl;
    std::cout<<" "<<std::endl;
    system("pause");
    menuInicio();
};


//Menu Estadisticas
void menuEstadisticas(){
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu ESTADISTICAS"<<std::endl;
    std::cout<<" "<<std::endl;
    system("pause");
    menuInicio();
};


// Menu Configuraciones
void menuConfiguraciones(){
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu CONFIGURACIONES"<<std::endl;
    std::cout<<" "<<std::endl;
    system("pause");
    menuInicio();
};


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
