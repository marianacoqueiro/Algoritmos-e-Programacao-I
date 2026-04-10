/*As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe
centraram para desenvolver o programa que calculará os reajustes.
Faça um programa que recebe o salário de um colaborador e calcula o reajuste segundo o seguinte
critério, baseado no salário atual:
(a) salários até R$ 1.280,00 (inclusive): aumento de 20%;
(b) salários entre R$ 1.280,00 e R$ 1.700,00 (inclusive): aumento de 15%;
(c) salários entre R$ 1.700,00 e R$ 2500,00 (inclusive): aumento de 10%;
(d) salários acima de R$ 2.500,00: aumento de 5%.
Após o aumento ser realizado, informe na tela:
    i. o salário antes do reajuste;
    ii. o percentual de aumento aplicado;
    iii. o valor do aumento;
    iv. o novo salário, após o aumento.*/

#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    double salarioColaborador, aumento, novoSalario, percentual;

    cout << "Informe o salário do colaborador: R$ ";
    cin >> salarioColaborador;

    if (salarioColaborador < 0) {
        cout << "Valor inválido" << endl;
        return 1;
    } 
    
    if (salarioColaborador <= 1280.0) {
        percentual = 20;
    } else if (salarioColaborador > 1280.0 && salarioColaborador <=  1700.0) {
        percentual = 15;
        aumento = salarioColaborador * 0.15;
    } else if (salarioColaborador > 1700.0 && salarioColaborador <= 2500.0) {
        percentual = 10;
    } else {
        percentual = 5;
    } 
    aumento = salarioColaborador * (percentual / 100);
    novoSalario = salarioColaborador + aumento;

    cout << "Salário antes do reajuste: R$ " << salarioColaborador << endl;
    cout << "Percentual do aumento aplicado: " << percentual << "%" << endl;
    cout << "Valor do aumento: R$ " << aumento << endl;
    cout << "Novo salário, após aumento: R$ " << novoSalario << endl;

    return 0;
}