// Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.

// Input Format

// The first line contains a string,  which is the given number.

// Constraints


// All the elements of num are made of english alphabets and digits.

// Output Format

// Print ten space-separated integers in a single line denoting the frequency of each digit from  to .

// Sample Input 0

// a11472o5t6
// Sample Output 0

// 0 2 1 0 1 1 1 1 0 0 
// Explanation 0

// In the given string:

//  occurs two times.
//  and  occur one time each.
// The remaining digits  and  don't occur at all.
// Sample Input 1

// lw4n88j12n1
// Sample Output 1

// 0 2 1 0 1 0 0 0 2 0 
// Sample Input 2

// 1v88886l256338ar0ekk
// Sample Output 2

// 1 1 1 2 0 1 2 0 5 0 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[999];
    int v[10], i;
    scanf("%s", s);
    for(i = 0; i < 10; i++)
        v[i] = 0;
    for(i = 0; s[i] != '\0'; i++ ){
        if(s[i] == '0'){
            v[0] += 1;
        }else if(s[i] == '1'){
            v[1] += 1; 
        }else if(s[i] == '2'){
            v[2] += 1;
        }else if(s[i] == '3'){
            v[3] += 1;
        }else if(s[i] == '4'){
            v[4] += 1;
        }else if(s[i] == '5'){
            v[5] += 1;
        }else if(s[i] == '6'){
            v[6] += 1;
        }else if(s[i] == '7'){
            v[7] += 1;
        }else if(s[i] == '8'){
            v[8] += 1;
        }else if(s[i] == '9'){
            v[9] += 1;
        }
    }
    for(int j = 0; j <= 9; j++){
        printf("%d ", v[j]);
    }
    return 0;
}
