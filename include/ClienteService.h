#ifndef CLIENTESERVICE_H
#define CLIENTESERVICE_H
#include "Cliente.h"

class ClienteService
{
    public:

        //const char *ARCHIVO_CLIENTES = "ClientesTest.dat";

        ClienteService();


       // cargarCliente

//        void setIdGeneroFavorito(int);
       Cliente cargarCliente();

       //mostrarCliente
       void mostrarCliente(Cliente);

       //registrarCliente
       void registrarCliente(Cliente);

       //leerArchivoClientes
       void leerArchivoClentes();

       //buscarClienteDni
       Cliente buscarClientexDni(char* dni);

       //extisteCliente
       bool existeCliente(char* dni);

       //clienteMayorGasto


    protected:

    private:
};

#endif // CLIENTESERVICE_H
