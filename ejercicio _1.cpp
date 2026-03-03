#include <iostream>
#include <iomanip>
int main() {
double celsius, fahrenheit, kelvin, rankine;
std::cout << "Ingrese temperatura en Celsius: ";
std::cin>> celsius;
fahrenheit = celsius * 9.0/5.0 + 32;
Kelvin = celsius + 273.15;
Rankine = Kelvin * 9.0/5.0;
std::cout <<fixed << std::setprecision(2);

   return 0;
}
