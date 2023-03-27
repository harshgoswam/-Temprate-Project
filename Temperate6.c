#include <stdio.h>
int main()
{
    int n,a,f;
    a=1;
    printf("Enter a Number to Factorial=");
    scanf("%d",&n);
    while(a<=n)
    {
        f*=a;
        a++;
    }
    printf("The Factorial of %d is %d",n,f);
   
}

