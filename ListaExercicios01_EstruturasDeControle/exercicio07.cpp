/*Faça um programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para
o usuário (que dado o programa terá que pedir ao usuário?).*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double ladoQuadrado, areaQuadrado, dobroArea;

    cout << "Digite o valor do lado do quadrado: ";
    cin >> ladoQuadrado;

    areaQuadrado = pow(ladoQuadrado, 2);
    dobroArea = areaQuadrado * 2;

    cout << "Dobro da área do quadrado: " << dobroArea << endl;

    return 0;
}