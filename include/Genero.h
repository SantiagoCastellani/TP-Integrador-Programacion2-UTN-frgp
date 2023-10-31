#ifndef GENERO_H
#define GENERO_H


class Genero
{
    public:
        Genero();
        Genero(int idGenero,char* genero);

        /// GETTERS
        int getIdGenero();
        const char* getGenero();

        /// SETTERS
        void setIdGenero(int);
        void setGenero(const char*);

    protected:

    private:
        int _idGenero;
        char _genero[30];
};

#endif // GENERO_H
