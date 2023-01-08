#include <stdio.h>
int main() {
    int n,orig_n,arms=0,remainder;
    printf("Enter your number: ");
    scanf("%d",&n);
    orig_n = n;
    while (n>0) {
        remainder = n%10;
        arms = (remainder*remainder*remainder)+arms;
        n=n/10;        
    }
    if (orig_n==arms) {
        printf("%d is an armstrong number",orig_n);
    }
    else {
        printf("Not armstrong");
    }
    return 0;
}