#ifndef FECHA_H
#define FECHA_H


class Fecha
{
    public:
        Fecha();

        Fecha(int dia,int mes,int anio);

        /// Getters
        int getDia();
        int getMes();
        int getAnio();

        /// Setters
        void setDia(int);
        void setMes(int);
        void setAnio(int);

    protected:

    private:
        int dia;
        int mes;
        int anio;
};

#endif // FECHA_H
