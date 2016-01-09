#ifndef NODE_H_
#define NODE_H_
#include<iostream>
#include<string>
class node
{

public:
node();
node(const std::string& , const int );
~node();
private:
	int id; 
	std::string name;
	node* next;
	friend class linkedList;
	friend class stack; 
};

#endif