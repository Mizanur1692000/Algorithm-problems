#include<iostream>
using namespace std;

void push(int max,int stack[],int top)
{
  int x;
  if(top==max-1)
  {
    cout<<"Over flow!";
  }
  else
  {
    cout<<"Enter the element to add in the stack: ";
    cin>>x;
    top++;
    stack[top]=x;
  }
}

void pop(int top,int stack[])
{
  if(top==-1)
  {
    cout<<"Under flow!";
  }
  else
  {
    cout<<stack[top];
    top--;
  }
}

void display(int top,int stack[])
{
  if(top==-1)
  {
    cout<<"Stack is empty!";
  }
  else
  {
    for(int i=0; i<=top; i++)
      {
        cout<<stack[top];
      }
  }
}

int main()
{
  int max,top;
  cout<<"Enter the total number of stack: ";
  cin>>max;
  int stack[max];
  for(int i=0; i<max; i++)
  {
  push(max,stack,top);
   }
  display(top,stack);
  cout<<"Enter the value to delete from stack: ";
  pop(top,stack);
  display(top,stack);
}
