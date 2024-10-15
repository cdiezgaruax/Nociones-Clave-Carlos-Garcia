#include "Persona.h"
#include <iostream>

void Persona::setNombre(const std::string &nombre) {
    this->nombre = nombre;
}

std::string Persona::getNombre() {
    return nombre;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setGenero(const std::string &genero) {
    this->genero = genero;
}

std::string Persona::getGenero() {
    return genero;
}

void Persona::mostrarDetalles() {  // Implement this function
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Genero: " << genero << std::endl;
}