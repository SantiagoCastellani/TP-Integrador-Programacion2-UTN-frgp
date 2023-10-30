#ifndef GENERO_H
#define GENERO_H


class Genero
{
    public:
        Genero();
        Genero(int IdGenero,char* Genero);

        /// GETTERS
        int get_IdGenero();
        const char* get_Genero();

        /// SETTERS
        void set_IdGenero(int);
        void set_Genero(const char*);

    protected:

    private:
        int _IdGenero;
        char _Genero[30];
};

#endif // GENERO_H
