#include <stdio.h>
int main() {
    int n,remainder;
    printf("Enter your number: ");
    scanf("%d",&n);
    while (n>0) {
        remainder = n%10;
        printf("%d",remainder);
        n=n/10;
    }
    return 0;
}

