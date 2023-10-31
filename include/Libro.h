#ifndef LIBRO_H
#define LIBRO_H
#include "Fecha.h"


class Libro
{
    public:
        Libro();
        Libro(int IdLibro,char* Titulo,int IdAutor,int IdGenero,int IdEditorial,Fecha FechaPublicacion,float Precio,int Stock);

          /// GETTERS
        int getIdLibro();
        char* getTitulo();
        int getIdAutor();
        int getIdGenero();
        int getIdEditorial();
        Fecha getFechaPublicacion();
        float getPrecio();
        int getStock();

        /// SETTERS
        void setIdLibro(int);
        void setTitulo(const char*);
        void setIdAutor(int);
        void setIdGenero(int);
        void setIdEditorial(int);
        void setFechaPublicacion(Fecha);
        void setPrecio(float);
        void setStock(int);

    protected:

    private:
        int _idLibro;
        char _titulo[100];
        int _idAutor;
        int _idGenero;
        int _idEditorial;
        Fecha _fechaPublicacion;
        float _precio;
        int _stock;
};

#endif // LIBRO_H
