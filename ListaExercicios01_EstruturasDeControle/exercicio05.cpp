//Faça um programa que converta metros para centímetros.

#include <iostream>

int main() {
    double metros, centimetros;

    std::cout << "Digite o valor em metros: ";
    std::cin >> metros;

    centimetros = metros * 100;

    std::cout << metros << " metros em centímetros: " << centimetros << std::endl;
    
    return 0;
}
