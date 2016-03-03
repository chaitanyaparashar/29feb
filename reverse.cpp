#include<iostream>
using namespace std;
struct node{
int data;
struct node* next;
};
void push(struct node **head,int data){
struct node* temp = NULL;
temp=new node;
temp->data=data;
if(head==NULL){
    *head=temp;
    temp->next=NULL;
}
else
{
    temp->next=*head;
    *head=temp;
}
}
void rev(struct node**head)
{
struct node* result=NULL;
struct node*current=*head;
struct node* next;
while(current!=NULL){
    next=current->next;
    current->next=result;
    result=current;
    current=next;
}
*head=result;
}
int print(struct node* head){
struct node* temp=head;
while(temp!=NULL){
    cout<<temp->data;
    cout<<"\n";
    temp=temp->next;
}

}
int main(){
struct node* head = NULL;
push(&head,1);
push(&head,2);
push(&head,3);
push(&head,4);
rev(&head);
print(head);
return 0;
}
