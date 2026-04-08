/*Faça um programa que peça a temperatura em graus Celsius, transforme e mostre em graus
Farenheit.*/

#include <iostream>
using namespace std;

int main() {
    double temperaturaCelsius, temperaturaFarenheit;

    cout << "Digite a temperatura em °C: ";
    cin >> temperaturaCelsius;

    temperaturaFarenheit = temperaturaCelsius * 1.8 + 32;

    cout << temperaturaCelsius << " °C em Farenheit: " << temperaturaFarenheit << " °F" << endl;

    return 0;
}