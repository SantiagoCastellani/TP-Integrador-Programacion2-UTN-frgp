#ifndef LIBROSERVICE_H
#define LIBROSERVICE_H
#include "Libro.h"

class LibroService
{
    public:
        LibroService();

        /// LIBROS

        // Cargar un Libro
        Libro cargarLibro();

        // Mostrar un Libro
        void mostrarLibro(Libro);

    protected:

    private:
};

#endif // LIBROSERVICE_H
