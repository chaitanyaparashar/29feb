#include<iostream>
using namespace std;
struct node{
int data;
struct node* next;
struct node* prev;
};
void push(struct node** head_ref,int new_data){
struct node*new_node=new node;
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if((*head_ref) !=  NULL)
      (*head_ref)->prev = new_node ;
    (*head_ref)    = new_node;
}

}
printlist(struct node*node){
    struct node*last=NULL;
while()
}
