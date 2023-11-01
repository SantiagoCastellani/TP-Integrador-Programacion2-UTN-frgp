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

    protected:

    private:
};

#endif // LIBROSERVICE_H
