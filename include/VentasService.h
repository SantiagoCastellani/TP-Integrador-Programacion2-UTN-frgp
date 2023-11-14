#ifndef VENTASSERVICE_
#define VENTASSERVICE_
#include "Venta.h"
#include "DetalleVenta.h"
#include "MedioDePago.h"

class VentasService
{
    public:
        VentasService();

        /// VENTAS

        // Devuelve una Venta segun un IdVenta
        Venta buscarVentaById(int);

        // Carga una Venta
        Venta cargarVenta();
        Venta cargarVentaDesdeMenu();

        // Guarda una Venta en el Archivo
        void registrarVenta(Venta);

        // Muestra una Venta
        void mostrarVenta(Venta);

        // Leer Archivo de Ventas
        void leerArchivoVentas();

        // Devuelve DetalleVenta segun un IdVenta
        DetalleVenta detalleDeVenta(int);

        // Devuelve el proximo IdVenta (el mayor +1 )
        int proximoIdVenta();

        /// MEDIOS DE PAGO

        // Devuelve un MedioDePago ById
        MedioDePago buscarMedioDePagoById(int);

        float devolverRecargo(int id);

        // Cargar un MedioDePago
        MedioDePago cargarMedioDePago();
        bool existeMedio(int id);
        double aplicarRecargo(double importe, float recargo);


        // Registrar MedioDePago en Archivo.
        void registrarMedioDePago(MedioDePago);

        // Leer Archivo de Medios de Pago
        void leerArchivoMedioDePago();
        void leerArchivoMedioDePagoMenu();

        // Mostrar MedioDePago
        void mostrarMedioDePago(MedioDePago);
        void mostrarMedioDePagoMenu(MedioDePago);
        void mostrarMedioDePagoDetalle(MedioDePago);

        // Modificar MedioDePago
        void modificarMedioDePago(MedioDePago);

        // Buscar y  Mostrar Venta
        void buscarYMostrarVenta(int id);

        // Existe Venta?
        bool existeVenta(int id);

        // Generar Comprobante
        void generarComprobante(int id);

        // Listar Ventas por DNI Cliente;
        void ventasByCliente();
        void ventasByGenero();
        void mostrarDetalleReducido(DetalleVenta detalle);
        bool existeVentaByDni(char * dni);
        bool existeVentaByIdGenero(int id);
        bool existeVentaByIdEditorial(int id);
        void ventasByEditorial();
        bool existeVentaByIdMedio(int id);
        void ventasByMedioDePago();

    protected:

    private:
};

#endif // VENTASSERVICE_
