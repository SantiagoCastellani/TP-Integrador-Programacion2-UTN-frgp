#ifndef AUTOR_H
#define AUTOR_H


class Autor
{
    public:

        const char *ARCHIVO_AUTORES = "Autores.dat";

        Autor();

        Autor(int IdAutor,char* Nombre,char* Apellido,char* CodAutor);

        // Cargar AUTOR
        Autor cargarAutor();

        // REGISTRAR un AUTOR en ARCHIVO
        void registrarAutor(Autor);

        // Mostrar AUTOR
        void mostrarAutor(Autor);

        // LEER Archivo de AUTORES
        void leerArchivoAutor();

        // Devuelve el proximo Id a setear
        int proximoIdAutor();

        // Devuelve AUTOR By ID
        Autor buscarAutorById(int);



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
