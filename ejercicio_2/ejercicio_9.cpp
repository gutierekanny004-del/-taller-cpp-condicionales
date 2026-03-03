#include <iostream>

int main() {

    double peso, altura, imc;

    std::cin >> peso >> altura;

    imc = peso / (altura * altura);

    std::cout << "IMC: "  << "\n";

    if (imc < 18.5)
        std::cout << "Bajo peso - Mejorar alimentacion\n";
    else if (imc < 25)
        std::cout << "Normal - Mantener habitos saludables\n";
    else if (imc < 30)
        std::cout << "Sobrepeso - Hacer mas ejercicio\n";
    else if (imc < 35)
        std::cout << "Obesidad I - Consultar medico\n";
    else
        std::cout << "Obesidad II - Atencion profesional recomendada\n";

    return 0;
}
