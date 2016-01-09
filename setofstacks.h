/*Set of stacks  to mimic the plates example.
  I think this would work faster if we'd implement it using 
  array as we dont have to do any insertions and deletions but
  just accessin terms of stack not stack elements.
  But still lets just do it using linked list*/

  #ifndef SET_OF_STACKS_
  #define SET_OF_STACKS_

  #include<iostream>
  #include"stack.cpp"
  #include<string>
  #include<cstdlib>

  const int SUBSIZE = 5;
  
  class setofstacks
  {

  public:
  	setofstacks();
  	~setofstacks();
  	void pop();
  	void push (const std::string & , const int & );
  	void popAt( const int &);
  	void printId ();
  	void printName ();
  	int getNStack();
  	int getNNode();

  private:
  	stack* mHead; 	//pointer to the head stack
  	int mNStack;	//number of stacks in the set
 	int mNNode;		//number of nodes in the set
  };

  #endif