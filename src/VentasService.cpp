#include "VentasService.h"
#include "ClienteService.h"
#include "LibroService.h"
#include <cstdio>
#include "string.h"
#include "../properties.h"
#include "Fecha.h"
#include "Genero.h"
#include "Editorial.h"
#include "menu.h"


MedioDePago ms;
ClienteService cServ;
LibroService lServ;
Genero gSe;
Editorial eSe;


VentasService::VentasService(){};

/*****************************************************************************/

/// VENTAS

/// Devuelve una Venta segun un IdVenta
Venta VentasService::buscarVentaById(int id){
    Venta v;
    return v;
};

/// TODO: Metodo alternativo para cargar ventas.
/// Carga una Venta
Venta VentasService::cargarVenta(){
    std::cout << "CARGAR VENTA" <<std::endl;
    char dni[9];
    int idVenta = proximoIdVenta();
    int idLibro;
    double importeVenta;
    int idMedioDePago;
    Fecha fecha(11,8,2023);
    std::cin.ignore();
    std::cout << "Ingresar DNI CLIENTE" <<std::endl;
    std::cin.getline(dni,9);
    std::cout << "Ingresar ID LIBRO" <<std::endl;
    std::cin>>idLibro;
    std::cout << "Ingresar IMPORTE de VENTA" <<std::endl;
    std::cin>>importeVenta;
    std::cout << "Ingresar ID MEDIO de PAGO" <<std::endl;
    std::cin>>idMedioDePago;
    Venta v(idVenta,dni,idLibro,importeVenta,idMedioDePago,fecha);
    return v;
};

/// Guarda una Venta en el Archivo
void VentasService::registrarVenta(Venta venta){
    FILE *archivo;
    archivo = fopen(ARCHIVO_REGISTROVENTAS,"ab");
    fwrite(&venta,sizeof(Venta),1,archivo);
    fclose(archivo);
};

/// Muestra una Venta determinada
void VentasService::mostrarVenta(Venta v){
    std::cout << " Nro Venta: "<<v.getIdVenta()<<std::endl;
    std::cout << " Dni Cliente: "<<v.getDniCliente()<<std::endl;
    /// TODO: Reemplazar por Titulo de Libro
    std::cout << " Id LIBRO: "<<v.getIdLibro()<<std::endl;
    std::cout << " Importe: $"<<v.getImporteVenta()<<std::endl;
    /// TODO: Reemplazar por Medio de Pago
    std::cout << " Id Medio de Pago: "<<v.getMedioDePago()<<std::endl;
    std::cout << " Fecha: "<<v.getFecha().fechaFormateada()<<std::endl;
    std::cout << "  "<<std::endl;
};

/// Leer Archivo de Ventas
void VentasService::leerArchivoVentas(){
    FILE *archivo;
    Venta v;
    archivo = fopen(ARCHIVO_REGISTROVENTAS,"rb");
    std::cout<<" "<< std::endl;
    std::cout<<"\tVentas en ARCHIVO"<<std::endl;
    std::cout<<" "<<std::endl;
    while(fread(&v,sizeof(Venta),1,archivo)==1){
        mostrarVenta(v);
    }
    std::cout<<" "<<std::endl;
    fclose(archivo);
};

// Devuelve un DetalleVenta segun un IdVenta
DetalleVenta VentasService::detalleDeVenta(int idVenta){
    Venta v = buscarVentaById(idVenta);
    ///TODO: traer el cliente y el libro segun los id.
    Cliente c;
    Libro l;
    DetalleVenta d;
    return d;
};

// Devuelve el proximo IdVenta (el mayor +1 )
int VentasService::proximoIdVenta(){
    FILE *archivo;
    Venta v;
    int id=0;
    archivo = fopen(ARCHIVO_REGISTROVENTAS,"rb");
    while(fread(&v,sizeof(Venta),1,archivo)==1){
        if(v.getIdVenta()>0){
            id=v.getIdVenta();
        }
    }
    fclose(archivo);
    return id+1;
};


/*****************************************************************************/

/// MEDIOS DE PAGO

// Devuelve un MedioDePago ById
MedioDePago VentasService::buscarMedioDePagoById(int id){
    FILE *archivo;
    MedioDePago medio;
    archivo = fopen(ARCHIVO_MEDIOSDEPAGO,"rb");
    //if(existeMedioDePago(id)){
    if(true){
        while(fread(&medio,sizeof(MedioDePago),1,archivo)==1){
            if(medio.getId()==id){
                return medio;
            }
        }
        fclose(archivo);
    }
    fclose(archivo);
    return medio;
};

// Existe Medio?
bool VentasService::existeMedio(int id){
    FILE *archivo;
    MedioDePago m;
    bool existe=false;
    archivo = fopen(ARCHIVO_MEDIOSDEPAGO,"rb");
    while(fread(&m,sizeof(MedioDePago),1,archivo)==1){
        if(m.getId()==id){
            existe=true;
        }
    }
    fclose(archivo);
    return existe;
};

// Cargar un MedioDePago
MedioDePago VentasService::cargarMedioDePago(){
    char nombre[30];
    float recargo;
    int cantCuotas,id;
    std::cout << "Ingrese ID de Medio de Pago: ";
    std::cin>>id;
    std::cin.ignore();
    std::cout << "Ingrese NOMBRE de Medio de Pago: ";
    std::cin.getline(nombre,30);
    std::cout << "Ingrese Indice de RECARGO (Ejemplo: 1.21) ";
    std::cin>>recargo;
    std::cout << "Ingrese cantidad de CUOTAS: ";
    std::cin>>cantCuotas;
    MedioDePago m(id,nombre,recargo,cantCuotas);
    return m;
};


// Registrar MedioDePago en Archivo.
void VentasService::registrarMedioDePago(MedioDePago medio){
    FILE *archivo;
    archivo = fopen(ARCHIVO_MEDIOSDEPAGO,"ab");
    fwrite(&medio,sizeof(MedioDePago),1,archivo);
    fclose(archivo);
};

// Leer Archivo de Medios de Pago
void VentasService::leerArchivoMedioDePago(){
    FILE *archivo;
    MedioDePago m;
    archivo = fopen(ARCHIVO_MEDIOSDEPAGO,"rb");
    std::cout<<" "<< std::endl;
    std::cout<<"\tVentas en ARCHIVO"<<std::endl;
    std::cout<<" "<<std::endl;
    while(fread(&m,sizeof(MedioDePago),1,archivo)==1){
        mostrarMedioDePago(m);
    }
    std::cout<<" "<<std::endl;
    fclose(archivo);
};

// Mostrar Medio de Pago
void VentasService::mostrarMedioDePago(MedioDePago m){
    std::cout<<"ID: "<< m.getId()<< std::endl;
    std::cout<<"NOMBRE: "<< m.getNombre()<< std::endl;
    std::cout<<"RECARGO: "<< m.getRecargo()<<std::endl;
    std::cout<<"Cant CUOTAS: "<< m.getCantCuotas()<< std::endl;
};

void VentasService::mostrarMedioDePagoMenu(MedioDePago m){
    std::cout<<"ID: "<< m.getId()<<" - "<< m.getNombre()<<" - Cuotas: " << m.getCantCuotas()<< std::endl;
};

void VentasService::mostrarMedioDePagoDetalle(MedioDePago m){
    std::cout<<"\t"<<m.getNombre()<<" - Cuotas: " << m.getCantCuotas()<<" - (Rec:"<<m.getRecargo()<<")"<<std::endl;
};

void VentasService::leerArchivoMedioDePagoMenu(){
    FILE *archivo;
    MedioDePago m;
    archivo = fopen(ARCHIVO_MEDIOSDEPAGO,"rb");
    std::cout<<" "<< std::endl;
    std::cout<<"\tMedios de Pago Disponibles"<<std::endl;
    std::cout<<" "<<std::endl;
    while(fread(&m,sizeof(MedioDePago),1,archivo)==1){
        mostrarMedioDePagoMenu(m);
    }
    std::cout<<" "<<std::endl;
    fclose(archivo);
};

// Modificar MedioDePago
void VentasService::modificarMedioDePago(MedioDePago medio){
    FILE *archivo;
    int res=-1;
    MedioDePago m;
    archivo = fopen(ARCHIVO_MEDIOSDEPAGO,"rb+");
    while(fread(&m,sizeof(MedioDePago),1,archivo)==1){
        if(medio.getId()==m.getId()){
            std::cin.ignore();
            fseek(archivo,ftell(archivo)-sizeof(MedioDePago),0);
            std::cout<<"\tIngrese los datos del Medio de Pago a modificar"<<std::endl;
            std::cout<<" "<<std::endl;
            std::cout<<" Ingrese NOMBRE: ";
            char nombre[30];
            std::cin.getline(nombre,30);
            m.setNombre(nombre);
            std::cout<<" Ingrese RECARGO: ";
            float recargo;
            std::cin>>recargo;
            m.setRecargo(recargo);
            std::cout<<" Ingrese cant CUOTAS: ";
            int cantCuotas;
            std::cin>>cantCuotas;
            m.setCantCuotas(cantCuotas);
            res = fwrite(&m,sizeof(MedioDePago),1,archivo);
            fclose(archivo);
        }
    }
}

// Devuelve el RECARGO segun el id elegido.
float VentasService::devolverRecargo(int id){
//    bool existe=false;
//    do{
//        existe = existeMedio(id);
//        if(!existe){
//            std::cout<<"\tID invalido. Elija uno correcto."<<std::endl;
//            std::cout << " ";
//            std::cout << "Ingresar ID MEDIO de PAGO: ";
//            int idMedioDePago;
//            std::cin>>idMedioDePago;
//            id=idMedioDePago;
//        }
//    }while(!existe);
    MedioDePago medio = buscarMedioDePagoById(id);
    return medio.getRecargo();
}

/*****************************************************************************/

// Carga VENTA desde MENU
Venta VentasService::cargarVentaDesdeMenu(){
    Fecha fS;
    char dni[9];
    int idVenta = proximoIdVenta();
    int idLibro;
    double importeVenta;
    int idMedioDePago;
    std::cout << "\tIngresar ID LIBRO: ";
    std::cin>>idLibro;
    Libro libro;
    Cliente cliente;
    if(lServ.existeLibro(idLibro)){
        libro = lServ.buscarLibroById(idLibro);
        std::cout << " "<<std::endl;
        std::cout << "\tLibro: "<<std::endl;
        lServ.infoBasicaLibro(idLibro);
        std::cout << " "<<std::endl;
    } else {
        std::cout << " "<<std::endl;
        std::cout << "\tId Incorrecto. Ese libro no esta registrado, por favor buscar nuevamente."<<std::endl;
        std::cout << " "<<std::endl;
        system("pause");
        menuBuscarLibro();
    }
    std::cin.ignore();
    std::cout << "\tIngresar DNI CLIENTE: ";
    std::cin.getline(dni,9);
    if(cServ.existeCliente(dni)){
        cliente = cServ.buscarClientexDni(dni);
        std::cout << " "<<std::endl;
        std::cout << "\tCliente: "<<std::endl;
        cServ.mostrarClienteRegistrado(cliente);
        std::cout << " "<<std::endl;
    } else {
        std::cout << " "<<std::endl;
        std::cout << "\tEse Cliente NO esta registrado. POr favor cargue los datos del cliente."<<std::endl;
        std::cout << " "<<std::endl;
        system("pause");
        menuClientes();
    }
    std::cout << "\tEl importe a pagar es: $"<<libro.getPrecio()<< " , de que forma desea abonarlo?"<<std::endl;;
    leerArchivoMedioDePagoMenu();
    std::cout << "Ingresar ID MEDIO de PAGO: ";
    std::cin>>idMedioDePago;
    bool existe=false;
    do{
        existe = existeMedio(idMedioDePago);
        if(!existe){
            std::cout<<"\tID invalido. Elija uno correcto."<<std::endl;
            std::cout << " ";
            std::cout << "Ingresar ID MEDIO de PAGO: ";
            int id;
            std::cin>>id;
            idMedioDePago=id;
        }
    }while(!existe);
    float recargo = devolverRecargo(idMedioDePago);
    double importeTotal = aplicarRecargo(libro.getPrecio(),recargo);
    std::cout << "Medio de pago elegido: "<<std::endl;
    MedioDePago m=buscarMedioDePagoById(idMedioDePago);
    mostrarMedioDePagoMenu(m);
    std::cout << "IMPORTE TOTAL: $"<<importeTotal<<std::endl;
    std::cout << " "<<std::endl;
    std::cout << "Ingresar Fecha:" <<std::endl;
    Fecha fecha = fS.cargarFecha();
    Venta v(idVenta,dni,idLibro,importeTotal,idMedioDePago,fecha);
    return v;
};

// Buscar y  Mostrar Venta
void VentasService::buscarYMostrarVenta(int id){
    bool existe = existeVenta(id);
    if(existe){
        system("cls");
        generarComprobante(id);
    } else {
        std::cout<<" "<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<"\tEl numero de venta NO esta registrado."<<std::endl;
        std::cout<<" "<<std::endl;
        std::cout<<" "<<std::endl;
    }
}

// Existe Venta?
bool VentasService::existeVenta(int id){
    bool existe = false;
    FILE *archivo;
    Venta v;
    archivo = fopen(ARCHIVO_REGISTROVENTAS,"rb");
    while(fread(&v,sizeof(Venta),1,archivo)==1){
        if(v.getIdVenta()==id){
            existe=true;
        }
    }
    fclose(archivo);
    return existe;
};

// Generar Comprobante
void VentasService::generarComprobante(int id){
    FILE *archivo;
    Venta v;
    Venta venta;
    archivo = fopen(ARCHIVO_REGISTROVENTAS,"rb");
    while(fread(&v,sizeof(Venta),1,archivo)==1){
        if(v.getIdVenta()==id){
            venta=v;
        }
    }
    fclose(archivo);
    DetalleVenta dVS;
    dVS.imprimirDetalle(venta);
};

// Listar VENTAS por DNI Cliente
void VentasService::ventasByCliente(){
    char dni[9];
    std::cin.ignore();
    std::cout<<"\tIngrese el DNI del Cliente: ";
    std::cin.getline(dni,9);
    bool existe = cServ.existeCliente(dni);
    Cliente cliente = cServ.buscarClientexDni(dni);
    int tieneVenta=0;
    if(existe){
        std::cout<<" "<<std::endl;
        std::cout<<"\tCliente Registrado:"<<std::endl;
        std::cout<<" "<<std::endl;
        cServ.mostrarClienteRegistrado(cliente);
        if(existeVentaByDni(dni)){
            std::cout<<" "<<std::endl;
            std::cout<<"\tHa realizado las siguientes compras: "<<std::endl;
        }
        FILE *archivo;
        Venta v;
        archivo = fopen(ARCHIVO_REGISTROVENTAS,"rb");
        while(fread(&v,sizeof(Venta),1,archivo)==1){
            if(strcmp(v.getDniCliente(),dni)==0){
                tieneVenta++;
                DetalleVenta detalle(v);
                mostrarDetalleReducido(detalle);
            }
        }
        fclose(archivo);
        if(tieneVenta==0){
            std::cout<<" "<<std::endl;
            std::cout<<"\tEl cliente NO ha realizado ninguna compra."<<std::endl;
            std::cout<<" "<<std::endl;
        }
    } else {
        std::cout<<" "<<std::endl;
        std::cout<<"\tEl dni NO pertenece a ningun Cliente Registrado"<<std::endl;
        std::cout<<" "<<std::endl;
    }
}

void VentasService::mostrarDetalleReducido(DetalleVenta detalle){
    std::cout<<"\tNro: "<<detalle.getIdVenta()<<" - Libro: "<<detalle.getTituloLibro()<<" - $"<<detalle.getImporteVenta()<<" - Fecha: "<<detalle.getFecha().fechaFormateada()<<std::endl;
}

bool VentasService::existeVentaByDni(char * dni){
    bool existe = false;
    FILE *archivo;
    Venta v;
    archivo = fopen(ARCHIVO_REGISTROVENTAS,"rb");
    while(fread(&v,sizeof(Venta),1,archivo)==1){
        if(strcmp(v.getDniCliente(),dni)==0){
            existe=true;
        }
    }
    fclose(archivo);
    return existe;
};

bool VentasService::existeVentaByIdGenero(int id){
    bool existe = false;
    FILE *archivo;
    Venta v;
    archivo = fopen(ARCHIVO_REGISTROVENTAS,"rb");
    while(fread(&v,sizeof(Venta),1,archivo)==1){
        Libro libro = lServ.buscarLibroById(v.getIdLibro());
        if(libro.getIdGenero()==id){
            existe=true;
        }
    }
    fclose(archivo);
    return existe;
};

bool VentasService::existeVentaByIdEditorial(int id){
    bool existe = false;
    FILE *archivo;
    Venta v;
    archivo = fopen(ARCHIVO_REGISTROVENTAS,"rb");
    while(fread(&v,sizeof(Venta),1,archivo)==1){
        Libro libro = lServ.buscarLibroById(v.getIdLibro());
        if(libro.getIdEditorial()==id){
            existe=true;
        }
    }
    fclose(archivo);
    return existe;
};

bool VentasService::existeVentaByIdMedio(int id){
    bool existe = false;
    FILE *archivo;
    Venta v;
    archivo = fopen(ARCHIVO_REGISTROVENTAS,"rb");
    while(fread(&v,sizeof(Venta),1,archivo)==1){
        if(v.getMedioDePago()==id){
            existe=true;
        }
    }
    fclose(archivo);
    return existe;
};

// Listar VENTAS por DNI Genero
void VentasService::ventasByGenero(){
    int idGenero;
    std::cin.ignore();
    std::cout<<" Generos Disponibles: "<<std::endl;
    gSe.leerArchivoGenerosActivos2();
    std::cout<<"\tIngrese el ID del Genero: ";
    std::cin>>idGenero;
    bool existeG = gSe.existeGenero(idGenero);
    int tieneVenta=0;
    if(existeG){
        if(existeVentaByIdGenero(idGenero)){
            std::cout<<" "<<std::endl;
            std::cout<<"\tSe han realizado las siguientes compras: "<<std::endl;
        }
        FILE *archivo;
        Venta v;
        archivo = fopen(ARCHIVO_REGISTROVENTAS,"rb");
        while(fread(&v,sizeof(Venta),1,archivo)==1){
            Libro libro = lServ.buscarLibroById(v.getIdLibro());
            if(libro.getIdGenero()==idGenero){
                tieneVenta++;
                DetalleVenta detalle(v);
                mostrarDetalleReducido(detalle);
            }
        }
        fclose(archivo);
        if(tieneVenta==0){
            std::cout<<" "<<std::endl;
            std::cout<<"\tEl Genero No tuvo ninguna Venta asociada."<<std::endl;
            std::cout<<" "<<std::endl;
        }
    } else {
        std::cout<<" "<<std::endl;
        std::cout<<"\tId de Genero Incorrecto"<<std::endl;
        std::cout<<" "<<std::endl;
    }
}

// Listar VENTAS por DNI Genero
void VentasService::ventasByEditorial(){
    int idEditorial;
    std::cin.ignore();
    std::cout<<" Editoriales Disponibles: "<<std::endl;
    eSe.leerArchivoEditorial2();
    std::cout<<"\tIngrese el ID de la Editorial: ";
    std::cin>>idEditorial;
    bool existeE = eSe.existeEditorial(idEditorial);
    int tieneVenta=0;
    if(existeE){
        if(existeVentaByIdEditorial(idEditorial)){
            std::cout<<" "<<std::endl;
            std::cout<<"\tSe han realizado las siguientes compras: "<<std::endl;
        }
        FILE *archivo;
        Venta v;
        archivo = fopen(ARCHIVO_REGISTROVENTAS,"rb");
        while(fread(&v,sizeof(Venta),1,archivo)==1){
            Libro libro = lServ.buscarLibroById(v.getIdLibro());
            if(libro.getIdEditorial()==idEditorial){
                tieneVenta++;
                DetalleVenta detalle(v);
                mostrarDetalleReducido(detalle);
            }
        }
        fclose(archivo);
        if(tieneVenta==0){
            std::cout<<" "<<std::endl;
            std::cout<<"\tLa editorial No tuvo ninguna Venta asociada."<<std::endl;
            std::cout<<" "<<std::endl;
        }
    } else {
        std::cout<<" "<<std::endl;
        std::cout<<"\tId de Editorial Incorrecto"<<std::endl;
        std::cout<<" "<<std::endl;
    }
}

// Listar VENTAS por DNI MEDIO DE PAGO
void VentasService::ventasByMedioDePago(){
    int id;
    std::cin.ignore();
    std::cout<<" Medios de Pago Disponibles: "<<std::endl;
    leerArchivoMedioDePagoMenu();
    std::cout<<"\tIngrese el ID de Medio De Pago: ";
    std::cin>>id;
    bool existeM = existeMedio(id);
    int tieneVenta=0;
    if(existeM){
        if(existeVentaByIdMedio(id)){
            std::cout<<" "<<std::endl;
            std::cout<<"\tSe han realizado las siguientes compras: "<<std::endl;
        }
        FILE *archivo;
        Venta v;
        archivo = fopen(ARCHIVO_REGISTROVENTAS,"rb");
        while(fread(&v,sizeof(Venta),1,archivo)==1){
            if(v.getMedioDePago()==id){
                tieneVenta++;
                DetalleVenta detalle(v);
                mostrarDetalleReducido(detalle);
            }
        }
        fclose(archivo);
        if(tieneVenta==0){
            std::cout<<" "<<std::endl;
            std::cout<<"\tEl Medio de Pago No tuvo ninguna Venta asociada."<<std::endl;
            std::cout<<" "<<std::endl;
        }
    } else {
        std::cout<<" "<<std::endl;
        std::cout<<"\tId de Medio de Pago Incorrecto"<<std::endl;
        std::cout<<" "<<std::endl;
    }
}

// Aplicar recargo segun Medio de Pago
double VentasService::aplicarRecargo(double importe, float recargo){
    return importe*recargo;
}

