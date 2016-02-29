#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
};
void push(struct node** head_ref,int new_data){
struct node*new_node=new node;
new_node->data=new_data;
new_node->next=(*head_ref);
(*head_ref)=new_node;
}
 void del(struct node **head_ref,int key){
 struct node *temp= *head_ref,*prev;
 if(temp!=NULL && temp->data==key){
    *head_ref = temp->next;
    delete(temp);
 }

    while(temp!=NULL && temp->data!= key){
        prev=temp;
        // equate kiya kyuki temp ko aage bradana tha
        temp=temp->next;
        // temp aage gya par orignal value prev mei hai .. mtlb k prev ek step piche ho gya temp se

    }
    if (temp==NULL)return;
    prev->next=temp->next;
    // pichli node ka next delete hon wali node ka next bn gya
    delete(temp);
 }

 void ReversePrint(struct node* head) {
    if(head == NULL) return;
    ReversePrint(head->next);
    cout<<head->data;
    cout<<"\n";
}


int main ()
{
    int a;
    int n;
    int d,i;
struct node* head=NULL;
cout<<"no. of nodes \n";
cin>>n;
for(i=0;i<n;i++){
    cin>>d;

    push(&head,d);

}
cout<<"\nlist before deletion\n";
ReversePrint(head);
cout<<"\nno. to be deleted\n";
cin>>a;
del(&head,a);
cout<<"\nlist after deleting "<<a<<":\n";
ReversePrint(head);
return 0;
}
