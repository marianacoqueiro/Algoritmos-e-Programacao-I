/*Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho da área a ser
pintada, em metros quadrados. Considere que a cobertura da tinta é de 1 litro para cada 3 metros
quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00. Informe ao usuário a
quantidades de latas de tinta a serem compradas e o preço total.*/

#include <iostream>
#include <cmath>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    double areaPintura, totalLitros, precoTotal;
    int qtdLatas;

    cout << "Qual o tamanho da área a ser pintada em m²? ";
    cin >> areaPintura;

    totalLitros = areaPintura / 3;

    qtdLatas = ceil(totalLitros / 18);

    precoTotal = qtdLatas * 80;

    cout << "Quantidade de latas de tinta a serem compradas: " << qtdLatas << endl;
    cout << "Preço total: R$ " << precoTotal << endl;

    return 0;
}