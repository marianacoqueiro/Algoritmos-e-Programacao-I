//Faça um programa que verifique se uma letra digitada é vogal ou consoante.

#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    char letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    letra = tolower(letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o'  || letra == 'u') {
        cout << "Essa letra é uma vogal." << endl;
    } else {
        cout << "Essa letra é uma consoante." << endl;
    }

    return 0;
}