#include "VentasService.h"
#include <cstdio>
#include "string.h"
#include "../properties.h"
#include "Fecha.h"

VentasService::VentasService(){};

/*****************************************************************************/

/// VENTAS

// Devuelve una Venta segun un IdVenta
Venta VentasService::buscarVentaById(int id){
    Venta v;
    return v;
};

/// TODO: Metodo alternativo para cargar ventas.
// Carga una Venta
Venta VentasService::cargarVenta(){
    std::cout << "CARGAR VENTA" <<std::endl;
    char dni[9];
    int idVenta;
    int idLibro;
    double importeVenta;
    int idMedioDePago;
    Fecha fecha(11,8,2023);
    std::cout << "Ingresar idVenta" <<std::endl;
    std::cin>>idVenta;
    std::cin.ignore();
    std::cout << "Ingresar DNI CLIENTE" <<std::endl;
    std::cin.getline(dni,9);
    std::cout << "Ingresar ID LIBRO" <<std::endl;
    std::cin>>idLibro;
    std::cout << "Ingresar IMPORTE de VENTA" <<std::endl;
    std::cin>>importeVenta;
    std::cout << "Ingresar ID MEDIO de PAGO" <<std::endl;
    std::cin>>idMedioDePago;
    Venta v(idVenta,dni,idLibro,importeVenta,idMedioDePago,fecha);
    return v;
};

// Guarda una Venta en el Archivo
void VentasService::registrarVenta(Venta venta){
    FILE *archivo;
    archivo = fopen(ARCHIVO_REGISTROVENTAS,"ab");
    fwrite(&venta,sizeof(Venta),1,archivo);
    fclose(archivo);
};

// Muestra una Venta determinada
void VentasService::mostrarVenta(Venta v){
    std::cout << " Nro Venta: "<<v.getIdVenta()<<std::endl;
    std::cout << " Dni Cliente: "<<v.getDniCliente()<<std::endl;
    /// TODO: Reemplazar por Titulo de Libro
    std::cout << " Id LIBRO: "<<v.getIdLibro()<<std::endl;
    std::cout << " Importe: $"<<v.getImporteVenta()<<std::endl;
    /// TODO: Reemplazar por Medio de Pago
    std::cout << " Id Medio de Pago: "<<v.getMedioDePago()<<std::endl;
    std::cout << " Fecha: "<<v.getFecha().fechaFormateada()<<std::endl;
    std::cout << "  "<<std::endl;
};

// Leer Archivo de Ventas
void VentasService::leerArchivoVentas(){
    FILE *archivo;
    Venta v;
    archivo = fopen(ARCHIVO_REGISTROVENTAS,"rb");
    std::cout<<" "<< std::endl;
    std::cout<<"\tVentas en ARCHIVO"<<std::endl;
    std::cout<<" "<<std::endl;
    while(fread(&v,sizeof(Venta),1,archivo)==1){
        mostrarVenta(v);
    }
    std::cout<<" "<<std::endl;
    fclose(archivo);
};

// Devuelve un DetalleVenta segun un IdVenta
DetalleVenta VentasService::detalleDeVenta(int idVenta){
    Venta v = buscarVentaById(idVenta);
    ///TODO: traer el cliente y el libro segun los id.
    Cliente c;
    Libro l;
    DetalleVenta d;
    return d;
};

/*****************************************************************************/

/// MEDIOS DE PAGO

// Devuelve un MedioDePago ById
MedioDePago VentasService::buscarMedioDePagoById(int id){
    FILE *archivo;
    MedioDePago medio;
    archivo = fopen(ARCHIVO_MEDIOSDEPAGO,"rb");
    //if(existeMedioDePago(id)){
    if(true){
        while(fread(&medio,sizeof(MedioDePago),1,archivo)==1){
            if(medio.getId()==id){
                return medio;
            }
        }
        fclose(archivo);
    }
    fclose(archivo);
    return medio;
};

// Cargar un MedioDePago
MedioDePago VentasService::cargarMedioDePago(){
    char nombre[30];
    float recargo;
    int cantCuotas,id;
    /// TODO: Se requiere que el Id sea automaticamente contado e incremental.
    std::cout << "Ingrese ID de Medio de Pago: ";
    std::cin>>id;
    std::cin.ignore();
    std::cout << "Ingrese NOMBRE de Medio de Pago: ";
    std::cin.getline(nombre,30);
    std::cout << "Ingrese Indice de RECARGO (Ejemplo: 1.21) ";
    std::cin>>recargo;
    std::cout << "Ingrese cantidad de CUOTAS: ";
    std::cin>>cantCuotas;
    MedioDePago m(id,nombre,recargo,cantCuotas);
    return m;
};


// Registrar MedioDePago en Archivo.
void VentasService::registrarMedioDePago(MedioDePago medio){
    FILE *archivo;
    archivo = fopen(ARCHIVO_MEDIOSDEPAGO,"ab");
    fwrite(&medio,sizeof(MedioDePago),1,archivo);
    fclose(archivo);
};

// Leer Archivo de Medios de Pago
void VentasService::leerArchivoMedioDePago(){
    FILE *archivo;
    MedioDePago m;
    archivo = fopen(ARCHIVO_MEDIOSDEPAGO,"rb");
    std::cout<<" "<< std::endl;
    std::cout<<"\tVentas en ARCHIVO"<<std::endl;
    std::cout<<" "<<std::endl;
    while(fread(&m,sizeof(MedioDePago),1,archivo)==1){
        mostrarMedioDePago(m);
    }
    std::cout<<" "<<std::endl;
    fclose(archivo);
};

// Mostrar Medio de Pago
void VentasService::mostrarMedioDePago(MedioDePago m){
    std::cout<<"ID: "<< m.getId()<< std::endl;
    std::cout<<"NOMBRE: "<< m.getNombre()<< std::endl;
    std::cout<<"RECARGO: "<< m.getRecargo()<<std::endl;
    std::cout<<"Cant CUOTAS: "<< m.getCantCuotas()<< std::endl;
};

// Modificar MedioDePago
void VentasService::modificarMedioDePago(MedioDePago medio){
    FILE *archivo;
    int res=-1;
    MedioDePago m;
    archivo = fopen(ARCHIVO_MEDIOSDEPAGO,"rb+");
    while(fread(&m,sizeof(MedioDePago),1,archivo)==1){
        if(medio.getId()==m.getId()){
            std::cin.ignore();
            fseek(archivo,ftell(archivo)-sizeof(MedioDePago),0);
            std::cout<<"\tIngrese los datos del Medio de Pago a modificar"<<std::endl;
            std::cout<<" "<<std::endl;
            std::cout<<" Ingrese NOMBRE: ";
            char nombre[30];
            std::cin.getline(nombre,30);
            m.setNombre(nombre);
            std::cout<<" Ingrese RECARGO: ";
            float recargo;
            std::cin>>recargo;
            m.setRecargo(recargo);
            std::cout<<" Ingrese cant CUOTAS: ";
            int cantCuotas;
            std::cin>>cantCuotas;
            m.setCantCuotas(cantCuotas);
            res = fwrite(&m,sizeof(MedioDePago),1,archivo);
            fclose(archivo);
        }
    }
}

/*****************************************************************************/
