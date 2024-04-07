// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        printf("%d = Sum, %d= i noch nicht addiert,\n", sum, i);
        sum = sum + i;
        printf("dann %d addiert.\n", sum);
        
        
    }
    printf("%d", sum);

    return 0;
}