#include "Fecha.h"

Fecha::Fecha()
{
    _dia=1;
    _mes=1;
    _anio=1900;
}

Fecha::Fecha(int dia,int mes,int anio){
    this->_dia=dia;
    this->_mes=mes;
    this->_anio=anio;
};

std::string Fecha::fechaFormateada(){
    return std::to_string(_dia) + "/" + std::to_string(_mes)+ "/" + std::to_string(_anio);
}

// Cargar Fecha
Fecha Fecha::cargarFecha(){
    int dia,mes,anio;
    std::cout<<"Dia: ";
    std::cin>>dia;
    std::cout<<"Mes: ";
    std::cin>>mes;
    std::cout<<"Anio: ";
    std::cin>>anio;
    Fecha fecha(dia,mes,anio);
    return fecha;
};

/// Getters
int Fecha::getDia(){
    return _dia;
};
int Fecha::getMes(){
    return _mes;
};
int Fecha::getAnio(){
    return _anio;
};

/// Setters
void Fecha::setDia(int dia){
    this->_dia=dia;
};
void Fecha::setMes(int mes){
    this->_mes=mes;
};
void Fecha::setAnio(int anio){
    this->_anio=anio;
};
