#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j,k;
  
  for(i=5;i>=1;i--)
  {
  	for(j=i;j>=1;j--)
  	{
  		printf("%d ",j);
	  }
	  for(k=1;k>4;k++)
	  {
	  	printf("-");
	  }
	  printf("\n");
	  }	
}
