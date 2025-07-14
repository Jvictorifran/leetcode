//ler um numero n, criar um vetor dinamicamentee, e somar os valores do vetor

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int *v = (int*) malloc(n * sizeof(int));
    int soma = 0;
    for(int i = 0 ; i < n; i++){
        scanf(" %d", &v[i]);
        soma += v[i];
    }
    printf("%d", soma);
    free(v);
    return 0;
}