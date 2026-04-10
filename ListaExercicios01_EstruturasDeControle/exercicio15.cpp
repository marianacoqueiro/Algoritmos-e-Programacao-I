//Faça um programa que peça dois números e imprima o maior deles.

#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    double numero1, numero2;

    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;

    if (numero1 > numero2) {
        cout << "Maior número: " << numero1 << endl;
    } else {
        cout << "Maior número: " << numero2 << endl; 
    }

    return 0;
}