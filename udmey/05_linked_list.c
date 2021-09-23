// #include <stdio.h>
// #include <stdlib.h>

// struct node 
// {
//     int num;                    
//     struct node *nextptr;           
// }*stnode;

// void createNodeList(int n); 
// void displayList();        
// int count(struct node *p);
// int sum(struct node *p);
// int max(struct node *p);
// int search(int key);

// int main()
// {
//     int n;		
//     printf(" Input the number of nodes : ");
//     scanf("%d", &n);
//     createNodeList(n);
//     printf("\n Data entered in the list : \n");
//     displayList();
//     printf("the count is : %d\n",count(stnode));
//     printf("the sum  is : %d\n",sum(stnode));
//     printf("the max is : %d\n",max(stnode));
//     printf("the search is:%d\n",search(5));

//     return 0;
// }
// void createNodeList(int n)
// {
//     struct node *fnNode, *tmp;
//     int num, i;
//     stnode = (struct node *)malloc(sizeof(struct node));

//     if(stnode == NULL) 
//     {
//         printf(" Memory can not be allocated.");
//     }
//     else
//     {
//         printf(" Input data for node 1 : ");
//         scanf("%d",&num);
//         stnode->num =num;      
//         stnode->nextptr = NULL; 
//         tmp = stnode;

//         for(i=2; i<=n; i++)
//         {
//             fnNode = (struct node *)malloc(sizeof(struct node));
//             if(fnNode == NULL)
//             {
//                 printf(" Memory can not be allocated.");
//                 break;
//             }
//             else
//             {
//                 printf(" Input data for node %d : ", i);
//                 scanf(" %d", &num);
 
//                 fnNode->num = num;     
//                 fnNode->nextptr = NULL; 
 
//                 tmp->nextptr = fnNode; 
//                 tmp = tmp->nextptr; 
//             }
//         }
//     }
// }
// void displayList()
// {
//     struct node *tmp;
//     if(stnode == NULL)
//     {
//         printf(" List is empty.");
//     }
//     else
//     {
//         tmp = stnode;
//         while(tmp != NULL)
//         {
//             printf(" Data = %d\n", tmp->num);      
//             tmp = tmp->nextptr;                     
//         }
//     }
// } 

// int count(struct node *p)
// {
//     int count =0;
//     while(p!=NULL)
//     {
//         count++;
//         p=p->nextptr;
//     }
//     return count;
// }

// int sum(struct node *p)
// {
//     int sum=0;
//     while(p!=NULL)
//     {
//         sum=sum+(p->num);
//     }
//     return sum;
// }

// int max(struct node *p)
// {
//     int max=INT_MIN;
//     while(p!=NULL)
//     {
//         if(p->num>max)
//         {
//             max=(p->num);
//             p=p->nextptr;   
//         }
//         return max;
//     }

// }

// int search(int key)
// {
//     int index;
//     struct node *curNode;

//     index = 0;
//     curNode = stnode;

 
//     while (curNode != NULL && curNode->num != key)
//     {
//         index++;
//         curNode = curNode->nextptr;
//     }


//     return (curNode != NULL) ? index : -1;
// }

// insertation in linked list
// #include<stdio.h>
// #include<stdlib.h>

// typedef struct node{
//     int data;
//     struct node*next;
// }node;

// void insertathead(node**head,int ndata)
// {
//     node*newnode=NULL;
//     newnode=(node*)malloc(sizeof(struct node));
//     newnode->data=ndata;
//     if(*head==NULL)
//     {
//         *head=newnode;
//     }
//     newnode->next=*head;
//     *head=newnode;

// }

// void insertatend(node**head,int ndata)
// {
//     node*newnode=NULL;
//     newnode=(node*)malloc(sizeof(struct node));
//     newnode->data=ndata;
//     newnode->next=NULL;
//     if(*head==NULL){
//         *head=newnode;
//     }
//     else{
//         node *temp=*head;
//         while(temp->next!=NULL){
//             temp=temp->next;
//             temp->next=newnode;
//         }
//     }
// }
// void insertinbet(node**head,int position, int data){
//     node*newnode=NULL;
//     newnode=(node*)malloc(sizeof(struct node));
//     newnode->data=data;
//     newnode->next=NULL;
//     node*temp=*head;
//     for(int i=2;i<position;i++){
//         if(temp->next!=NULL){
//             temp=temp->next;
//         }
//     }
//     newnode->next=temp->next;
//     temp->next=newnode;
// }
// int main()
// {
//     node*head=NULL;
// insertathead(&head,1);
// insertatlast(&head,2);
// insertinbet(&head,3,1);
// return 0;
// }



// deletion in linked list
// #include<stdio.h>
// #include<stdlib.h>
// void deletehead(){
//     if(head==NULL){
//         printf("the linked list is empty");
//     }
//     else{
//         node*temp=*head;
//         *head=head->next;
//         free(temp);
//     }
// }
// void deleteatend(){
// node*ptr,ptr1;
// *ptr=*head;
// if(head==NULL){
//     printf("list is empty");
// }
// elseif(head->next==NULL){
//     free(head);
//     printf("one element in the list");
// }
// else{
//     *ptr=*head;
//     while(ptr->next!=NULL){
//         ptr1=ptr;
//         ptr=ptr->next;
//         ptr1->next=NULL;
//         free(ptr);
//     }
// }
// }

// void deleteinbet(){
// int i,position;
// scanf("%d",&position);
// node*ptr;
// node*temp=*head;
// while(temp->next!=NULL){
// ptr=temp;
//     temp=temp->next;
//     ptr->next=temp->next;
//     free(temp);

// }
// } 

// int main()
// {

// return 0;
// }

// linked list is sorted or not
// int sorted(struct node*p)
// {
// int x=INT_MIN;
// while(p->next !=NULL)
// {
//     if((p->data<x))
//     {
//         return 0;
//     }
//     else{
//         x=p->data;
//         p=p->next;
//         return 1;
//     }
// }

// remove duplicate element of an array 
// void RemoveDuplicate(struct Node *p)
// {
//  struct Node *q=p->next;
 
//  while(q!=NULL)
//  {
//  if(p->data!=q->data)
//  {
//  p=q;
//  q=q->next;
//  }
//  else
//  {
//  p->next=q->next;
//  free(q);
//  q=p->next;
//  }
//  }
// }

// reversing the linked list
// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
// 	int data;
// 	struct Node* next;
// };

// static void reverse(struct Node** head_ref)
// {
// 	struct Node* r = NULL;
// 	struct Node* p = *head_ref;
// 	struct Node* q = NULL;
// 	while (p != NULL) {
	
// 		r = q;

// 		q = p;

// 		p = p->next;
// 		q->next;
// 	}
// 	*head_ref = q;
// }

// void push(struct Node** head_ref, int new_data)
// {
// 	struct Node* new_node
// 		= (struct Node*)malloc(sizeof(struct Node));
// 	new_node->data = new_data;
// 	new_node->next = (*head_ref);
// 	(*head_ref) = new_node;
// }

// void printList(struct Node* head)
// {
// 	struct Node* temp = head;
// 	while (temp != NULL) {
// 		printf("%d ", temp->data);
// 		temp = temp->next;
// 	}
// }

// int main()
// {
// 	struct Node* head = NULL;

// 	push(&head, 20);
// 	push(&head, 4);
// 	push(&head, 15);
// 	push(&head, 85);

// 	printf("Given linked list\n");
// 	printList(head);
// 	reverse(&head);
// 	printf("\nReversed Linked list \n");
// 	printList(head);
// 	getchar();
// }
// reversing using recurision
// void Reverse3(struct Node *q,struct Node *p)
// {
//  if(p)
//  {
//  Reverse3(p,p->next);
//  p->next=q;
//  }
//  else
//  first=q;
// }