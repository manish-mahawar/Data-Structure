#include <stdio.h>
int N;
#define N 5
int a[N];
main()
{
int temp,t,i,j,k,flag;

printf("enter the array\n");
for(k=0;k<N;k++)	
  {
  	scanf("%d",&a[k]);
  	
  }
printf("the shorted array is:\n");
for(i=0;i<N-1;i++) 
   { 
   	 for(j=0;j<N-1-i;j++)
   	   { 
   	    if(a[j]>a[j+1])
   	      {
   	       temp=a[j];
   	       a[j]=a[j+1];
   	       a[j+1]=temp;
		   flag=1;	
		  }
   	   	
	   }  
	   
   } 
   
for(t=0;t<N;t++) 
   {
   	printf("%d ",a[t]);
   }  
}
