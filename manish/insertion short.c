#include <stdio.h>
int N;
#define N 5
int a[N];
main()
{
int temp,t,i,j,k;

printf("enter the array\n");
for(k=0;k<N;k++)	
  {
  	scanf("%d",&a[k]);
  	
  }
printf("the shorted array is:\n");
for(i=1;i<N;i++)
{   temp=a[i];
	j=i-1;
	while(j>=0&&a[j]>temp)
	{
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=temp;
}   
for(t=0;t<N;t++) 
   {
   	printf("%d ",a[t]);
   }  
}

