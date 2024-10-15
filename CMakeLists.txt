cmake_minimum_required(VERSION 3.29)

project(Nociones_clave)

set(CMAKE_CXX_STANDARD 14)

# Primer executable target (ejercicios del 1 al 2)
add_executable(Nociones_clave
    "Proyecto 1/main.cpp"
    "Proyecto 1/Estudiante.cpp"
    "Proyecto 1/Estudiante.h"
    "Proyecto 1/persona.cpp"
    "Proyecto 1/persona.h"
        "Proyecto 1/main.cpp"
)

include(FetchContent)
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)

# Segundo executable target (Proyecto 2)
add_executable(Proyecto2
    "Proyecto 2/main.cpp"
    "Proyecto 2/nuevo.cpp"
    "Proyecto 2/funciones.cpp"
    "Proyecto 2/funciones.h"
    "Proyecto 2/matematicas.cpp"
    "Proyecto 2/matematicas.h"
)

add_library(matematicas SHARED "Proyecto 2/matematicas.cpp")

target_link_libraries(Proyecto2 PRIVATE fmt::fmt matematicas)

# Tercer executable target (Proyecto 3)
add_executable(Proyecto3
    "Proyecto 3/main.cpp"
    "Proyecto 3/nuevo.cpp"
    "Proyecto 3/funciones.cpp"
    "Proyecto 3/funciones.h"
    "Proyecto 3/matematicas.cpp"
    "Proyecto 3/matematicas.h"
)

target_link_libraries(Proyecto3 PRIVATE fmt::fmt matematicas)