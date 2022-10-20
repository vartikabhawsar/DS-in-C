#include<stdio.h>

#include<stdlib.h>
 


void push(int,int *,int[]);
void pop(int *,int[]);
void show();
 
int main()
{
    int size=5;
    int top=-1;
    int arr[10];
	int c;
	
        while(1)
        {
		printf("\n1.push the element\n2.pop the element\n3.exit");
		printf("\nenter the choice:");
		scanf("%d",&c);
		
		switch(c)
		{
			case 1: push(size,&top,arr);
					break;
			case 2: pop(&top,arr);
					break;
			
			case 3: exit(0);
			default: printf("\nInvalid choice!!");
		}
        
	}
}
 
void push(int size,int *top,int arr[])
{
	int x;
	
	if(*top==size-1)
	{
		printf("\nOverflow!!");
	}
	else
	{
		printf("\nEnter element to be inserted to the stack:");
		scanf("%d",&x);
		*top=*top+1;
		arr[*top]=x;
	}
} 
void pop(int *top,int arr[])
{
	if(*top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nPopped element:  %d",arr[*top]);
		*top=*top-1;
	}
}
 
// void show()
// {
	
	
// 	if(top==-1)
// 	{
// 		printf("\nUnderflow!!");
// 	}
// 	else
// 	{
// 		printf("\nElements present in the stack: \n");
// 		for(int i=top;i>=0;i--)
// 			printf("%d\n",arr[i]);
// 	}
// }