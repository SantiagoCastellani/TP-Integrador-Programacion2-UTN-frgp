#ifndef AUTOR_H
#define AUTOR_H


class Autor
{
    public:
        Autor();

        Autor(int IdAutor,char* Nombre,char* Apellido,char* CodAutor);

        /// GETTERS
        int get_IdAutor();
        const char* get_Nombre();
        const char* get_Apellido();
        const char* get_CodAutor();

        /// SETTERS
        void set_IdAutor(int);
        void set_Nombre(const char*);
        void set_Apellido(const char*);
        void set_CodAutor(const char*);

    protected:

    private:
        int _IdAutor;
        char _Nombre[25];
        char _Apellido[24];
        char _CodAutor[5];
};

#endif // AUTOR_H
