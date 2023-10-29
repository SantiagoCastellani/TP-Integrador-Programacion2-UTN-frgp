#ifndef VENTASSERVICE_
#define VENTASSERVICE_
#include "Venta.h"

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

    protected:

    private:
};

#endif // VENTASSERVICE_
