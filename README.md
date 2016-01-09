# SetOfStacks
Name : Anshul Bahukhandi

What is set of stack?

- This Data structure can be used to store any number of names and corresponding IDs
- Instead of storing the data at top of the pile in single stack and using usual "Last In First Out" 
  system to pop out of stack. This data structure provides some more functionalities.
- Instead of creating one giant stack when data set is large it create several substacks all connected.
- Size of sub stacks can be changed fron the header file.
- This is just like we split the pile of plates into small piles so that they dont topple.
- It has all the functionalities of a regular stack. Moreover user can pop out of any sub stack
  using the popAt(const int& index) function.  

How is Data structure organized?

- Each node consists of string , int and a pointer to another node . string can be used to store the 
  name , int can be used to store the ID and node pointer to link to another node.
- So each node represents one person.
- Several of such node connected in a chain forms singly linked list.
- One linked list of user defined size forms a sub-stack.
- Several of these sub-stacks connected in a chain forms a set os stacks.
