#include "DetalleVenta.h"
#include "string.h"
#include "VentasService.h"

DetalleVenta::DetalleVenta()
{
    _idVenta=0;
    _dniCliente;
    strcpy(_dniCliente,"00000000");
    strcpy(_nombreCliente,"0000");
    strcpy(_telefonoCliente,"0000");
    strcpy(_emailCliente,"0000");
    strcpy(_tituloLibro,"0000");
    strcpy(_autorLibro,"0000");
    strcpy(_editorialLibro,"0000");
    _importeVenta=0.00;
    strcpy(_medioDePago,"0000");
    _fecha=Fecha();
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
    this->_idVenta=idVenta;
    strcpy(_dniCliente,dniCli);
    strcpy(_nombreCliente,nombreCli);
    strcpy(_telefonoCliente,telefonoCli);
    strcpy(_emailCliente,emailCli);
    strcpy(_tituloLibro,tituloLi);
    strcpy(_autorLibro,autorLi);
    strcpy(_editorialLibro,editorialLi);
    this->_importeVenta=importeVenta;
    strcpy(_medioDePago,medioPago);
    this->_fecha=fecha;
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
    strcpy(_dniCliente,dniCli);
    strcpy(_nombreCliente,nombreCli);
    strcpy(_telefonoCliente,telefonoCli);
    strcpy(_emailCliente,emailCli);
    strcpy(_tituloLibro,tituloLi);
    strcpy(_autorLibro,autorLi);
    strcpy(_editorialLibro,editorialLi);
    this->_importeVenta=importeVenta;
    strcpy(_medioDePago,medioPago);
    this->_fecha=fecha;
}


DetalleVenta::DetalleVenta(Venta venta, Libro libro, Cliente cliente){
    /// TODO: Se necesita traer la Editorial By Id
    //Editorial e = libroService.buscarEditorialById(libro.get_IdEditorial);
    /// TODO: Se necesita traer el Autor By Id
    //Autor autor = libroService.buscarAutorById(libro.get_IdAutor());
    /// TODO: Se necesita traer el MedioDePago By Id
    VentasService ventasService;
    MedioDePago m = ventasService.buscarMedioDePagoById(venta.getMedioDePago());

    strcpy(_dniCliente,cliente.getDni());
    strcpy(_nombreCliente,cliente.getNombre());
    strcpy(_telefonoCliente,cliente.getTelefono());
    strcpy(_emailCliente,cliente.getEmail());
    strcpy(_tituloLibro,libro.getTitulo());
    strcpy(_autorLibro,"Julio Cortazar");
    strcpy(_editorialLibro,"Alfaguara");
    this->_importeVenta=venta.getImporteVenta();
    strcpy(_medioDePago,m.getNombre());
    this->_fecha=venta.getFecha();
}

/// GETTERS
int DetalleVenta::getIdVenta(){
    return _idVenta;
};
const char* DetalleVenta::getDniCliente(){
    return _dniCliente;
};
const char* DetalleVenta::getNombreCliente(){
    return _nombreCliente;
};
const char* DetalleVenta::getTelefonoCliente(){
    return _telefonoCliente;
};
const char* DetalleVenta::getEmailCliente(){
    return _emailCliente;
};
const char* DetalleVenta::getTituloLibro(){
    return _tituloLibro;
};
const char* DetalleVenta::getAutorLibro(){
    return _autorLibro;
};
const char* DetalleVenta::getEditorialLibro(){
    return _editorialLibro;
};
double DetalleVenta::getImporteVenta(){
    return _importeVenta;
};
const char* DetalleVenta::getMedioDePago(){
    return _medioDePago;
};
Fecha DetalleVenta::getFecha(){
    return _fecha;
};

/// SETTERS
void DetalleVenta::setIdVenta(int idVenta){
    this->_idVenta=idVenta;
};
void DetalleVenta::setDniCliente(const char* dniCli){
    strcpy(_dniCliente,dniCli);
};
void DetalleVenta::setNombreCliente(const char* nombreCli){
    strcpy(_nombreCliente,nombreCli);
};
void DetalleVenta::setTelefonoCliente(const char* telefonoCli){
    strcpy(_telefonoCliente,telefonoCli);
};
void DetalleVenta::setEmailCliente(const char* emailCli){
    strcpy(_emailCliente,emailCli);
};
void DetalleVenta::setTituloLibro(const char* tituloLi){
    strcpy(_tituloLibro,tituloLi);
};
void DetalleVenta::setAutorLibro(const char* autorLi){
    strcpy(_autorLibro,autorLi);
};
void DetalleVenta::setEditorialLibro(const char* editorialLi){
    strcpy(_editorialLibro,editorialLi);
};
void DetalleVenta::setImporteVenta(double importeVenta){
    this->_importeVenta=importeVenta;
};
void DetalleVenta::setMedioDePago(const char* medioPago){
    strcpy(_medioDePago,medioPago);
};
void DetalleVenta::setFecha(Fecha fecha){
    this->_fecha=fecha;
};


