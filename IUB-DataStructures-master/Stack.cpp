//Stack.cpp
//demonstrates stacks
#include <iostream>
#include <vector>
using namespace std;
////////////////////////////////////////////////////////////////
class StackX
{
private:
int maxSize; //size of stack vector
vector<double> stackVect; //stack vector
int top; //top of stack
public:
//--------------------------------------------------------------
StackX(int s) : maxSize(s), top(-1) //constructor
{
stackVect.reserve(maxSize); //size the vector
}
//--------------------------------------------------------------
void push(double j) //put item on top
{
stackVect[++top] = j; //increment top,
} //insert item
//--------------------------------------------------------------
double pop() //take item from top
{
return stackVect[top--]; //access item,
} //decrement top
//--------------------------------------------------------------
double peek() //peek at top of stack
{
return stackVect[top];
}
//--------------------------------------------------------------
bool isEmpty() //true if stack is empty
{
return (top == -1);
}
//--------------------------------------------------------------
bool isFull() //true if stack is full
{
return (top == maxSize-1);
}
//--------------------------------------------------------------
}; //end class StackX
////////////////////////////////////////////////////////////////
int main()
{
StackX theStack(10); //make new stack, size 10
theStack.push(20); //push items onto stack
theStack.push(40);
theStack.push(60);
theStack.push(80);
while( !theStack.isEmpty() ) //until it’s empty,
{ //delete item from stack
double value = theStack.pop();
cout << value << " "; //display it
} //end while
cout << endl;
return 0;
} //end main()

