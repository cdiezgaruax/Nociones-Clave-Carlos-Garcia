#include <iostream>
#include "Persona.h"
#include "Estudiante.h"

int g = 20;

int suma(int a, int b) {
    return a + b;
}

int main() {

    std::cout << "Hola Mundo" << std::endl;

    std::cout << "La suma es: " << suma(5, 3) << std::endl;

    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;


    Persona persona;
    persona.setNombre("Carlos");
    persona.setEdad(18);
    persona.setGenero("Masculino");

    std::cout << "Detalles de la persona:" << std::endl;
    std::cout << "Nombre: " << persona.getNombre() << std::endl;
    std::cout << "Edad: " << persona.getEdad() << std::endl;
    std::cout << "Genero: " << persona.getGenero() << std::endl;

    std::cout << "Detalles de la persona" << std::endl;
    persona.mostrarDetalles();

    Estudiante estudiante;
    estudiante.setNombre("Carlos");
    estudiante.setEdad(18);
    estudiante.setGenero("Masculino");
    estudiante.setGrado("Ingeniería informática");

    std::cout << "Detalles del estudiante:" << std::endl;
    estudiante.mostrarDetalles();

    return 0;
}