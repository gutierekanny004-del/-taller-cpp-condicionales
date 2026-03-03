#include <iostream>

int main() {

     cost int LEER = 0b001;
     cost int ESCRIBIR = 0b010;
     cost int EJECUTAR = 0b100;

    int permisos;

    std::cout << "Ingrese valor de permisos (0-7): ";
    std::cin >> permisos;

    std::cout << "\nPermisos actuales:\n";


    if (permisos & LEER)
        std::cout << "Puede LEER\n";

    if (permisos & ESCRIBIR)
        std::cout << "Puede ESCRIBIR\n";

    if (permisos & EJECUTAR)
        std::cout << "Puede EJECUTAR\n";

    
    permisos = permisos | EJECUTAR;

    std::cout << "\nDespues de agregar EJECUTAR:\n";

    if (permisos & EJECUTAR)
        std::cout << "Ahora puede EJECUTAR\n";

    
    permisos = permisos & ~LEER;

    std::cout << "\nDespues de quitar LEER:\n";

    if (!(permisos & LEER))
        std::cout << "Ya no puede LEER\n";

    return 0;
}
