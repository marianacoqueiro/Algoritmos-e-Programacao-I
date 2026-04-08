/*Faça um programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no
mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11%
para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que mostre:
(a) salário bruto;
(b) quanto pagou ao INSS;
(c) quanto pagou ao sindicato;
(d) o salário líquido (salário bruto - descontos).*/

#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    double ganhoPorHora, horasTrabalhadasMes, salarioBruto, descontoIR, descontoINSS, descontoSindicato, salarioLiquido;

    cout << "Digite quanto você ganha por hora: R$ ";
    cin >> ganhoPorHora;

    cout << "Digite o número de horas trabalhadas no mês: ";
    cin >> horasTrabalhadasMes;

    salarioBruto = ganhoPorHora * horasTrabalhadasMes;
    descontoIR = salarioBruto * 0.11;
    descontoINSS = salarioBruto * 0.08;
    descontoSindicato = salarioBruto * 0.05;
    salarioLiquido = salarioBruto - (descontoIR + descontoINSS + descontoSindicato);

    cout << "Salário Bruto: R$ " << salarioBruto << endl;
    cout << "Desconto IR: R$ " << descontoIR << endl;
    cout << "Desconto INSS: R$ " << descontoINSS << endl;
    cout << "Desconto Sindicato: R$ " << descontoSindicato << endl;
    cout << "Salário Líquido: R$ " << salarioLiquido << endl;

    return 0;
}