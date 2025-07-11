// Você deve usar operadores lógicos bit a bit. Todos os dados são armazenados em sua representação binária. Os operadores lógicos e a linguagem C usam 1 para representar o verdadeiro e 0 para representar falso. Os operadores lógicos comparam bits em dois números e retornam verdadeiro ou falso (1 ou 0) para cada bit comparado.

// Operador Bitwise AND (&): A saída do AND bit a bit é 1 se os bits correspondentes de dois operandos forem 1. Se qualquer bit de um operando for 0, o resultado do bit correspondente será avaliado como 0. É denotado por &.

// Operador Bitwise OR (|): A saída de OR bit a bit é 1 se pelo menos um bit correspondente de dois operandos for 1. É denotado por |.

// Operador Bitwise XOR (exclusive OR) (^): O resultado do operador XOR bit a bit é 1 se os bits correspondentes de dois operandos forem opostos. É denotado por.

// Por exemplo, para os inteiros 3 e 5:

// 3 = 00000011 (em binário)
// 5 = 00000101 (em binário)

// Operação AND      Operação OR       Operação XOR
// 00000011          00000011          00000011
// & 00000101        | 00000101        ^ 00000101

// 00000001 = 1      00000111 = 7      00000110 = 6

// Você receberá um número inteiro, N, e um limite, K. Imprima os resultados máximos das comparações AND, OR e XOR em linhas separadas, nessa ordem, onde o resultado da comparação deve ser menor que K.

// Descrição da Função

// Complete a função calculate_the_maximum no editor abaixo.

// calculate_the_maximum tem os seguintes parâmetros:

// int n: o maior número a ser considerado

// int k: o resultado de uma comparação deve ser menor que este número para ser considerado

// Impressões

// Imprima os valores máximos para as comparações AND, OR e XOR, cada um em uma linha separada.

// Formato de Entrada

// A única linha contém dois inteiros separados por espaços, N e K.

// Restrições

// 1 <= N <= 10^3
// 1 <= K <= N

// Exemplo de Entrada 0

// 5 4

// Saída de Amostra 0

// 2
// 3
// 3
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
