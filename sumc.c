#include <stdio.h>
int main() {
    int n,remainder,sum_n=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    while (n>0) {
        remainder = n%10;
        sum_n = sum_n + remainder;
        n=n/10;
    }
    printf("%d is the addition of your numbers",sum_n);
    return 0;
}