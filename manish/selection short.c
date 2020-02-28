#include <stdio.h>
int N;
#define N 5
int a[N];
main()
{
int t,i,j,k,temp;

printf("enter the array\n");
for(k=0;k<N;k++)	
  {
  	scanf("%d",&a[k]);
  	
  }
printf("the shorted array is:\n");
for(i=0;i<N-1;i++)
{   
   int min=i;
   for(j=i+1;j<N;j++)
     {
     	if(a[j]<a[min])
     	 {
     	 	min=j;
		 }
	 }
	if(min!=i)
	 {
	 temp=a[i];
	 a[i]=a[min];
	 a[min]=temp;	
	 }
}   
for(t=0;t<N;t++) 
   {
   	printf("%d ",a[t]);
   }  
}
