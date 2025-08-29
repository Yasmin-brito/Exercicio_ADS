#include <iostream> 

using namespace std; 

int potencia(int base, int expoente) { 

    if (base == 0 || expoente == 0) { 
    return 1; 
    } 

    return base * potencia(base, expoente-1); 
} 
int main() { 
    int resultado = potencia(2, 5);

    cout << "2^3 = " << resultado << endl;

    return 0; 
}