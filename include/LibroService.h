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

        // Funcion Busqueda de LIBRO por TITULO desde MENU
        void buscarLibroTitulo();

//        // Buscar Libro By Titulo
//        Libro buscarLibroByTitulo();

        // Funcion Busqueda de LIBRO por COD AUTOR desde MENU
        void buscarLibroCodAutor();

        // Comparar Titulos
        int compararTitulos(char * tituloBuscado,char *tituloLibro);

        // Cantidad de Libros By Id Autor
        int tieneLibrosByIdAutor(int idAutor);

        /// LISTADOS

        // Lista por GENERO
        void listarPorGenero();

        // Listado By Editorial
        void listarPorEditorial();

        // Listado por TITULO Alfabeticamente
        void listarPorTituloAZ();
        void leerLibrosCargarVector(Libro * vectorLibros);
        void ordenarAlfabeticamente(Libro *vectorLibros,int cantLibros);
        void listarOrdenado(Libro *vectorLibros,int cantLibros);


    protected:

    private:
};

#endif // LIBROSERVICE_H
