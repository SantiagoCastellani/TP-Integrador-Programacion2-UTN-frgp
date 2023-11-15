#include "Config.h"
#include "LibroService.h"
#include "VentasService.h"

Config::Config(){}

/// ARCHIVOS de LECTURA
const char *ARCHIVO_LIBROS = "Libros.dat";
const char *ARCHIVO_VENTAS = "RegistrodeVentas.dat";
const char *ARCHIVO_CLIENTES = "Clientes.dat";

/// ARCHIVOS DE BACKUP

const char *BACKUP_LIBROS = "Backup-Libros.bak";
const char *BACKUP_VENTAS = "Backup-Ventas.bak";
const char *BACKUP_CLIENTES = "Backup-Clientes.bak";


// Realizar BACKUP LIBROS
void Config::backupLibros(){
    FILE *archivo;
    archivo=fopen(ARCHIVO_LIBROS,"rb");
    FILE *backup;
    backup=fopen(BACKUP_LIBROS,"ab+");
    Libro libro;
    while(fread(&libro,sizeof(Libro),1,archivo)==1){
        fwrite(&libro,sizeof(Libro),1,backup);
    }
    fclose(archivo);
    fclose(backup);
    std::cout<<" "<<std::endl;
    std::cout<<"\tBackup realizado: Backup-Libros.bak"<<std::endl;
    std::cout<<" "<<std::endl;
};

// Realizar BACKUP VENTAS
void Config::backupVentas(){
    FILE *archivo;
    archivo=fopen(ARCHIVO_VENTAS,"rb");
    FILE *backup;
    backup=fopen(BACKUP_VENTAS,"ab+");
    Venta venta;
    while(fread(&venta,sizeof(Venta),1,archivo)==1){
        fwrite(&venta,sizeof(Venta),1,backup);
    }
    fclose(archivo);
    fclose(backup);
    std::cout<<" "<<std::endl;
    std::cout<<"\tBackup realizado: Backup-Ventas.bak"<<std::endl;
    std::cout<<" "<<std::endl;
};

// Realizar BACKUP CLIENTES
void Config::backupClientes(){
    FILE *archivo;
    archivo=fopen(ARCHIVO_CLIENTES,"rb");
    FILE *backup;
    backup=fopen(BACKUP_CLIENTES,"ab+");
    Cliente cliente;
    while(fread(&cliente,sizeof(Cliente),1,archivo)==1){
        fwrite(&cliente,sizeof(Cliente),1,backup);
    }
    fclose(archivo);
    fclose(backup);
    std::cout<<" "<<std::endl;
    std::cout<<"\tBackup realizado: Backup-Clientes.bak"<<std::endl;
    std::cout<<" "<<std::endl;
};

// Restaurar Archivos LIBROS
void Config::restaurarArchivosLibros(){
    FILE *backup;
    backup=fopen(BACKUP_LIBROS,"rb");
    if(backup){
        FILE *archivo;
        archivo=fopen(ARCHIVO_LIBROS,"wb");
        Libro libro;
        while(fread(&libro,sizeof(Libro),1,backup)==1){
            fwrite(&libro,sizeof(Libro),1,archivo);
        }
        fclose(archivo);
        std::cout<<" "<<std::endl;
        std::cout<<"\tArchivos de Libros Restaurado."<<std::endl;
        std::cout<<" "<<std::endl;
    } else {
        std::cout<<" "<<std::endl;
        std::cout<<"\tERROR: Aun no hay ningun backup realizado!"<<std::endl;
        std::cout<<" "<<std::endl;
    }
    fclose(backup);
};

// Restaurar Archivos VENTAS
void Config::restaurarArchivosVentas(){
    FILE *backup;
    backup=fopen(BACKUP_VENTAS,"rb");
    if(backup){
        FILE *archivo;
        archivo=fopen(ARCHIVO_VENTAS,"wb");
        Venta venta;
        while(fread(&venta,sizeof(Venta),1,backup)==1){
            fwrite(&venta,sizeof(Venta),1,archivo);
        }
        fclose(archivo);
        std::cout<<" "<<std::endl;
        std::cout<<"\tArchivos de Ventas Restaurado."<<std::endl;
        std::cout<<" "<<std::endl;
    } else {
        std::cout<<" "<<std::endl;
        std::cout<<"\tERROR: Aun no hay ningun backup realizado!"<<std::endl;
        std::cout<<" "<<std::endl;
    }
    fclose(backup);
};

// Restaurar Archivos CLIENTES
void Config::restaurarArchivosClientes(){
    FILE *backup;
    backup=fopen(BACKUP_CLIENTES,"rb");
    if(backup){
        FILE *archivo;
        archivo=fopen(ARCHIVO_CLIENTES,"wb");
        Cliente cliente;
        while(fread(&cliente,sizeof(Cliente),1,backup)==1){
            fwrite(&cliente,sizeof(Cliente),1,archivo);
        }
        fclose(archivo);
        std::cout<<" "<<std::endl;
        std::cout<<"\tArchivos de Clientes Restaurado."<<std::endl;
        std::cout<<" "<<std::endl;
    } else {
        std::cout<<" "<<std::endl;
        std::cout<<"\tERROR: Aun no hay ningun backup realizado!"<<std::endl;
        std::cout<<" "<<std::endl;
    }
    fclose(backup);
};
