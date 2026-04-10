/*Faça um programa que pergunte o preço de três produtos e informe qual produto você deve
comprar, sabendo que a decisão é sempre pelo mais barato.*/

#include <iostream>
#include <algorithm>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    using std::min;

    double precoProduto1, precoProduto2, precoProduto3, menorPreco;

    cout << "Digite o preço do primeiro produto: R$ ";
    cin >> precoProduto1;

    cout << "Digite o preço do segundo produto: R$ ";
    cin >> precoProduto2;

    cout << "Digite o preço do terceiro produto: R$ ";
    cin >> precoProduto3;

    menorPreco = min(precoProduto1, min(precoProduto2, precoProduto3));

    if (precoProduto1 == menorPreco) {
        cout << "O primeiro produto é o mais barato." << endl;
    } else if (precoProduto2 == menorPreco) {
        cout << "O segundo produto é o mais barato." << endl;
    } else {
        cout << "O terceiro produto é o mais barato." << endl;
    }

}