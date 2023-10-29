#include "Venta.h"
#include "string.h"

Venta::Venta()
{
    idVenta=0;
    strcpy(dniCliente,"000000000");
    idLibro=0;
    importeVenta=0;
    idMedioDePago=0;
    fecha=Fecha();
};

Venta::Venta(int id, char* dniCli, int idLibro, double importeVenta, int medioDePago, Fecha fecha){
    this->idVenta=id;
    strcpy(dniCliente,dniCli);
    this->idLibro=idLibro;
    this->importeVenta=importeVenta;
    this->idMedioDePago=medioDePago;
    this->fecha=fecha;
};

/// GETTERS
int Venta::getIdVenta(){
    return idVenta;
};
const char* Venta::getDniCliente(){
    return dniCliente;
};
int Venta::getIdLibro(){
    return idLibro;
};
double Venta::getImporteVenta(){
    return importeVenta;
};
int Venta::getMedioDePago(){
    return idMedioDePago;
};
Fecha Venta::getFecha(){
    return fecha;
};

/// SETTERS
void Venta::setIdVenta(int id){
    this->idVenta=id;
};
void Venta::setDniCliente(const char* dniCli){
    strcpy(dniCliente,dniCli);
};
void Venta::setIdLibro(int idLibro){
    this->idLibro=idLibro;
};
void Venta::setImporteVenta(double importeVenta){
    this->importeVenta=importeVenta;
};
void Venta::setMedioDePago(int medioDePago){
    this->idMedioDePago=medioDePago;
};
void Venta::setFecha(Fecha){
    this->fecha=fecha;
};


