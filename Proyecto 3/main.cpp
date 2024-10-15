#include <iostream>
#include <fmt/core.h>
#include "matematicas.h"
#include "funciones.h"

#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))

int main() {
    fmt::print("hola mundo\n");

    fmt::print("Multiplicación de 2 y 2: {}\n", matematicas::multiplicacion(2, 2));
    fmt::print("División de 6 por 2: {}\n", matematicas::division(6, 2));
    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    std::cout << "La resta es: " << resta(5, 3) << std::endl;

    double radio = 55;
    double area = AREA_CIRCULO(radio);
    std::cout << "El área del círculo es: " << area << std::endl;
    return 0;
}