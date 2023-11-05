#include "ClienteService.h"
#include "Cliente.h"
#include "Fecha.h"
#include "string.h"


ClienteService::ClienteService(){}

const char *ARCHIVO_CLIENTES = "ClientesTest.dat";

Cliente ClienteService::cargarCliente(){
    std::cout << "CARGAR CLIENTE" <<std::endl;
    char dni[9];
    char nombre[25];
    char apellido[24];
    char telefono[15];
    char email[100];
    Fecha fecha;
    int idGeneroFavorito;
    std::cout<< "Ingrese DNI Cliente: "<<std::endl;
    std::cin.getline(dni,9);
    std::cout<< "Ingrese Nombre: "<<std::endl;
    std::cin.getline(nombre,25);
    std::cout<< "Ingrese Apellido: "<<std::endl;
    std::cin.getline(apellido,24);
    std::cout<< "Ingrese Telefono: "<<std::endl;
    std::cin.getline(telefono,15);
    std::cout<< "Ingrese Email:" <<std::endl;
    std::cin.getline(email,100);
    std::cout<< "Ingrese fecha de nacimiento: "<<std::endl;
    Fecha fechaNacimiento = fecha.cargarFecha();
    std::cout<< "Ingrese IdGenero Favorito: "<<std::endl;
    std::cin>>idGeneroFavorito;
    std::cin.ignore();
    Cliente c(dni,nombre,apellido,telefono,email,fechaNacimiento,idGeneroFavorito);
    return c;
}

//registrarCliente
void ClienteService::registrarCliente(Cliente cliente){
    FILE *archivo;
    archivo = fopen(ARCHIVO_CLIENTES,"ab");
    fwrite(&cliente,sizeof(Cliente),1,archivo);
    fclose(archivo);
}

//extisteCliente
bool ClienteService::existeCliente(char* dni){
    FILE *archivo;
    Cliente cliente;
    bool existe = false;
    archivo = fopen(ARCHIVO_CLIENTES,"rb");
    while(fread(&cliente,sizeof(Cliente),1,archivo)==1){
        if(strcmp(cliente.getDni(),dni)==1){
            existe =true;
        }
    }
    fclose(archivo);
    return existe;
}

//mostrarCliente
void ClienteService::mostrarCliente(Cliente cliente){
    std::cout << " Dni: "<<cliente.getDni()<<std::endl;
    std::cout << " Nombre: "<<cliente.getNombre()<<std::endl;
    std::cout << " Apellido: "<<cliente.getApellido()<<std::endl;
    std::cout << " Telefono: "<<cliente.getTelefono()<<std::endl;
    std::cout << " Email: "<<cliente.getEmail()<<std::endl;
    std::cout << " Fecha Nacimiento: "<<cliente.getFecha().fechaFormateada()<<std::endl;
    std::cout << " IdGenero Favorito: "<<cliente.getIdGeneroFavorito()<<std::endl;
    std::cout << "  "<<std::endl;
}

//leerArchivoClientes
void ClienteService::leerArchivoClentes(){
FILE *archivo;
    Cliente cliente;
    archivo = fopen(ARCHIVO_CLIENTES,"rb");
    std::cout<<" "<< std::endl;
    std::cout<<"\tCLIENTES en ARCHIVO"<<std::endl;
    std::cout<<" "<<std::endl;
    while(fread(&cliente,sizeof(Cliente),1,archivo)==1){
        mostrarCliente(cliente);
    }
    std::cout<<" "<<std::endl;
    fclose(archivo);
}

//buscarClienteDni
Cliente ClienteService::buscarClientexDni(char* dni){
FILE *archivo;
    Cliente cliente;
    Cliente clienteBuscado;
    archivo = fopen(ARCHIVO_CLIENTES,"rb");
    while(fread(&cliente,sizeof(Cliente),1,archivo)==1){
        if(strcmp(cliente.getDni(),dni)==1){
            clienteBuscado=cliente;
        }
    }
    std::cout<<" "<<std::endl;
    fclose(archivo);
    return clienteBuscado;
}

