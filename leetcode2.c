// // Task

// // This challenge requires you to print  on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.
// // Example
// // The required output is:
// Hello, World!  
// Life is beautiful 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  
    char s[100];
    scanf("%[^\n]%*c", &s);
  	printf("Hello, World! \n%s", s);
    return 0;
}