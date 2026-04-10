//Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    double numero;

    cout << "Digite um número: ";
    cin >> numero;

    if (numero > 0) {
        cout << "O número " << numero << " é positivo." << endl;
    } else if (numero < 0) {
        cout << "O número " << numero << " é negativo." << endl;
    } else {
        cout << "O número é 0." << endl;
    }

    return 0;
}