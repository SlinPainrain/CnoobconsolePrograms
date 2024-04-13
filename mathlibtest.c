#include <stdio.h>
#include <math.h>

int main() {
    double input;
    printf("Gib eine Zahl ein, ich sage pow(a^sqrt(a))");
    scanf("%lf", &input);
    printf("%.lf", pow(input, sqrt(input)));
    printf("\n%.lf", pow(5,5));
    
    return 0;   
}