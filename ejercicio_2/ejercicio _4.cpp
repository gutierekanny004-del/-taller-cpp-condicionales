#include <iostream>
#include <cmath>

int main() {

    double a, b;
    char op;

    std::cin >> a >> b >> op;

    switch(op) {

        case '+': std::cout << a + b; break;
        case '-': std::cout << a - b; break;
        case '*': std::cout << a * b; break;

        case '/':
            if (b != 0) std::cout << a / b;
            else std::cout << "Error";
            break;

        case '%':
            if (b != 0) std::cout << fmod(a,b);
            else std::cout << "Error";
            break;

        default:
            std::cout << "Operador invalido";
    }

    return 0;
}no 
