#include<iostream>
using namespace std;
struct node {
int data;
struct node* next;
};
void push(struct node** head,int data){
struct node* temp=NULL;
temp = new node;
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
void recrev(struct node** head){
struct node* first;
struct node* rest;
if(*head==NULL)return;
first=*head;
rest=first->next;
if(rest==NULL)return;
recrev(&rest);

    first->next->next=first;
    first->next=NULL;
    *head=rest;

}
void print(struct node* head){
    struct node* temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        cout<<"\n";
    temp=temp->next;
    }
}
int main(){
struct node* head=NULL;
push(&head,3);
push(&head,5);
push(&head,8);
push(&head,9);
recrev(&head);
print(head);
return 0;
}
