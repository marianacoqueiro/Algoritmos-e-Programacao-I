/*João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o
rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o
estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa
de R$ 4,00 por quilo excedente.
João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o
excesso. Grave na variável excesso a quantidade de quilos além do limite e na variável multa o
valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens
adequadas.*/

#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    using std::fixed;

    double pesoDePeixes, excesso, multa;

    cout << "Informe o peso de peixes em quilograma: ";
    cin >> pesoDePeixes;

    if (pesoDePeixes > 50) {
        excesso = pesoDePeixes - 50;
        multa = excesso * 4;
    } else {
        excesso = 0;
        multa = 0;
    }

    cout << "Excesso de peso: " << excesso << "kg" << endl;
    cout.precision(2);
    cout << fixed;
    cout << "Multa: R$" << multa << endl;

    return 0;
}