#ifndef STACK_H_
#define STACK_H_
#include<iostream>
#include"linkedlist.cpp"
#include<cstdlib>

class stack
{
public:
stack();
~stack();
void push( const std::string& , const int& );
void pop();
int getSize();
void printId();
void printName();
/*Returns the minimum of hte stack*/
int minimum();
private:
linkedList mList;
int size; 
stack* mNextStack;	
friend class setofstacks;
};

#endif

