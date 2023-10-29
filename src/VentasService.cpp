#include "VentasService.h"
#include <cstdio>

VentasService::VentasService()
{
    //ctor
}

Venta VentasService::buscarVentaById(int id){
    Venta v;
    return v;
}

// Carga una Venta
Venta VentasService::cargarVenta(){
    std::cout << "CARGAR VENTA" <<std::endl;
    char dni[9];
    std::cin.getline(dni,9);
    Venta v;
    v.setDniCliente(dni);
    return v;
};

// Guarda una Venta en el Archivo
void VentasService::registrarVenta(Venta venta){
    FILE *archivo;
    archivo = fopen("Ventas.dat","ab");
    fwrite(&venta,sizeof(Venta),1,archivo);
    fclose(archivo);
};

// Muestra una Venta determinada
void VentasService::mostrarVenta(Venta venta){
    std::cout << venta.getDniCliente() <<std::endl;
};

// Leer Archivo de Ventas
void VentasService::leerArchivoVentas(){
    FILE *archivo;
    Venta v;
    archivo = fopen("Ventas.dat","rb");
    std::cout<<" "<< std::endl;
    std::cout<<"\tVentas en ARCHIVO"<<std::endl;
    std::cout<<" "<<std::endl;
    while(fread(&v,sizeof(Venta),1,archivo)==1){
        mostrarVenta(v);
    }
    std::cout<<" "<<std::endl;
    fclose(archivo);
};
