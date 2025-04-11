//Criar um código que calcule o salário líquido de um funcionário, aplicando imposto.
// Desafio: cálculo de fatura final após aplicar taxas ou descontos a um valor base.

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    float salario_bruto;
    cin >> salario_bruto;

    float imposto = (salario_bruto * 27.5)/100;
    float salario_liquido = salario_bruto - imposto;

    printf("Seu salario liquido eh: R$ %.2f\n", salario_liquido);
    return 0;
}