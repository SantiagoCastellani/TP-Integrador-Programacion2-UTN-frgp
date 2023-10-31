#ifndef CLIENTE_H
#define CLIENTE_H
#include "FEcha.h"

class Cliente
{
    public:
        Cliente();

        Cliente(char* dni,char* nombre,char* apellido,char* telefono,char* email,Fecha fecha,int idGeneroFavorito);

        /// GETTERS
        const char* getDni();
        const char* getNombre();
        const char* getApellido();
        const char* getTelefono();
        const char* getEmail();
        Fecha getFecha();
        int getIdGeneroFavorito();

        /// SETTERS
        void setDni(const char*);
        void setNombre(const char*);
        void setApellido(const char*);
        void setTelefono(const char*);
        void setEmail(const char*);
        void setFecha(Fecha);
        void setIdGeneroFavorito(int);

    protected:

    private:
        char _dni[9];
        char _nombre[25];
        char _apellido[24];
        char _telefono[15];
        char _email[100];
        Fecha _fechaNac;
        int _idGeneroFavorito;

};

#endif // CLIENTE_H
