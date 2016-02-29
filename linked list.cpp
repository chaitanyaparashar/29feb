#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};


void printList(struct node *n)
{
  while (n != NULL)
  {
     printf(" %d ", n->data);
     n = n->next;
  }
}
 void push(struct node** head_ref,int data=4)
{
    struct node* new_node=(struct node*) malloc(sizeof(struct node));
   new_node ->data=4;
   new_node->next=(*head_ref);
   (*head_ref) = new_node;
}

int main (){
    struct node* head=NULL;
    struct node* second=NULL;
    struct node* third=NULL;
head = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));
head->data=3;
head->next=second;
second->data=5;
second->next=third;
third->data=7;
third->next=NULL;

printList(head);
return 0;

}

