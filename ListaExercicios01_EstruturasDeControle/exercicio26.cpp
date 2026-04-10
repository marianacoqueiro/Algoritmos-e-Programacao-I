/*Tendo como dados de entrada a altura e o gênero de uma pessoa, faça um programa que calcule
seu peso ideal, utilizando as fórmulas abaixo, sabendo que a altura é dada em m e o peso em Kg.
Para homens: peso ideal = (72.7 ∗ altura) – 58
Para mulheres: peso ideal = (62,1 ∗ altura) – 44,7*/


#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    double altura, pesoIdeal;
    char genero;
    
    cout << "Informe sua altura em metros: ";
    cin >> altura;
    
    cout << "Informe seu gênero (M/F): ";
    cin >> genero;
    
    genero = tolower(genero);
    
    if (genero == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (genero == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } 
    
    cout << "Peso ideal: " << pesoIdeal << endl;

    return 0;
}
