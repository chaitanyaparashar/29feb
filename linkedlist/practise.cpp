#include<iostream>
using namespace std;
struct node{
int data;
struct node* next;
};
void push(struct node** head_ref,int new_data){
struct node* new_node=new node;
new_node->data=new_data;
new_node->next=(*head_ref);
(*head_ref)=new_node;
}
void printlist(struct node*node){
while(node!=NULL){
cout<<node->data;
cout<<"\n";
node=node->next;
}
}
int main (){
struct node *head=NULL;
push(&head,34);
push(&head,2);
push(&head,3);
push(&head,24);
printlist(head);
return 0;
}
