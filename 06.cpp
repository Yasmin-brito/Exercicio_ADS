//Gerar a sequência de 1 a 100 e mostrar a soma dos números pares.
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int soma = 0;
    for(int i=1; i<=100; i++){
        if(i%2 == 0){
            soma += i;
        }
    }
    printf("A soma dos numero pares de 1 a 100 eh: %d", soma);

    return 0;
}