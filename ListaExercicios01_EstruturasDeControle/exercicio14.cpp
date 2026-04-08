/*Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de
um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo
usando este link (em minutos).*/

#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    double tamanhoArquivo, velocidadeLinkInternet, tempoDownload;

    cout << "Digite o tamanho do arquivo para download (em MB): ";
    cin >> tamanhoArquivo;

    cout << "Digite a velocidade de um link de internet (em Mbps): ";
    cin >> velocidadeLinkInternet;

    tempoDownload = (tamanhoArquivo * 8  / velocidadeLinkInternet) / 60;

    cout << "Tempo de download do arquivo usando este link: " <<  tempoDownload << " minutos." << endl; 
    return 0;
}