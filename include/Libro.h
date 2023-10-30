#ifndef LIBRO_H
#define LIBRO_H
#include "Fecha.h"


class Libro
{
    public:
        Libro();
        Libro(int IdLibro,char* Titulo,int IdAutor,int IdGenero,int IdEditorial,Fecha FechaPublicacion,float Precio,int Stock);

          /// GETTERS
        int get_IdLibro();
        char* get_Titulo();
        int get_IdAutor();
        int get_IdGenero();
        int get_IdEditorial();
        Fecha get_FechaPublicacion();
        float get_Precio();
        int get_Stock();

        /// SETTERS
        void set_IdLibro(int);
        void set_Titulo(const char*);
        void set_IdAutor(int);
        void set_IdGenero(int);
        void set_IdEditorial(int);
        void set_FechaPublicacion(Fecha);
        void set_Precio(float);
        void set_Stock(int);

    protected:

    private:
        int _IdLibro;
        char _Titulo[100];
        int _IdAutor;
        int _IdGenero;
        int _IdEditorial;
        Fecha _FechaPublicacion;
        float _Precio;
        int _Stock;
};

#endif // LIBRO_H
