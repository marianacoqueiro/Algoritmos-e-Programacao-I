/*Faça um programa para o cálculo de uma folha de pagamento, sabendo que:
(a) são descontados do salário bruto: Imposto de Renda, que depende do salário bruto (conforme
tabela abaixo); e 10% de INSS;
(b) o FGTS corresponde a 11% do Salário Bruto, mas não é descontado (é a empresa que deposita);
(c) o salário líquido corresponde ao salário bruto menos os descontos; e
(d) programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas no
mês.

DESCONTO DO IR:
Salário bruto                                  Alíquota
até 2.500,00 (inclusive)                       isento
De 2500,01 até 3.500,00 (inclusive)            5%
De 3.500,01 até 5.500,00 (inclusive)           10%
acima de 5.500,00                              20%

Imprima na tela as informações, dispostas conforme o exemplo abaixo. No exemplo, o valor da hora
é R$ 50,00 e a quantidade de horas é 220.

Salário Bruto: (50 * 220)                       : R$ 11000,00
(-) IR (5%)                                     : R$ 550,00
(-) INSS ( 10%)                                 : R$ 1100,00
FGTS (11%)                                      : R$ 1210,00
Total de descontos                              : R$ 1650,00
Salário Liquido                                 : R$ 9350,00*/

#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    using std::fixed;

    double valorHora, horasTrabalhadasMes, salarioBruto, percentualDescontoIR, descontoIR, descontoINSS, valorFGTS, totalDescontos,salarioLiquido;

    cout << "Informe o valor da sua hora: R$ ";
    cin >> valorHora;

    cout << "Informe quantas horas você trabalhou no mês: ";
    cin >> horasTrabalhadasMes;

    if (valorHora < 0 || horasTrabalhadasMes < 0) {
        cout << "Valor inválido" << endl;
        return 1;
    }

    salarioBruto = valorHora * horasTrabalhadasMes;

    if (salarioBruto <= 2500) {
        percentualDescontoIR = 0;
    } else if (salarioBruto >= 2500.01 && salarioBruto <= 3500) {
        percentualDescontoIR = 5;
    } else if (salarioBruto >= 3500.01 && salarioBruto <= 5500) {
        percentualDescontoIR = 10;
    } else {
        percentualDescontoIR = 20;
    }

    descontoIR = salarioBruto * (percentualDescontoIR / 100);
    descontoINSS = salarioBruto * 0.1;
    valorFGTS = salarioBruto * 0.11;
    totalDescontos = descontoIR + descontoINSS;
    salarioLiquido = salarioBruto - totalDescontos;

    cout.precision(2);
    cout << fixed;

    cout << "Salario Bruto: (" << valorHora << " * " << horasTrabalhadasMes << ")       : R$ " << salarioBruto << endl;
    if (percentualDescontoIR == 0) {
            cout << "(-) IR (isento)                       : R$ "  << descontoIR << endl;
    } else {
            cout << "(-) IR (" << percentualDescontoIR << "%)                       : R$ "  << descontoIR << endl;
    }
    cout << "(-) INSS (10%)                        : R$ " << descontoINSS << endl;
    cout << "FGTS (11%)                            : R$ " << valorFGTS << endl;
    cout << "Total de descontos                    : R$ " << totalDescontos << endl;
    cout << "Salário Líquido                       : R$ " << salarioLiquido << endl;

    return 0;
}