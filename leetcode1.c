#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
  for (int i = 0; i < numsSize; i++) {
      for (int j = i + 1; j < numsSize; j++) {
          if (nums[i] + nums[j] == target) {
              int* result = (int*)malloc(2 * sizeof(int)); // Aloca espaço para armazenar os índices
              result[0] = i;
              result[1] = j;
              *returnSize = 2; // Indica que há dois elementos no retorno
              return result;
          }
      }
  }
  *returnSize = 0; // Se não encontrar, retorna tamanho 0
  return NULL;
