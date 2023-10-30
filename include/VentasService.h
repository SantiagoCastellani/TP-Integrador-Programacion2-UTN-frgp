#ifndef VENTASSERVICE_
#define VENTASSERVICE_
#include "Venta.h"
#include "DetalleVenta.h"
#include "MedioDePago.h"

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

        /// MEDIOS DE PAGO

        // Devuelve un MedioDePago ById
        MedioDePago buscarMedioDePagoById(int);

        // Cargar un MedioDePago
        MedioDePago cargarMedioDePago();

        // Registrar MedioDePago en Archivo.
        void registrarMedioDePago(MedioDePago);

        // Leer Archivo de Medios de Pago
        void leerArchivoMedioDePago();

        // Mostrar MedioDePago
        void mostrarMedioDePago(MedioDePago);

        // Modificar MedioDePago
        void modificarMedioDePago(MedioDePago);

    protected:

    private:
};

#endif // VENTASSERVICE_
