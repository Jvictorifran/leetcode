// Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of  to their sum, and  to their absolute difference. There is no return value, and no return statement is needed.

// Input Format

// The input will contain two integers,  and , separated by a newline.

// Output Format

// Modify the two values in place and the code stub main() will print their values.

// Note: Input/ouput will be automatically handled. You only have to complete the function described in the 'task' section.

#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int aux1 = *a, aux2 = *b;
    
    *a = aux1 + aux2;
    *b = abs(aux2 - aux1); 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}