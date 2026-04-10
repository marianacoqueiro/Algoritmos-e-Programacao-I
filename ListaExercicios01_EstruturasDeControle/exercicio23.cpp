/*Faça um programa que pergunte em que turno você estuda. Peça para digitar M (matutino), ou V
(Vespertino) ou N (Noturno). Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!", ou "Valor Inválido!", conforme o caso.*/

#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    char turno;
    
    cout << "(M) Matutino / (V) Vespertino / (N) Noturno" << endl;
    cout << "Qual seu turno? ";
    cin >> turno;
    
    turno = tolower(turno);
    
    if (turno == 'm') {
        cout << "Bom dia!" << endl;
    } else if (turno == 'v') {
        cout << "Boa tarde!" << endl;
    } else if (turno == 'n') {
       cout << "Boa noite!" << endl;
    } else {
        cout << "Valor inválido." << endl;
    }

    return 0;
}
