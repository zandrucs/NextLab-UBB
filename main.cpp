#include <iostream>

// Funcția care calculează suma a două numere întregi
int suma(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    std::cout << "Introduceti primul numar: ";
    std::cin >> x;
    std::cout << "Introduceti al doilea numar: ";
    std::cin >> y;

    int rezultat = suma(x, y);
    std::cout << "Suma celor doua numere este: " << rezultat << std::endl;

    return 0;
} 1 2
