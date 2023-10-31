#ifndef EDITORIAL_H
#define EDITORIAL_H


class Editorial
{
    public:
        Editorial();
        Editorial(int idEditorial,char* nombre);

        /// GETTERS
        int getIdEditorial();
        const char* getNombre();

        /// SETTERS
        void setIdEditorial(int);
        void setNombre(const char*);

    protected:

    private:
        int _idEditorial;
        char _nombre[30];
};

#endif // EDITORIAL_H
