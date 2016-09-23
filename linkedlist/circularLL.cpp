#include<iostream>
using namespace std;
struct node{
int data;
struct node* next;
};
void push(struct node** head,int data){
struct node* newnode=new node;
newnode->data=data;
newnode->next=*head;
*head=newnode;

}
void print(struct node* head){
struct node* temp;
temp = head;
while(temp->next!=NULL){
    cout<<temp->data<<"\n";
    temp=temp->next;
}
cout<<temp->data;
temp->next=head;
}
int main(){
    int n;
    int d;
    int i;
struct node* head = NULL;
cout<<"enter the number of entries \n";
cin>>n;

for(i=0;i<n;i++){
    cin>>d;
    push(&head,d);

}
cout<<"your linked list is \n";
print(head);
return 0;
}
