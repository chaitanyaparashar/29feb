#include<iostream>
using namespace std;
struct node{
int data;
struct node* next;
};
void push(struct node** head,int data){
struct node* temp=NULL;;
temp=new node;
temp->data=data;
if(head==NULL){
    *head=temp;
    temp->next=NULL;
}
else{
    temp->next=*head;
    *head=temp;
}
}
void delfull(struct node** head)
{
struct node* temp=*head;
struct node* temp1;
while(temp!=NULL){
        temp1=temp->next;
    delete(temp);
    temp=temp1;
}
*head=NULL;
cout<<"\nlinked list is fully deleted\n";
}
void print(struct node* head){
struct node* temp=head;
while(temp!=NULL){
cout<<temp->data<<"\n";
    temp=temp->next;
}
}
int main(){
struct node* head=NULL;
push(&head,1);
push(&head,2);
push(&head,3);
push(&head,4);
push(&head,5);
push(&head,6);
print(head);
delfull(&head);
return 0;
}

