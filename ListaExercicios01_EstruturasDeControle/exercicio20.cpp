//Faça um programa que leia três números e mostre o maior e o menor deles.

#include <iostream>
#include <algorithm>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    using std::min;

    double numero1, numero2, numero3, menor;

    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;

    cout << "Digite o terceiro número: ";
    cin >> numero3;

    menor = min(numero1, min(numero2, numero3)); 

    cout << "Menor número: " << menor << endl;

    return 0;
}