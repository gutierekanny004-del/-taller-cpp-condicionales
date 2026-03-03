#include <iostream>

int main() {

    double saldo = 1000;
    double monto;
    int opcion;
    int transacciones = 0;

    std::cout << "1.Depositar 2.Retirar 3.Consultar\n";
    std::cin >> opcion;

    switch(opcion) {

        case 1:
            std::cin >> monto;
            saldo += monto;
            transacciones++;
            std::cout << "Nuevo saldo: " << saldo;
            break;

        case 2:
            std::cin >> monto;
            if (monto <= saldo) {
                saldo -= monto;
                transacciones++;
                std::cout << "Nuevo saldo: " << saldo;
            } else {
                std::cout << "Saldo insuficiente";
            }
            break;

        case 3:
            std::cout << "Saldo actual: " << saldo;
            break;

        default:
            std::cout << "Opcion invalida";
    }

    std::cout << "\nTransacciones: " << transacciones;

    return 0;
}
