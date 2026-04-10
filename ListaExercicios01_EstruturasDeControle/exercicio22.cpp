//Faça um programa que leia três números e mostre-os em ordem decrescente.

#include <iostream>
#include <algorithm>

int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::max;
    using std::min;

    double numero1, numero2, numero3, menor, meio, maior;

    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;

    cout << "Digite o terceiro número: ";
    cin >> numero3;

    menor = min(numero1, min(numero2, numero3));
    maior = max(numero1, max(numero2, numero3));

    if (numero1 != menor && numero1 != maior) {
        meio = numero1;
    } else if (numero2 != menor && numero2 != maior) {
        meio = numero2;
    } else {
        meio = numero3;
    }

    cout << "Números em ordem decrescente: " << maior << ", " << meio << ", " << menor << endl;

    return 0;
}
