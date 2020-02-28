#include <stdio.h>
# define N 10

int queue[N];
int front=-1,rear=-1;

void enqueue()
{
printf("enter a number to insert");
int x;	
scanf("%d",&x);
if(rear==N-1)
  {
  printf("queue is overflowing");	
  }	
else if(front==-1&&rear==-1)
  {
  front=rear=0;
  queue[rear]=x;	
  }  
else
  {
  rear++;
  queue[rear]=x; 	
  	
  }  
 printf("size of queue=%d",rear+1); 
}

void dequeue()
{
if(front==-1&&rear==-1)	
  {printf("the dequed element is =-1");
  }
else if(front==rear)
  {
  front=rear=-1;
  	
  }  
else
  {
  printf("the dequede element is %d\n",queue[front]);
  front++;	
  } 
  printf("the size of queue is=%d\n",rear); 
}


int main()
{
int ch;
do
    {
    printf("\n\n\nPlease choose the operation as shown\n1.E\n2.D\n\n");
	scanf("%d",&ch);
	switch(ch)
	    {
	     case 1:enqueue();
	            break ;
	     case 2:dequeue();
		        break ;
		 
		 default : printf("invalid");		 
		}	
	}
	while(ch!=0);
}
