#include<stdio.h>
#include<conio.h>
int stk[10];
int top=-1;
int pop();
void push(int);
int main()
{
  int val, n ,i;
  int arr[10];
  clrscr();
  printf("\n Enter the number of elements in the array : ");
  scanf("%d", &n);
  for(i=0;i<n;i++)
  {
    scanf("%d", &arr[i]);
  }
  for(i=0;i<n;i++)
  {
    push(arr[i]);
  }
  printf("\n The reversed array is : ");
  for(i=0;i<n;i++)
  {
    val = pop();
    arr[i] = val;
  }
  for(i=0;i<n;i++)
  {
    printf("\n %d", arr[i]);
  }
  getch();
  return(0);
}

void push(int val)
{
  stk[++top] = val;
}

int pop()
{
  return(stk[top--]);
}