#ifndef VENTASSERVICE_
#define VENTASSERVICE_
#include "Venta.h"
#include "DetalleVenta.h"

class VentasService
{
    public:
        VentasService();

        // Devuelve una Venta segun un IdVenta
        Venta buscarVentaById(int);

        // Carga una Venta
        Venta cargarVenta();

        // Guarda una Venta en el Archivo
        void registrarVenta(Venta);

        // Muestra una Venta
        void mostrarVenta(Venta);

        // Leer Archivo de Ventas
        void leerArchivoVentas();

        // Devuelve DetalleVenta segun un IdVenta
        DetalleVenta detalleDeVenta(int);

    protected:

    private:
};

#endif // VENTASSERVICE_
