#include <iostream>
#include <cmath>

int main() {

    double a, b, c;

    std::cout << "Ingrese lado 1";
    std::cin >> a;

    std::cout << "Ingrese lado 2";
    std::cin >> b;

    std::cout << "Ingrese lado 3";
    std::cin >> c;

    if (a + b > c && a + c > b && b + c > a) {

        std::cout << "Es un triangulo valido\n";


        if (a == b && b == c) {
            std::cout << "Equilatero\n";
        }
        else if (a == b |a == c | b == c) {
            std::cout << "Isosceles\n";
        }
        else {
            std::cout << "Escaleno\n";
        }

        double mayor = a;

        if (b > mayor)
            mayor = b;

        if (c > mayor)
            mayor = c;

        double sumacuadrados =
            pow(a,2) + pow(b,2) + pow(c,2) - pow(mayor,2);

        double mayorcuadrado = pow(mayor,2);

        
        if (sumacuadrados == mayorcuadrado) {
            std::cout << "Rectangulo\n";
        }
        else if (sumacuadrados > mayorc uadrado) {
            std::cout << "Acutangulo\n";
        }
        else {
            std::cout << "Obtusangulo\n";
        }

    } else {
        std::cout << "No forma un triangulo valido \n";
    }

    return 0;
}
