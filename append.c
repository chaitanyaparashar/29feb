#include<stdlib.h>
#include<stdio.h>
struct node {
int data;
//the struct node *next;
//declares a member next that is a pointer to the struct type being defined.
struct node*next;
};
void push(struct node** head_ref,int new_data)
{
//if head has always to point at the head of the link list(a constant location) then use struct node* head
//If you plan to change the location pointed by head use node **head
struct node* new_node=(struct node*) malloc(sizeof(struct node));
//node bn gyi
new_node->data=new_data;
//data pa diya
new_node->next=(*head_ref);
//next agli node ka head bna lo
(*head_ref) = new_node;
}
void insertafter(struct node* prev_node,int new_data)
//idher appan ne node** ni use kreya kyunki appan ne head same rkheya
{
if (prev_node == NULL){
    printf("pichli node khali ni ho skdi ");
    return;
}
struct node* new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=new_data;
new_node->next = prev_node->next;//new node nu prev node te agli wali nu point kreya
prev_node->next = new_node;//ab prev wali node te new new node nu point kraya
}
void append(struct node** head_ref, int new_data)
{

    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    struct node *last = *head_ref;
    new_node->data  = new_data;
     new_node->next = NULL;
     if (*head_ref == NULL)
        {
       *head_ref = new_node;
       return;
    }

    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;

    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}

void printList(struct node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}

/* Drier program to test above functions*/
int main()
{
  /* Start with the empty list */
  struct node* head = NULL;

  // Insert 6.  So linked list becomes 6->NULL
  append(&head, 6);

  // Insert 7 at the beginning. So linked list becomes 7->6->NULL
  push(&head, 7);

  // Insert 1 at the beginning. So linked list becomes 1->7->6->NULL
  push(&head, 1);

  // Insert 4 at the end. So linked list becomes 1->7->6->4->NULL
  append(&head, 4);

  // Insert 8, after 7. So linked list becomes 1->7->8->6->4->NULL
  insertafter(head->next, 8);

  printf("\n Created Linked list is: ");
  printList(head);

  return 0;
}
