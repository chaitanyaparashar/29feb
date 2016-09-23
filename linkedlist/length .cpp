#include<iostream>
using namespace std;
struct node
{
int data;
struct node* next;
};
void push(struct node** head_ref,int new_data){
struct node* new_node=new node;
new_node->data=new_data;
new_node->next=(*head_ref);//pehle jahan head pointer point kr rha tha vo next pointer bn gya new node ka
(*head_ref)=new_node;
}

int length(struct node* head)
{//pointer to the node){
int count=0;
struct node* current = head;
while(current!=NULL){
count++;
current = current->next;
}


return count;
}
int main (){
struct node* head= NULL;
push(&head,2);
push(&head,4);
push(&head,6);
push(&head,8);
push(&head,1);
cout<<"count is";
cout<<length(head);
return 0;
}
