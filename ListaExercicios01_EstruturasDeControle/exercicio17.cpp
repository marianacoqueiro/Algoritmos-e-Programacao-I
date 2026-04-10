/*Faça um programa que verifique se uma letra digitada é F ou M. Conforme a letra, escrever:
(a) F - Feminino,
(b) M - Masculino,
(c) Gênero não informado.*/

#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    char letra;
     
    cout << "Digite uma letra (F/M): ";
    cin >> letra;

    letra = tolower(letra);

    if (letra == 'f') {
        cout << "F - Feminino." << endl;
    } else if (letra == 'm') {
        cout << "M - Masculino." << endl;
    } else {
        cout << "Gênero não informado." << endl;
    }

    return 0;
}