#include <stdio.h>
#include <stdbool.h>

int main() {
    
    while (true){
    int num = 0;
    printf("\nPlease input a number, I will tell you if it is odd or even.\nYour number: ");
    scanf("%d", &num);
    
    (num % 2 == 0) ? printf("\nYour number is even \n---------") : printf("\nYour number is odd.\n---------");
    
    }    


    return 0;
}