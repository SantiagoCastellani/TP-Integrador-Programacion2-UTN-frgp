#include <iostream>
#include "menu.h"
#include"Libro.h"
#include "LibroService.h"

LibroService libroService;

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


// Menu Libros
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

// MenuBuscarLibro
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
//    std::cout<<"\t3 - BUSQUEDA POR CODIGO de AUTOR"<<std::endl;
//    std::cout<<" "<<std::endl;
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

// MenuCargarLibro
void menuCargarLibro(){
int opcion;
 //   Libro LibroService::cargarLibro();
  //  Libro LibroService::mostrarLibro(Libro l);
    std::cout<<" "<<std::endl;
    std::cout<<"Carga Finalizada. Desea registrarlo? (1=SI / 2=NO) "<<std::endl;
    std::cin>>opcion;
    switch(opcion){
    case 1:
   //     Libro LibroService::registrarLibro();
        break;
    case 2:
   //     void menuCargarLibro();
        break;
    default:
        break;

    system("pause");
    menuInicio();
    }
}

// menuModificarLibro
void menuModificarLibro(){

    system("pause");
    menuInicio();
}

//menuListadoLibros
void menuListadoLibros(){

    system("pause");
    menuInicio();
}
//menuConfiguracionesGEA
void menuConfiguracionesGEA(){
int opcion;
    system("cls");
    std::cout<<" "<<std::endl;
    std::cout<<"\tMenu CONFIGURACIONES GEA"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t1 - CARGAR GENERO"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t2 - CARGAR AUTOR"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t3 - CARGAR EDITORIAL"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<"\t0 - Regresar al menu anterior"<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" - - - - - - - - - - - - "<<std::endl;
    std::cout<<" "<<std::endl;
    std::cout<<" \ Elija una opcion: ";
    std::cin>>opcion;
       switch(opcion){
    case 1:
      // cargarGenero();
        break;
    case 2:
      // cargarAutor();
        break;
    case 3:
      // cargarEditorial();
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
