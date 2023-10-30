#include "Editorial.h"
#include "string.h"

Editorial::Editorial(){
}

Editorial::Editorial(int IdEditorial,char* editorial){
    _IdEditorial=IdEditorial;
    strcpy(_editorial,editorial);
}

/// GETTERS
int Editorial::get_IdEditorial(){
    return _IdEditorial;
}
const char* Editorial::get_editorial(){
    return _editorial;
}

/// SETTERS
void Editorial::set_IdEditorial(int IdEditorial){
    _IdEditorial=IdEditorial;
}
void Editorial::set_editorial(const char* editorial){
    strcpy(_editorial,editorial);
}
