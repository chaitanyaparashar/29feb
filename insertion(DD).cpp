#include<iostream>
using namespace std;
struct node{
int data;
struct node* prev;
struct node* next;
};
struct node* head=NULL;
int insertaftr(int key){
struct node* temp;
if(head==NULL){
head = new node;
head->data=key;
head->next=NULL;
head->prev=NULL;
}
else{
temp=new node;
temp->next=head;
temp->data=key;
temp->prev=NULL;
head->prev=temp;
head=temp;
}
}
void print(struct node* head){
struct node* temp;
temp = head;
while (temp!=NULL){
    cout<<temp->data<<"\n";
    temp=temp->next;
}
}
int main(){

insertaftr(2);
insertaftr(3);
insertaftr(5);
print(head);
return 0;
}
