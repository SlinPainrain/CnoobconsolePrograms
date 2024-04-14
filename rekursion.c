#include <stdio.h>

int func(int n){
    if (n > 0){
        return n * func(n-1);
    }
    else {
        return 1;
    }
}
int main() {
    int number;
    printf("Yo Du Dummdödel(also ich) gib mal ne Zahl(int > 0) ein, \ndann mache ich nämlich n! also N-FuckUltät daraus: ");
    scanf("%d", &number);
    func(number);
    printf("%d", func(number));

    return 0;
}

