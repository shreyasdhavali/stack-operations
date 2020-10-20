//Stack simply means a LIFO lists means last inputed value will be first outputed
#include<iostream>
#define capacity 100
using namespace std;
int stack[capacity],top=-1;


int isfull()
{
	if(top==capacity-1)
		return 1;
	else
		return 0;
}

int isempty()
{
	if(top==-1)
		return 1;
	else
		return 0;
		
}

void pop()
{
	if(isempty())
		cout<<"stack is empty\n";
	else
	{
		cout<<stack[top]<<endl;
		top--;
	}
}


void push(int ele)
{
	if(isfull())
	{
		cout<<"stack is full\n";
	}
	else
	{
		top++;
		stack[top]=ele;
		cout<<"element pushed successsfully\n";
	}
}

void print()
{
	int x=top;
	if(isempty())
	{
		cout<<"stack is empty\n";
	}
	else
	{
		while(x!=-1)
		{
			cout<<stack[x]<<" ";
			x--;
		}
	}
}

int main()
{
	int element,t;
	loop:
	cout<<"\nenter 1 to push the element on to the stack\n";
	cout<<"enter 2 to pop the element from the stack\n";
	cout<<"enter 3 to print all the elements of the stack\n";
	cout<<"enter 4 to exit\n";
	cout<<"enter ur choice\n";
	cin>>t;
	
	switch(t)
	{
		case 1:cout<<"enter the value to be pushed\n";
			   cin>>element;
			   push(element);
			   break;
		case 2:pop();
			   break;
		case 3:print();
			   break;
		case 4:exit(0);
	}
	goto loop;
	
	return 0;
}
