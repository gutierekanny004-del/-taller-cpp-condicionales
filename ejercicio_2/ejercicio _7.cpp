#include <iostream>

int main() {

    int anio;
    std::cin >> anio;

    bool div4 = (anio % 4 == 0);
    bool div100 = (anio % 100 == 0);
    bool div400 = (anio % 400 == 0);

    std::cout << "Divisible entre 4: " << div4 << "\n";
    std::cout << "Divisible entre 100: " << div100 << "\n";
    std::cout << "Divisible entre 400: " << div400 << "\n";

    bool bisiesto = (div4 && !div100) || div400;

    if (bisiesto)
        std::cout << "Es bisiesto\n";
    else
        std::cout << "No es bisiesto\n";

    return 0;
}
