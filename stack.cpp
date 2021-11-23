#include<iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *top = NULL;

bool isempty()
{
  if(top == NULL)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void push(int num)
{
  Node *new_node = new Node();
  new_node->data = num;
  new_node->next = top;
  top = new_node;
}

void pop()
{
  if(isempty())
  {
    cout<<"Stack is empty";
  }
  else
  {
    Node *ptr = top;
    top = top->next;
    delete(ptr);
  }
}

void showTop()
{
  if(isempty())
    cout<<"Stack is empty";
  else
    cout<<"Element at top is : "<<top->data;
}