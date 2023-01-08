#include <stdio.h>
int main()
{
    int flag = 0, n, i = 2;
    printf("Enter your number: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("%d is not a prime number", n);
    }
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is a not prime number", n);
    }
    return 0;
}