#include<iostream>
#define size 100
using namespace std;
int top=-1, a[size];
void push(int value)
{
	if(top==size-1)
	{
		cout<<"Stack Overflow";
	}
else
	{
		top++;
		a[top]=value;
	}
}


void pop()
{
	if(top==-1)
	{
		cout<<"Stack Underflow";
	}
	else
	{	
		top--;
		cout<<"Value is sucessfully popped";
	}
}


void peek()
	{
		if(top==-1)
	{	
	cout<<"Stack Underflow";
	}
	else
	{	
	cout<<"Top of stack is"<<a[top];
	}

}


void display()
	{
	int i;
	for(i=0;i<=top;i++)
	{

		cout<<"\t"<<a[i];
	}
}

int main()
{
	int value,c;
	do{

		cout<<"Enter 1. push \n 2. pop \n 3.peek \n 4.display \n 5.Exit";

		cin>>c;



switch(c)
{
	case 1:
	cout<<"Enter the Value to be pushed:";
	cin>>value;
	push(value);
	break;

case 2:
	pop();
	break;

case 3:

	peek();
	break;

case 4:
	display();
	break;
	
case 5:
	exit(0);
	break;
 }
	
} while(c!=5);
}
