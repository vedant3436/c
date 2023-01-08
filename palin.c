#include <stdio.h>
int main() {
    int n,orig_n,reversed,remainder;
    printf("Enter your number: ");
    scanf("%d",&n);
    orig_n = n;
    while (n!=0){
        remainder = n%10;
        reversed = reversed*10 + remainder;
        n=n/10;
    }
    if (reversed==orig_n) {
        printf("%d is a palindrome", orig_n);
    }
    else {
        printf("%d is not a palindrome", orig_n);
    }
    return 0;
}