#include <stdio.h>

int main() {
    
    int sum = 0; 
    
    for (int i = 1; i < 100; i+=2) {
        

        sum = sum + i;
        
    }
    printf("sum = %d", sum);
    
    
    return 0;
}