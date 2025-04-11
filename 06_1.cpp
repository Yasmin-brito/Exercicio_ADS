//Exibir a tabuada de 1 a 10, usando laços.
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    for(int i= 1; i <= 10; i++){
        for(int j=1; j<=10; j++){
            printf("%d * %d = %d\n", i, j, i*j);
        }
    }
    return 0;
}