#ifndef VENTA_H
#define VENTA_H
#include "Fecha.h"


class Venta
{
    public:
        Venta();

        Venta(int, char*, int, double, int, Fecha);

        /// GETTERS
        int getIdVenta();
        const char* getDniCliente();
        int getIdLibro();
        double getImporteVenta();
        int getMedioDePago();
        Fecha getFecha();

        /// SETTERS
        void setIdVenta(int);
        void setDniCliente(const char*);
        void setIdLibro(int);
        void setImporteVenta(double);
        void setMedioDePago(int);
        void setFecha(Fecha);

    protected:

    private:
        int idVenta;
        char dniCliente[9];
        int idLibro;
        double importeVenta;
        int idMedioDePago;
        Fecha fecha;
};

#endif // VENTA_H
