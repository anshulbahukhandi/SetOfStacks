#include"setofstacks.cpp"
#include<iostream>
using namespace std; 

int main( int argc , char** argv)
{

setofstacks s1;
s1.push("" , 1);
s1.push("" , 2);
s1.push("" , 3);
s1.push("" , 4);
s1.push("" , 5);
s1.push("" , 6);
s1.push("" , 7);
s1.push("" , 8);
s1.push("" , 9);
s1.push("" , 10);
s1.push("" , 11);
s1.push("" , 12);
s1.push("" , 13);
s1.push("" , 14);
s1.push("" , 15);
s1.push("" , 16);

s1.printId();
cout<<"No. of stacks : "<<s1.getNStack()<<endl;
cout<<"No. of total nodes : "<<s1.getNNode()<<endl;
	s1.popAt(2);
s1.printId();

return 0;
}