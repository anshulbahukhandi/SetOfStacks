#include"setofstacks.h"
using namespace std;

  	setofstacks::setofstacks()
  	{
  		mNStack=0;
  		mHead=NULL;
  		mNNode=0;
  	}

  	setofstacks::~setofstacks()
  	{

  	}

  	void setofstacks::push (const std::string & str , const int &  nid)
  	{
  		if(mHead==NULL)
  		{
  			stack* temp=new stack();	//must be created on the heap
  			mHead=temp;
  			mHead->push(str,nid);
  			mNStack++;
  			mNNode++;
  		}
  		else
  		{
  			stack* front = mHead;
  			/* move front to the last stack*/
  			while(front->mNextStack!=NULL)
  				front=front->mNextStack;
  			/*Last stack  not full*/
  			if(front->getSize()==SUBSIZE)
  			{
  				/*All substacks are full and we need to create new substack*/
  				stack* temp=new stack();	//must be created on the heap
  				temp->push(str,nid);
  				front->mNextStack=temp;
  				front=front->mNextStack;
  				mNNode++;
  				mNStack++;
  			}
  			else
  			{
  				front->push(str,nid);
  				mNNode++;
  			}
  		}

  	}
  	/*This is used for regular poping . Considering its one giant stack
  	LIFO is implemented*/
  	void setofstacks::pop()
  	{
  		if(mHead==NULL)
  			cout<<"Nothing to pop . Stack is empty!\n";
  		else
  		{
  			stack* front=mHead;
  			stack* trail=NULL;
  			while(front->mNextStack != NULL)
  			{
  				trail=front;
  				front=front->mNextStack;
  			}
  			front->pop();
  			mNNode--;
  			/*If we are deleting the last node of the substack*/
  			if(mNNode%SUBSIZE==0) 
  			{
  				delete front; 
  				trail->mNextStack=NULL;
  				mNStack--;
  			}
  		}
  	}

  	/* N is the index ohf the stack from where we want to pop*/
  	void setofstacks::popAt( const int & N)
  	{
  		if(N+1 > mNStack)
  			cout<<"Out of bound stack index!\n";
  		else
  		{
  			stack* front = mHead;
  			stack* trail =NULL;
  			for(int i=0 ; i<N ; i++)
  				{
  					trail=front;
  					front=front->mNextStack;
  				}
  			front->pop();
  			mNNode--;

  		}
  	}

  	void setofstacks::printId ()
  	{
  		stack* front = mHead;
  		int i=1;
  		while(front!=NULL)
  		{
  			cout<<"Sub Stack : "<<i<<endl;
  			front->printId();
  			cout<<endl;
  			i++;
  			front=front->mNextStack;
  		}
  	}

  	void setofstacks::printName ()
  	{
  		int i=1;
  		stack* front = mHead;
  		while(front!=NULL)
  		{
  			cout<<"Sub Stack : "<< i <<endl;
  			front->printName();
  			cout<<endl;
  			i++;
  			front=front->mNextStack;
  		}
  	}

  	int setofstacks::getNStack()
  	{
  		return mNStack;
  	}
  	int setofstacks::getNNode()
	{
		return mNNode;
  	}