#ifndef AUTOR_H
#define AUTOR_H


class Autor
{
    public:
        Autor();

        Autor(int IdAutor,char* Nombre,char* Apellido,char* CodAutor);

        /// GETTERS
        int getIdAutor();
        const char* getNombre();
        const char* getApellido();
        const char* getCodAutor();

        /// SETTERS
        void setIdAutor(int);
        void setNombre(const char*);
        void setApellido(const char*);
        void setCodAutor(const char*);

    protected:

    private:
        int _idAutor;
        char _nombre[25];
        char _apellido[24];
        char _codAutor[5];
};

#endif // AUTOR_H
