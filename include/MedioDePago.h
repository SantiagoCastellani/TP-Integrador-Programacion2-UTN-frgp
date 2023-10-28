#ifndef MEDIODEPAGO_H
#define MEDIODEPAGO_H


class MedioDePago
{
    public:
        MedioDePago();

        MedioDePago(int,char*,float,int);

        /// GETTERS
        int getId();
        const char* getNombre();
        float getRecargo();
        int getCantCuotas();

        /// SETTERS
        void setId(int);
        void setNombre(const char*);
        void getRecargo(float);
        void getCantCuotas(int);

    protected:

    private:
        int id;
        char nombre[30];
        float recargo;
        int cantCuotas;
};

#endif // MEDIODEPAGO_H
