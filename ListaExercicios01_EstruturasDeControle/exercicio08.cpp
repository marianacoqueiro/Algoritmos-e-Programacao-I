/*Faça um programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no
mês. Calcule e mostre o total do seu salário no referido mês.*/

#include <iostream>
using namespace std;

int main() {
    double ganhoPorHora, horasTrabalhadas, salario;

    cout << "Digite quanto você ganha por hora: R$ ";
    cin >> ganhoPorHora;

    cout << "Digite o número de horas que você trabalha no mês: ";
    cin >> horasTrabalhadas;

    salario = ganhoPorHora * horasTrabalhadas;

    cout << "Seu salário é: " << salario << endl;

    return 0;
}