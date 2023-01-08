#include <stdio.h>
int main() {
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a,&b);
    printf("A is %d and B is %d\n2", a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("A is %d and B is %d",a,b);
    return 0;
}



