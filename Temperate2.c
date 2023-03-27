#include<stdio.h>
main()
{
	int n,a=1;
	printf("Enter a number tomultiplication table =");
	scanf("%d",&n);
	
	do
	{
		printf("%d*%d =%d\n",n,a,n*a);
		a++;
	}
	while(a<=10);
}
  
