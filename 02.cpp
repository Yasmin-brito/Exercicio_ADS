//Ler dados de um usuário (nome e idade) e exibir em tela
//Exercícios de conversão de tipos, como string para número e vice-versa.
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    string nome;
    cin >> nome;

    string idade;
    cin >> idade;

    int converte = stoi(idade);

    printf("Seu nome eh: %s\nPossui %d anos\n", nome.c_str(), converte);
    return 0;
}