#ifndef LIBROSERVICE_H
#define LIBROSERVICE_H
#include "Libro.h"

class LibroService
{
    public:

        const char *ARCHIVO_LIBROS = "Libros.dat";

        LibroService();

        /// LIBROS

        // Cargar un Libro
        Libro cargarLibro();

        // Mostrar un Libro
        void mostrarLibro(Libro);

        // Devuelve el proximo Id a setear
        int proximoIdLibro();

        // REGISTRAR un LIBRO en ARCHIVO
        void registrarLibro(Libro);

        // LEER Archivo de LIBROS
        void leerArchivoLibros();

        // Buscar LIBRO By ID
        Libro buscarLibroById(int);

        // Existe LIBRO?
        bool existeLibro(int);

        // Buscar LIBRO por TITULO
        Libro buscarLibroByTitulo();

         // Buscar LIBRO por TITULO
        Libro buscarLibroByTitulo(char*titulo);

        // Existe TITULO?
        bool existeTitulo(char*titulo);

        // Elegir entre Posibles LIBROS
        int devolverIdLibro(char* titulo);

        // Devolver un Id de Libro Elegido
        int elegirLibro(char*titulo);

    protected:

    private:
};

#endif // LIBROSERVICE_H
