#include"linkedlist.h"
using namespace std; 

linkedList::linkedList()
{
	head=NULL;
	size=0;
}

linkedList::~linkedList()
{

}

node* linkedList::getHead()
{
	return head;
}

void linkedList::setHead(node * thead)
{
head=thead;

}

int linkedList::getSize()
{
	return size;
}

void linkedList::printName()
{
	node* front = head; 
	while( front!=NULL)
	{
		cout<<"Name : "<<front->name<<endl;
		front=front->next;
	}
}

void linkedList::printId()
{
	node* front = head; 
	while( front!=NULL)
	{
		cout<<"Id : "<<front->id<<endl;
		front=front->next;
	}
}
void linkedList::addToHead(const std::string& str , const int& nid)
{
	node* temp=new node(str , nid); //must be created on heap 

	if(head==NULL)
		{head=temp; size++;}
	else
	{
		temp->next=head;
		head=temp;
		size++;
	}
}


