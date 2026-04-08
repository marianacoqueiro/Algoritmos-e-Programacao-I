/*Faça um programa que peça 2 números inteiros e um número real. Calcule e mostre:
(a) o produto do dobro do primeiro com metade do segundo;
(b) a soma do triplo do primeiro com o terceiro.
(c) o terceiro elevado ao cubo.*/

#include <iostream>
#include <cmath>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    int numeroInteiro1, numeroInteiro2;
    double numeroReal, resultadoOperacaoA, resultadoOperacaoB, resultadoOperacaoC;

    cout << "Digite um número inteiro: ";
    cin >> numeroInteiro1;

    cout << "Digite um número inteiro: ";
    cin >> numeroInteiro2;

    cout << "Digite um número real: ";
    cin >> numeroReal;

    resultadoOperacaoA = (2 * numeroInteiro1) * (numeroInteiro2 / 2.0);
    resultadoOperacaoB = 3 * numeroInteiro1 + numeroReal;
    resultadoOperacaoC = pow(numeroReal, 3);

    cout << "O produto do dobro do primeiro com metade do segundo: " << resultadoOperacaoA << endl;
    cout << "A soma do triplo do primeiro com o terceiro: " << resultadoOperacaoB << endl;
    cout << "O terceiro elevado ao cubo: " << resultadoOperacaoC << endl;

    return 0;
}