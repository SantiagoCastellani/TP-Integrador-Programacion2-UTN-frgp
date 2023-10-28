#include "MedioDePago.h"
#include "string.h"

MedioDePago::MedioDePago()
{
    id=0;
    strcpy(nombre,"000");
    recargo=0;
    cantCuotas=0;
}

MedioDePago::MedioDePago(int idP,char* nombreP,float recargoP,int cantCuotasP)
{
    this->id=idP;
    strcpy(nombre,nombreP);
    this->recargo=recargoP;
    this->cantCuotas=cantCuotasP;
}

/// GETTERS
int MedioDePago::getId(){
    return id;
};
const char* MedioDePago::getNombre(){
    return nombre;
};
float MedioDePago::getRecargo(){
    return recargo;
};
int MedioDePago::getCantCuotas(){
    return cantCuotas;
};

/// SETTERS
void MedioDePago::setId(int id){
    this->id=id;
};
void MedioDePago::setNombre(const char* nombreP){
    strcpy(nombre,nombreP);
};
void MedioDePago::getRecargo(float recargoP){
    this->recargo=recargoP;
};
void MedioDePago::getCantCuotas(int cantCuotasP){
    this->cantCuotas=cantCuotasP;
};
