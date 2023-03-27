#include<stdio.h>
main()
{
	int n,a=0;
	
	printf("Enter a number=");
    scanf("%d",&n);
    
    do
    
    {
    	if(n!=0)
    	
		{
        	printf("%d",a);
        }
    	a++;
	}while(	n/=10);

	printf("Number of digits = %d",a);
}
