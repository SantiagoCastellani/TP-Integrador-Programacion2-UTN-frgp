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
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Salir"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" - - - - - - - - - - - - "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
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
    case 0:
        finalizar();
        break;
    default:
        break;
    }
}

// Menu Libros
void menuLibros(){
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu LIBROS"<<std::endl;
    std::cout<<" "<<std::endl;
    system("pause");
    menuInicio();
};

// Menu Ventas
void menuVentas(){
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu VENTAS"<<std::endl;
    std::cout<<" "<<std::endl;
    system("pause");
    menuInicio();
};

// Menu Clientes
void menuClientes(){
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu CLIENTES"<<std::endl;
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
