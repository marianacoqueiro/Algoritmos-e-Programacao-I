//Faça um programa que leia três números e mostre o maior deles.

#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    double numero1, numero2, numero3, maior;

    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;

    cout << "Digite o terceiro número: ";
    cin >> numero3;

    if (numero1 > numero2 && numero1 > numero3){
        maior = numero1;
    } else if (numero2 > numero3) {
        maior = numero2;
    } else {
        maior = numero3;
    }

    cout << "Maior número: " << maior << endl;

    return 0;
}