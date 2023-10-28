#ifndef DETALLEVENTA_H
#define DETALLEVENTA_H
#include "Fecha.h"
#include "Venta.h"
#include "Libro.h"
#include "Cliente.h"


class DetalleVenta
{
    public:
        DetalleVenta();

        // DetalleVentaCompleto
        DetalleVenta(int,
                     char dniCliente[9],
                     char nombreCliente[50],
                     char telefonoCliente[15],
                     char emailCliente[100],
                     char tituloLibro[100],
                     char autorLibro[50],
                     char editorialLibro[30],
                     double importeVenta,
                     char medioDePago[30],
                     Fecha fecha);

        // DetalleVentaSinId
        DetalleVenta(char *,
                     char nombreCliente[50],
                     char telefonoCliente[15],
                     char emailCliente[100],
                     char tituloLibro[100],
                     char autorLibro[50],
                     char editorialLibro[30],
                     double importeVenta,
                     char medioDePago[30],
                     Fecha fecha);

        // Detalle Venta (Venta, Cliente, Libro)
        DetalleVenta(Venta venta, Libro libro,Cliente cliente);

        /// GETTERS
        int getIdVenta();
        const char* getDniCliente();
        const char* getNombreCliente();
        const char* getTelefonoCliente();
        const char* getEmailCliente();
        const char* getTituloLibro();
        const char* getAutorLibro();
        const char* getEditorialLibro();
        double getImporteVenta();
        const char* getMedioDePago();
        Fecha getFecha();

        /// SETTERS
        void setIdVenta(int);
        void setDniCliente(const char*);
        void setNombreCliente(const char*);
        void setTelefonoCliente(const char*);
        void setEmailCliente(const char*);
        void setTituloLibro(const char*);
        void setAutorLibro(const char*);
        void setEditorialLibro(const char*);
        void setImporteVenta(double);
        void setMedioDePago(const char*);
        void setFecha(Fecha);


    protected:

    private:
        int idVenta;
        char dniCliente[9];
        char nombreCliente[50];
        char telefonoCliente[15];
        char emailCliente[100];
        char tituloLibro[100];
        char autorLibro[50];
        char editorialLibro[30];
        double importeVenta;
        char medioDePago[30];
        Fecha fecha;
};

#endif // DETALLEVENTA_H
