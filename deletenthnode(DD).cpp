#include<iostream>
using namespace std;
struct node{
int data;
struct node* next;
struct node* prev;
};
struct node* head=NULL;
void push(int key){
struct node* temp;
if(head==NULL){
    head=new node;
    head->data=key;
    head->next=NULL;
    head->prev=NULL;
}
else{
    struct node* temp;
    temp=new node;
    temp->next=head;
    temp->data=key;
    temp->prev=NULL;
    head->prev=temp;
    head=temp;
}
}
void removen(int key){
struct node* temp;
struct node* temp1;
temp =head;
temp->prev=NULL;
while(temp->data!=key){
temp=temp->next;
temp1=temp->prev;

}
temp1->next=temp->next;
temp1->next->prev=temp1;

temp->prev=NULL;
temp->next=NULL;


delete(temp);
}
void print(struct node** head){
struct node* temp;
temp= *head;
while(temp!=NULL){
    cout<<temp->data<<"\n";
    temp=temp->next;
}
}
int main(){
push(2);
push(4);
push(5);
push(6);
removen(4);
print(&head);
return 0;
}
