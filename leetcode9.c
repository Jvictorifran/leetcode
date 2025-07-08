//somar os digitos de um numero de 5 casas decimais

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int mod, i, soma = 0;
    scanf("%d", &n);
    if(n>=10000 && n<=99999){
        for(i = 0; i < 5; i++){
            mod = n % 10;
            soma += mod;
            n = n / 10;
        }
        printf("%d", soma);
    }
    return 0;
}