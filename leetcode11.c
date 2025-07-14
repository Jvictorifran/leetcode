//fazser um balao com os numeros circulando 


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int min(int a, int b);
int main() 
{

    int n;
    scanf("%d ", &n);
    int tamanho = 2 * n - 1;
  	for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            int dist_topo = i;
            int dist_esquerda = j;
            int dist_baixo = (tamanho - 1) - i;
            int dist_direita = (tamanho - 1) - j;
            
            int distancia_minima = min(dist_topo, dist_esquerda);
            distancia_minima = min(distancia_minima, dist_baixo);
            distancia_minima = min(distancia_minima, dist_direita);
            
            int numero_impresso = n-distancia_minima;
            
            printf("%d ", numero_impresso);
        }
            printf("\n");
    }
    return 0;
}
int min(int a, int b){
    return (a < b) ? a : b;
}