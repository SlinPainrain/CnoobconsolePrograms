#include <stdio.h>
#include <math.h>

int mulTwoNum(int a, int b);

int main() {
   
   int result = mulTwoNum(10,5);
   printf("%d", result); 
    
    
   return 0;
}


int mulTwoNum(int a, int b){
    int mul = a*b;
    return mul;
}