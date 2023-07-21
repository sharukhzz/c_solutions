#include<stdio.h>
#include<stdlib.h>
# define N 20
int s[N],top = -1;
int pop()
{
	return s[top--];
}
void push(int x)//function to insert an element into stack
{
	if(top == N-1)
		printf("Stack is Full");
	else
	{
		top++;
		s[top] = x;
	}
}
void enqueue(int x)
{
	push(x);
}
void print()
{
	int i;
	for(i=top;i<0;i--)
		printf("\n%d",s[i]);
}

int dequeue()
{
	int data,res;
	if(top == -1)
		printf("Queue is Empty");
	else if(top == 0)
		return pop();
	data = pop();
	res = dequeue();
	push(data);
	return res;

}
int main()
{
	int opt,n,i,data,t;
	printf("Enter Your Choice:-");

	do{
		printf("\n1 Insert");
		printf("\n2 display");
		printf("\n3 delete");
		printf("\n4 for Exit\n");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				printf("\nEnter the number of elements:");
				scanf("%d",&n);
				printf("\nEnter your data\n");
				i=0;
				while(i<n){
					scanf("%d",&data);
					enqueue(data);
					i++;
				}
				break;
			case 2:
				print();
				break;
			case 3:
				t = dequeue();
				printf("Dequeued element:%d",t);

				break;
			case 4:
				break;
			default:
				printf("\nIncorrect Choice");

		}
	}while(opt!=0);

}
