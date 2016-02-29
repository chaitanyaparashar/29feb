#include<iostream>
#include<assert.h>
#include<stdio.h>
using namespace std;
struct node{
int data;
struct node* next;
};
void push(struct node** head_ref,int new_data){
struct node*new_node=new node;
new_node->data=new_data;
new_node->next=(*head_ref);
(*head_ref)=new_node;
}
int getN(struct node* head,int idx){
struct node* temp = head;

int i=0;
for(temp=head;temp!=NULL;temp=temp->next){
if(i==idx)return(temp->data);
i++;

}

assert(0);
}

int main(){
struct node* head=NULL;
push(&head,4);
push(&head,5);
push(&head,6);
cout<<getN(head,1);


}
