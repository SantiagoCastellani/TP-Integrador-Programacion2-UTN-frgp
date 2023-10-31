#include "LibroService.h"

LibroService::LibroService(){}

/// LIBROS

// Cargar un Libro
Libro LibroService::cargarLibro(){
    std::cout << "CARGAR LIBRO" <<std::endl;
    int idLibro;
    char titulo[100];
    int idAutor;
    int idGenero;
    int idEditorial;
    Fecha fechaPublicacion;
    float precio;
    int stock;

    //Fecha fecha(11,8,2023);

    /// TODO : Reemplazar por funcion: int idLibro = proximoIdLibro();
    std::cout << "Ingresar ID LIBRO: ";
    std::cin>>idLibro;
    std::cin.ignore();
    std::cout << "Ingresar TITULO: ";
    std::cin.getline(titulo,100);
    /// TODO: Reemplazar por codigo de autor
    std::cout << "Ingresar ID AUTOR: ";
    std::cin>>idAutor;
    std::cout << "Ingresar ID GENERO: ";
    std::cin>>idGenero;
    std::cout << "Ingresar ID EDITORIAL: ";
    std::cin>>idEditorial;
    std::cout << "Ingresar FECHA PUBLICACION: "<<std::endl;
    Fecha fecha = fecha.cargarFecha();
    std::cout << "Ingresar PRECIO unitario: ";
    std::cin>>precio;
    std::cout << "Ingresar STOCK: ";
    std::cin>>stock;
    Libro l(idLibro,titulo,idAutor,idGenero,idEditorial,fecha,precio,stock);
    return l;
};

// Mostrar un Libro
void LibroService::mostrarLibro(Libro l){
    std::cout << " Titulo: "<<l.getTitulo()<<std::endl;
    /// TODO: Reemplazar por AUTOR NOMBRE
    std::cout << " Autor: "<<l.getIdAutor()<<std::endl;
    /// TODO: Reemplazar por Nombre Genero
    std::cout << " Genero: "<<l.getIdGenero()<<std::endl;
    /// TODO: Reemplazar por Editorial Nombre
    std::cout << " Editorial: "<<l.getIdEditorial()<<std::endl;
    std::cout << " Fecha Publicacion: "<<l.getFechaPublicacion().fechaFormateada()<<std::endl;
    std::cout << " Precio: "<<l.getPrecio()<<std::endl;
    std::cout << " Stock: "<<l.getStock()<<std::endl;
    std::cout << "  "<<std::endl;
};
