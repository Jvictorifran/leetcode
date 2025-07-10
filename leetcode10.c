
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int maior_and = 0, maior_or = 0 , maior_xor = 0;
    for (int a = 1; a < n; a++){
        for(int b = a + 1; b <= n; b++){
            if((a&b) > maior_and && (a&b) < k)
                maior_and = a & b;
            if((a|b) > maior_or && (a|b) < k)
                maior_or = a | b;
            if((a^b) > maior_xor && (a^b) < k)
                maior_xor = a ^ b;
        }     
    }
        printf("%d \n%d \n%d", maior_and, maior_or, maior_xor);
    return;
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
