#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *next;
};


void print(node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}

void pop(node* *head)
{
	node *t=*head;
	if(t==NULL)
	{
		cout<<"stack is empty\n";
	}
	else
	{
		cout<<t->data<<endl;
		t=t->next;
		*head=t;
	}
}


void push(node* *head,int new_data)
{
	node *new_node=new node();
	new_node->data=new_data;
	new_node->next=*head;
	*head=new_node;
	cout<<"stack element is succeffully pushed\n";
	
}
int main()
{
	node *head=NULL;
	int x,t;
	loop:
	cout<<"enter 1 to push elements onto stack\n";
	cout<<"enter 2 to pop the element from stack\n";
	cout<<"enter 3 to exit\n";
	cin>>t;
	switch(t)
	{
		case 1:cout<<"enter the value to be pushed\n";
			   cin>>x;
			   push(&head,x);
			   break;
		case 2:pop(&head);
				break;
		case 3: exit(0);
	}
	
	goto loop;
	
	
	return 0;
}
