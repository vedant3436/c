#include <stdio.h>
int main()
{
    int i,show=0,a=0,b=1,n;
    printf("Enter your Number: ");
    scanf("%d",&n);
    printf("\n%d %d ",a,b);
    for (i=0;i<=n;i++)
    {
        show = a+b;
        a=b;
        b=show;
        printf("%d ", show);
    }
    return 0;
}