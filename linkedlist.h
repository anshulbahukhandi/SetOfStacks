#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include<iostream>
#include<string>
#include"node.cpp"
class linkedList
{
public:
	linkedList();
	~linkedList();
	void addToHead(const std::string& , const int&);
	int getSize();
	void printName();
	void printId();
private:
	/* getHead() must be made private cause we dont want to 
	give this info to the user*/
	node* getHead(); 
	void setHead(node*); 
	node* head;
	int size;
	friend class stack;		
};

#endif