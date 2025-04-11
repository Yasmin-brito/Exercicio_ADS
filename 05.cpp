//Verificar aprovação de aluno(a) com base em nota e frequência.

#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int nota1, nota2, freq;
    cin >> nota1 >> nota2 >> freq;

    float media = (nota1 + nota2)/2;

    if(media >= 7 && freq >= 75){
        printf("Aluno aprovado com media: %.2f\n", media);
    }
    else{
        printf("Aluno reprovado");
    }
    return 0;
}