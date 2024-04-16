#include <stdio.h>
#include <math.h>


int main() {
    
    int arr[4];
    printf("Please input your marks: ");
    for (int i = 0; i < 5; i++) {
    
    scanf("%d", &arr[i]);
    
    }
    
    double sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    
    printf("Your sum is %.1lf\n", sum);
    printf("And your average mark is: %.1lf", sum/5);
    
    
    return 0;
}