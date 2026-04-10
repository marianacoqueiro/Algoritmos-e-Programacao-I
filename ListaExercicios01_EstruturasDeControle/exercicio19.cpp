//Faça um programa que leia três números e mostre o maior deles.

#include <iostream>
#include <algorithm>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    using std::max;

    double numero1, numero2, numero3, maior;

    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;

    cout << "Digite o terceiro número: ";
    cin >> numero3;

    maior = max(numero1, max(numero2, numero3)); 

    cout << "Maior número: " << maior << endl;

    return 0;
}