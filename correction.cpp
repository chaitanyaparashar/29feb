#include<iostream>
using namespace std;
struct node{
int data;
struct node* next;
};
void push(struct node** head,int data){
struct node* temp= NULL;
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
void Print(struct node* head)
{
struct node* temp=head;
    temp=head;

    while(temp!=NULL)
    {
        cout<< temp->data;
        cout<<"\n";
        temp=temp->next;
    }
}
int main(){
struct node* head=NULL;
push(&head,4);
push(&head,3);
push(&head,2);
Print(head);
return 0;
}
