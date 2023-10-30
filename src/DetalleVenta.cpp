#include "DetalleVenta.h"
#include "string.h"

DetalleVenta::DetalleVenta()
{
    idVenta=0;
    dniCliente;
    strcpy(dniCliente,"00000000");
    strcpy(nombreCliente,"0000");
    strcpy(telefonoCliente,"0000");
    strcpy(emailCliente,"0000");
    strcpy(tituloLibro,"0000");
    strcpy(autorLibro,"0000");
    strcpy(editorialLibro,"0000");
    importeVenta=0.00;
    strcpy(medioDePago,"0000");
    fecha=Fecha();
}

// Detalle Venta Completo
DetalleVenta::DetalleVenta(
             int idVenta,
             char dniCli[9],
             char nombreCli[50],
             char telefonoCli[15],
             char emailCli[100],
             char tituloLi[100],
             char autorLi[50],
             char editorialLi[30],
             double importeVenta,
             char medioPago[30],
             Fecha fecha )
{
    this->idVenta=idVenta;
    strcpy(dniCliente,dniCli);
    strcpy(nombreCliente,nombreCli);
    strcpy(telefonoCliente,telefonoCli);
    strcpy(emailCliente,emailCli);
    strcpy(tituloLibro,tituloLi);
    strcpy(autorLibro,autorLi);
    strcpy(editorialLibro,editorialLi);
    this->importeVenta=importeVenta;
    strcpy(medioDePago,medioPago);
    this->fecha=fecha;
}

// Detalle Venta Sin Id
DetalleVenta::DetalleVenta(
             char dniCli[9],
             char nombreCli[50],
             char telefonoCli[15],
             char emailCli[100],
             char tituloLi[100],
             char autorLi[50],
             char editorialLi[30],
             double importeVenta,
             char medioPago[30],
             Fecha fecha )
{
    strcpy(dniCliente,dniCli);
    strcpy(nombreCliente,nombreCli);
    strcpy(telefonoCliente,telefonoCli);
    strcpy(emailCliente,emailCli);
    strcpy(tituloLibro,tituloLi);
    strcpy(autorLibro,autorLi);
    strcpy(editorialLibro,editorialLi);
    this->importeVenta=importeVenta;
    strcpy(medioDePago,medioPago);
    this->fecha=fecha;
}

/*
DetalleVenta::DetalleVenta(Venta venta, Libro libro, Cliente cliente){
    strcpy(dniCliente,cliente.getDni());
    strcpy(nombreCliente,cliente.getNombre());
    strcpy(telefonoCliente,cliente.getTelefono());
    strcpy(emailCliente,cliente.getEmail());
    strcpy(tituloLibro,libro.);
    strcpy(autorLibro,libro.);
    strcpy(editorialLibro,libro.);
    this->importeVenta=venta.getImporteVenta();
    strcpy(medioDePago,venta.getMedioDePago());
    this->fecha=venta.getFecha();
}*/

/// GETTERS
int DetalleVenta::getIdVenta(){
    return idVenta;
};
const char* DetalleVenta::getDniCliente(){
    return dniCliente;
};
const char* DetalleVenta::getNombreCliente(){
    return nombreCliente;
};
const char* DetalleVenta::getTelefonoCliente(){
    return telefonoCliente;
};
const char* DetalleVenta::getEmailCliente(){
    return emailCliente;
};
const char* DetalleVenta::getTituloLibro(){
    return tituloLibro;
};
const char* DetalleVenta::getAutorLibro(){
    return autorLibro;
};
const char* DetalleVenta::getEditorialLibro(){
    return editorialLibro;
};
double DetalleVenta::getImporteVenta(){
    return importeVenta;
};
const char* DetalleVenta::getMedioDePago(){
    return medioDePago;
};
Fecha DetalleVenta::getFecha(){
    return fecha;
};

/// SETTERS
void DetalleVenta::setIdVenta(int idVenta){
    this->idVenta=idVenta;
};
void DetalleVenta::setDniCliente(const char* dniCli){
    strcpy(dniCliente,dniCli);
};
void DetalleVenta::setNombreCliente(const char* nombreCli){
    strcpy(nombreCliente,nombreCli);
};
void DetalleVenta::setTelefonoCliente(const char* telefonoCli){
    strcpy(telefonoCliente,telefonoCli);
};
void DetalleVenta::setEmailCliente(const char* emailCli){
    strcpy(emailCliente,emailCli);
};
void DetalleVenta::setTituloLibro(const char* tituloLi){
    strcpy(tituloLibro,tituloLi);
};
void DetalleVenta::setAutorLibro(const char* autorLi){
    strcpy(autorLibro,autorLi);
};
void DetalleVenta::setEditorialLibro(const char* editorialLi){
    strcpy(editorialLibro,editorialLi);
};
void DetalleVenta::setImporteVenta(double importeVenta){
    this->importeVenta=importeVenta;
};
void DetalleVenta::setMedioDePago(const char* medioPago){
    strcpy(medioDePago,medioPago);
};
void DetalleVenta::setFecha(Fecha fecha){
    this->fecha=fecha;
};


