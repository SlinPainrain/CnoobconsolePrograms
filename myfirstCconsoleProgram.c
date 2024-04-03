#include <stdio.h>
#include <stdbool.h>
int main(){
    double number = 0;
    
    
    while (true) {
    printf("\nPlease insert a number (allowed Datatype is double): ");
    scanf("%lf", &number);
    
    if(number > 0) {
        printf("\nThe number is positive");
    }
    
    else if(number < 0){
        printf("\nThe number is negative");
    }
    
    else {
        printf("\nNumber is 0");
    }
    printf("\n-----------------");
    }


    return 0;
    }