#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

struct node{
  int data;
  struct node *next;
  struct node *prev;
};

struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);
struct node *sort_list(struct node *);

int main(int argc, char *argv[]){
  int option;
  do{
    printf("\n 1: Create a list");
    printf("\n 2: Display the list");
    printf("\n 3: Add a node at the begining");
    printf("\n 4: Add a node at the end");
    printf("\n 5: Add a node before a given node");
    printf("\n 6: Add a node after a given node");
    printf("\n 7: Delete a node from the begining");
    printf("\n 8: Delete a node from the end");
    printf("\n 9: Delete a given node");
    printf("\n 10: Delete a node after a given node");
    printf("\n 11: Delete the entire list");
    printf("\n 12: Sort the list");
    printf("\n 13: Exit");
    printf("\n\n Enter your option : ");
    scanf("%d", &option);
    switch(option){
      case 1: start = create_ll(start);
              printf("\n LINKED LIST CREATED");
              break;
      case 2: start = display(start);
              break;
      case 3: start = insert_beg(start);
              break;
    }
  }while(option !=13);
  getch();
  return 0;
}

struct node *create_ll(struct node *start)
{
  struct node *new_node, *ptr;
  int num;
  printf("\n Enter -1 to end");
  printf("\n Enter the data : ");
  scanf("%d", &num);
  while(num != -1)
  {
    if(start == NULL)
    {
      new_node = (struct node*)malloc(sizeof(struct node));
      new_node->data = num;
      new_node->prev = NULL;
      new_node->next = NULL;
      start = new_node;
    }
    else
    {
      ptr = start;
      new_node = (struct node*)malloc(sizeof(struct node));
      new_node->data = num;
      while(ptr->next != NULL)
      {
        ptr = ptr->next;
      }
      new_node->prev = ptr;
      new_node->next = NULL;
    }
    printf("\n Enter the data : ");
    scanf("%d", &num);
  }
  return start;
}

struct node *display(struct node *start)
{
  struct node *ptr;
  ptr = start;
  while(ptr != NULL)
  {
    printf("\t %d", ptr->data);
    ptr = ptr->next;
  }
  return start;
}

struct node *insert_beg(struct node *start)
{
  struct node *new_node;
  int num;
  printf("\n Enter the data : ");
  scanf("%d", &num);
  new_node = (struct node*)malloc(sizeof(struct node));
  new_node->data = num;
  new_node->prev = NULL;
  new_node->next = start;
  start->prev = new_node;
  start = new_node;
  return start;
}

struct node *insert_end(struct node *start)
{
  struct node *new_node, *ptr;
  int num;
  printf("\n Enter the data : ");
  scanf("%d", &num);
  new_node = (struct node*)malloc(sizeof(struct node));
  new_node->data = num;
  ptr = start;
  while(ptr->next != NULL)
  {
    ptr = ptr->next;
  }
  new_node->prev = ptr;
  ptr->next = new_node;
  new_node->next = NULL;
  return start;
}