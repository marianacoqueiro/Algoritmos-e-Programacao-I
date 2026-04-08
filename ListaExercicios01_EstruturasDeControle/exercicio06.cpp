//Faça um programa que peça o raio de um círculo, e calcule e mostre sua área.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double raio, area;
    const double PI = 3.14;

    cout << "Digite o raio do círculo: ";
    cin >> raio;

    area = PI * pow(raio, 2);

    cout << "Área do círculo: " << area << endl;

    return 0;
}