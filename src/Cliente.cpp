#include "Cliente.h"
#include "string.h"
#include "Fecha.h"

Cliente::Cliente()
{
    strcpy(dni,"00000000");
    strcpy(nombre,"0000");
    strcpy(apellido,"getr");
    strcpy(telefono,"00000000");
    strcpy(email,"00000000");
    fechaNac=Fecha();
    idGeneroFavorito=0;
}

Cliente::Cliente(char* dniP,char* nombreP,char* apellidoP,char* telefonoP,char* emailP,Fecha fecha,int idGeneroFavorito){
    strcpy(dni,dniP);
    strcpy(nombre,nombreP);
    strcpy(apellido,apellidoP);
    strcpy(telefono,telefonoP);
    strcpy(email,emailP);
    this->fechaNac=fecha;
    this->idGeneroFavorito=idGeneroFavorito;
};

/// GETTERS
const char* Cliente::getDni(){
    return dni;
};
const char* Cliente::getNombre(){
    return nombre;
};
const char* Cliente::getApellido(){
    return apellido;
};
const char* Cliente::getTelefono(){
    return telefono;
};
const char* Cliente::getEmail(){
    return email;
};
Fecha Cliente::getFecha(){
    return fechaNac;
};
int Cliente::getIdGeneroFavorito(){
    return idGeneroFavorito;
};

/// SETTERS
void Cliente::setDni(const char* dniP){
    strcpy(dni,dniP);
};
void Cliente::setNombre(const char* nombreP){
    strcpy(nombre,nombreP);
};
void Cliente::setApellido(const char* apellidoP){
    strcpy(apellido,apellidoP);
};
void Cliente::setTelefono(const char* telefonoP){
    strcpy(telefono,telefonoP);
};
void Cliente::setEmail(const char* emailP){
    strcpy(email,emailP);
};
void Cliente::setFecha(Fecha fecha){
    this->fechaNac=fecha;
};
void Cliente::setIdGeneroFavorito(int){
    this->idGeneroFavorito=idGeneroFavorito;
};
