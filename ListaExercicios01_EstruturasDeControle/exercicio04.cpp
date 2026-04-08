//Faça um programa que peça as 3 notas obtidas num semestre e mostre a média.

#include <iostream>

int main() {
    double nota1, nota2, nota3, media;

    std::cout << "Digite a primeira nota: ";
    std::cin >> nota1;

    std::cout << "Digite a segunda nota: ";
    std::cin >> nota2;

    std::cout << "Digite a terceira nota: ";
    std::cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3;

    std::cout << "Média: " << media << std::endl;
    
    return 0;
}