//We assume the number has ten digits or less
#include<stdio.h>
int main()
{
    int n,a,b,i,product=1;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    a=n;
    for (i=1000000000;i>=1;i=i/10)
    {
        b=a/i;
        a=a%i;
        if (b>0)
        {
             product=product*b;
        }

    }

    printf("\nDigital Product is : %d ",product);
}
