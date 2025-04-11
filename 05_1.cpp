//Problemas que avaliam limite de idade para consumo de determinado produto.
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int idade;
    printf("Digite sua idade:\n");
    cin >> idade;

    if(idade >= 18){
        printf("Pode beber\n");
    }
    else{
        printf("Nao pode beber\n");
    }
    return 0;
}