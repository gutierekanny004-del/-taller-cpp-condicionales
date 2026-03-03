#include <iostream>

int main() {

    int a = 5, b = 3;

    std::cout << "Original: a=" << a << " b=" << b << "\n";

    {
        int x = a, y = b;
        int temp = x;
        x = y;
        y = temp;
        std::cout << "Temporal: a=" << x << " b=" << y << "\n";
    }
       {
        int x = a, y = b;
        x += y;
        y = x - y;
        x -= y;
        std::cout << "Aritmetico: a=" << x << " b=" << y << "\n";
    }

    
    {
        int x = a, y = b;
        x ^= y;
        y ^= x;
        x ^= y;
        std::cout << "XOR: a=" << x << " b=" << y << "\n";
    }

    return 0;
}
