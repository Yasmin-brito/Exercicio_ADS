//Exercícios de validação de intervalos (ex.: se o valor está entre X e Y).
// Revisão de casos reais que exijam combinações de operadores lógicos (ex.: liberarou não acesso).
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    string login = "fulano@gmail.com";
    string senha = "123fulano321";

    bool verificacao = login == senha;
    printf("%d = permitido", verificacao);
    return 0;
}