#include<stdio.h>
main()
{


 int fd=0, sd=1,n,s;


  
  printf("enter value =");
  
  scanf("%d",&n);
  
  while(n>fd)
  {
  	printf("%d\n",fd);
  	s=fd+sd;
  	fd=sd;
  	sd=s;
  	
  }
}

