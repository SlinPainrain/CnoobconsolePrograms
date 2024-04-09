#include <stdio.h>


int main() {
    int number;
    while(1) {
        printf("Give me a number: ");
        scanf("%d", &number);
        if (number % 2 != 0 & number < 0) {
            printf("Deine negative Ungerade Zahl ist: %d\n", number);
        }
        else if(number > 0){
            printf("Positive Number entered I will terminate now.");
            break;
        }
        else {
            printf("Negative Even, let's continue.\n");
            continue;
        }
        
    }
    
    
    return 0;
}