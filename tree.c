#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
  int data;
  struct node *left;
  struct node *right;
}

struct node *tree;

void create_tree(struct node *tree){
  tree = NULL;
}

struct node *insertElement(struct node *tree, int val){
  struct node *ptr, *nodeptr, *parentptr;
  ptr = (struct node*)malloc(sizeof(struct node));
  ptr->data=val;
  ptr->right=NULL;
  ptr->left=NULL;
  if(tree=NULL){
    tree=ptr;
    tree->left=NULL;
    tree->right=NULL;
  }
  else{
    parentptr=NULL;
    nodeptr=tree;
    while(nodeptr!=NULL){
      parentptr=nodeptr;
      if(val<nodeptr->data)
        nodeptr=nodeptr->left;
      else
        nodeptr=nodeptr->right;
    }
  }
  if(val<parentptr->data){
    parentptr->left=ptr;
  }
  else{
    parentptr->right=ptr;
  }
}

void preorderTraversal(struct node *tree){
  if(tree!=NULL){
    printf("%d\t",tree->data);
    preorderTraversal(tree->left);
    preorderTraversal(tree->right);
  }
}

void inorderTraversal(struct node *tree){
  if(tree!=NULL){
    inorderTraversal(tree->left);
    printf("%d\t",tree->data);
    inorderTraversal(tree->right);
  }
}