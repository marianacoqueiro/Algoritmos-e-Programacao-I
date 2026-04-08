/*Tendo como dados de entrada a altura de um homem, faça um programa que calcule seu peso ideal,
usando a seguinte fórmula: peso ideal = (72.7 ∗ altura) – 58 , onde a altura é dada em metros
e o peso em Kg.*/

#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    double altura, pesoIdeal;

    cout << "Digite sua altura em metros: ";
    cin >> altura;

    pesoIdeal = (72.7 * altura) - 58;

    cout << "Seu peso ideal é: " << pesoIdeal << " kg" << endl;

    return 0;
}
