#include "Fecha.h"

Fecha::Fecha()
{
    dia=1;
    mes=1;
    anio=1900;
}

Fecha::Fecha(int dia,int mes,int anio){
    this->dia=dia;
    this->mes=mes;
    this->anio=anio;
};

/// Getters
int Fecha::getDia(){
    return dia;
};
int Fecha::getMes(){
    return mes;
};
int Fecha::getAnio(){
    return anio;
};

/// Setters
void Fecha::setDia(int dia){
    this->dia=dia;
};
void Fecha::setMes(int mes){
    this->mes=mes;
};
void Fecha::setAnio(int anio){
    this->anio=anio;
};
