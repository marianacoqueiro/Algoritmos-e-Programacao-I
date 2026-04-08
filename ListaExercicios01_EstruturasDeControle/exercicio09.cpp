/*Faça um programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura
em graus Celsius.*/

#include <iostream>
using namespace std;

int main() {
    double temperaturaFahrenheit, temperaturaCelsius;

    cout << "Digite a temperatura em °F: ";
    cin >> temperaturaFahrenheit;

    temperaturaCelsius = 5 * (temperaturaFahrenheit - 32) / 9;

    cout << temperaturaFahrenheit << " °F em Celsius: " << temperaturaCelsius << " °C" << endl;

    return 0;
}