//###LINKED LIST





// //Linked List
// #include "stdio.h"
// #include "stdlib.h"
// struct Node{
//     int data;
//     struct Node*next;
// };

// void linkedlistraversal(struct Node * ptr){
//     while(ptr!=NULL){
//     printf("Element : %d\n",ptr->data);
//     ptr = ptr->next;
//     }
// }
// // void linked(struct Node * ptr){
// //     while(ptr!=NULL){
// //     printf("%d,",ptr->data);
// //     ptr = ptr->next;
// // }
// // }
// int main(){
    // struct Node*head;
    // struct Node*second;
    // struct Node*third;
    // struct Node*fourth;

    // //Allocated memory of notes in the HEAP(dynamic memory allocation)
    // head = (struct Node*) malloc(sizeof(struct Node));
    // second = (struct Node*) malloc(sizeof(struct Node));
    // third = (struct Node*) malloc(sizeof(struct Node));
    // fourth = (struct Node*)malloc(sizeof(struct Node));

    // //link first and second nodes 
    // head->data =7;
    // head->next = second;

    // //link second and third nodes 
    // second->data =11;
    // second->next = third;

    // //link third and fourth nodes 
    // third->data = 66;
    // third->next = fourth;

    // //Terminate the list at the FOURTH node
    // fourth->data =69;
    // fourth->next = NULL;

//     linkedlistraversal(head);
//     // linked(second);

//     return 0;
// } 






// // To insert elements in the first 
// #include "stdio.h"
// #include "stdlib.h"
// struct Node{
//     int data;
//     struct Node*next;
// };
// void linkedlistraversal(struct Node * ptr){
//     while(ptr!=NULL){
//     printf("Element : %d\n",ptr->data);
//     ptr = ptr->next;
//     }
// }
// struct Node*insertatfirst(struct Node *head,int data_1){
//     struct Node*ptr=(struct Node *)malloc(sizeof(struct Node));
//     ptr->next=head;
//     ptr->data=data_1;
//     return ptr;
// }


// int main(){
//     struct Node*head;
//     struct Node*second;
//     struct Node*third;
//     struct Node*fourth;
//     struct Node*fifth;

//     //Allocated memory of nodes in the HEAP(dynamic memory allocation)
//     head = (struct Node*) malloc(sizeof(struct Node));
//     second = (struct Node*) malloc(sizeof(struct Node));
//     third = (struct Node*) malloc(sizeof(struct Node));
//     fourth = (struct Node*)malloc(sizeof(struct Node));
//     fifth=(struct Node*)malloc(sizeof(struct Node));


//     head->data =8;
//     head->next = second;

    
//     second->data =9;
//     second->next = third;

    
//     third->data = 11;
//     third->next = fourth;

    
//     fourth->data =7;
//     fourth->next = fifth;


//     fifth->data =2;
//     fifth->next = NULL;

//     printf("Linked List before insertion\n");
//     linkedlistraversal(head);
//     printf("Linked List after insertion\n");
//     head = insertatfirst(head,69);//to enter the element in the first node 
//     linkedlistraversal(head);//to print the linked list

//     return 0;
// } 





// // To insert elements in an Index
// #include "stdio.h"
// #include "stdlib.h"
// struct Node{
//     int data;
//     struct Node*next;
// };
// void linkedlistraversal(struct Node * ptr){
//     while(ptr!=NULL){
//     printf("Element : %d\n",ptr->data);
//     ptr = ptr->next;
//     }
// }
// struct Node*insertatindex(struct Node *head,int data_index,int index){
//     struct Node*ptr=(struct Node *)malloc(sizeof(struct Node));
//     struct Node * p = head; 
//     int i=0;
//     while(i!=index-1){
//         p=p->next;
//         i++;
//     }
//     ptr->data=data_index;
//     ptr->next=p->next;
//     p->next=ptr;
//     return head;
// }

// int main(){
//     struct Node*head;
//     struct Node*second;
//     struct Node*third;
//     struct Node*fourth;
//     struct Node*fifth;

//     //Allocated memory of nodes in the HEAP(dynamic memory allocation)
//     head = (struct Node*) malloc(sizeof(struct Node));
//     second = (struct Node*) malloc(sizeof(struct Node));
//     third = (struct Node*) malloc(sizeof(struct Node));
//     fourth = (struct Node*)malloc(sizeof(struct Node));
//     fifth=(struct Node*)malloc(sizeof(struct Node));


//     head->data =8;
//     head->next = second;

    
//     second->data =9;
//     second->next = third;

    
//     third->data = 11;
//     third->next = fourth;

    
//     fourth->data =7;
//     fourth->next = fifth;


//     fifth->data =2;
//     fifth->next = NULL;

    // printf("Linked List before insertion\n");
    // linkedlisttraversal(head);
    // printf("Linked List after insertion\n");
//     head = insertatindex(head,69,0);//to enter the element in the index node 
//     linkedlistraversal(head);//to print the linked list

//     return 0;
// }





// // To insert elements in an End
// #include "stdio.h"
// #include "stdlib.h"
// struct Node{
//     int data;
//     struct Node*next;
// };
// void linkedlistraversal(struct Node * ptr){
//     while(ptr!=NULL){
//     printf("Element : %d\n",ptr->data);
//     ptr = ptr->next;
//     }
// }
// struct Node*insertatend(struct Node *head,int data_endnode){
//     struct Node*ptr=(struct Node *)malloc(sizeof(struct Node));
//     struct Node * p = head;
//     ptr->data=data_endnode; 
//     while(p->next!=NULL){
//         p=p->next;
//     }
//     p->next=ptr;
//     ptr->next=NULL;
//     return head;
// }

// int main(){
//     struct Node*head;
//     struct Node*second;
//     struct Node*third;
//     struct Node*fourth;
//     struct Node*fifth;

//     //Allocated memory of nodes in the HEAP(dynamic memory allocation)
//     head = (struct Node*) malloc(sizeof(struct Node));
//     second = (struct Node*) malloc(sizeof(struct Node));
//     third = (struct Node*) malloc(sizeof(struct Node));
//     fourth = (struct Node*)malloc(sizeof(struct Node));
//     fifth=(struct Node*)malloc(sizeof(struct Node));


//     head->data =8;
//     head->next = second;

    
//     second->data =9;
//     second->next = third;

    
//     third->data = 11;
//     third->next = fourth;

    
//     fourth->data =7;
//     fourth->next = fifth;


//     fifth->data =2;
//     fifth->next = NULL;

//     printf("Linked List before insertion\n");
//     linkedlisttraversal(head);
//     printf("Linked List after insertion\n");
//     head = insertatend(head,69);//to enter the element in the index node 
//     linkedlistraversal(head);//to print the linked list

//     return 0;
// }






// // To insert elements after a node
// #include "stdio.h"
// #include "stdlib.h"
// struct Node{
//     int data;
//     struct Node*next;
// };
// void linkedlistraversal(struct Node * ptr){
//     while(ptr!=NULL){
//     printf("Element : %d\n",ptr->data);
//     ptr = ptr->next;
//     }
// }
// struct Node*insertatend(struct Node *head,struct Node *prevnode,int data_node){
//     struct Node*ptr=(struct Node *)malloc(sizeof(struct Node));
//     struct Node * p = head;
//     ptr->data=data_node; 
//     ptr->next=prevnode->next;
//     prevnode->next=ptr;
//     return head;
// }
// int main(){

//     struct Node*head;
//     struct Node*second;
//     struct Node*third;
//     struct Node*fourth;
//     struct Node*fifth;

//     //Allocated memory of nodes in the HEAP(dynamic memory allocation)
//     head = (struct Node*) malloc(sizeof(struct Node));
//     second = (struct Node*) malloc(sizeof(struct Node));
//     third = (struct Node*) malloc(sizeof(struct Node));
//     fourth = (struct Node*)malloc(sizeof(struct Node));
//     fifth=(struct Node*)malloc(sizeof(struct Node));


//     head->data =8;
//     head->next = second;

    
//     second->data =9;
//     second->next = third;

    
//     third->data = 11;
//     third->next = fourth;

    
//     fourth->data =7;
//     fourth->next = fifth;


//     fifth->data =2;
//     fifth->next = NULL;


//     printf("Linked List before insertion\n");
//     linkedlistraversal(head);
//     printf("Linked List after insertion\n");
//     head = insertatend(head,head,69);//to enter the element in the index node 
//     linkedlistraversal(head);//to print the linked list

//     return 0;
// }





//Delete the elements of the node





// // To delete the first element
// #include "stdio.h"
// #include "stdlib.h"
// struct Node{
//     int data;
//     struct Node*next;
// };
// void linkedlistraversal(struct Node * ptr){
//     while(ptr!=NULL){
//     printf("Element : %d\n",ptr->data);
//     ptr = ptr->next;
//     }
// }
// struct Node*delete_head(struct Node *head){//function for deletion of head
//     struct Node*ptr=head;
//     head=head->next;
//     free(ptr);
//     return head;
// }
// int main(){

//     struct Node*head;
//     struct Node*second;
//     struct Node*third;
//     struct Node*fourth;
//     struct Node*fifth;

//     //Allocated memory of nodes in the HEAP(dynamic memory allocation)
//     head = (struct Node*) malloc(sizeof(struct Node));
//     second = (struct Node*) malloc(sizeof(struct Node));
//     third = (struct Node*) malloc(sizeof(struct Node));
//     fourth = (struct Node*)malloc(sizeof(struct Node));
//     fifth=(struct Node*)malloc(sizeof(struct Node));

//     head->data =8;
//     head->next = second;

   
//     second->data =9;
//     second->next = third;

   
//     third->data = 11;
//     third->next = fourth;

   
//     fourth->data =7;
//     fourth->next = fifth;

//     fifth->data =2;
//     fifth->next = NULL; 

//     printf("Linked List before deletion\n");
//     linkedlistraversal(head);
//     printf("Linked List after deletion\n");
//     head = delete_head(head);//to enter the element in the index node 
//     head = delete_head(head);
//     linkedlistraversal(head);//to print the linked list
//     return 0;
// }






// // To delete the node on index
// #include "stdio.h"
// #include "stdlib.h"
// struct Node{
//     int data;
//     struct Node*next;
// };
// void linkedlistraversal(struct Node * ptr){
//     while(ptr!=NULL){
//     printf("Element : %d\n",ptr->data);
//     ptr = ptr->next;
//     }
// }
// struct Node* delete_between_node(struct Node* head,int index){
//     struct Node* ptr=head;
//     struct Node* ptrt=head->next;
//     int i=0;
//     if(index==0){
//         head=ptrt;
//         return head;
//     }
//     while(i<index-1){
//         i++;
//         ptr=ptr->next;
//         ptrt=ptrt->next;
//     }
//     ptr->next=ptrt->next;
//     free(ptrt);
//     return head;
// }
// int main(){
//     struct Node*head;
//     struct Node*second;
//     struct Node*third;
//     struct Node*fourth;
//     struct Node*fifth;

//     //Allocated memory of nodes in the HEAP(dynamic memory allocation)
//     head = (struct Node*) malloc(sizeof(struct Node));
//     second = (struct Node*) malloc(sizeof(struct Node));
//     third = (struct Node*) malloc(sizeof(struct Node));
//     fourth = (struct Node*)malloc(sizeof(struct Node));
//     fifth=(struct Node*)malloc(sizeof(struct Node));


//     head->data =8;
//     head->next = second;

    
//     second->data =9;
//     second->next = third;

    
//     third->data = 11;
//     third->next = fourth;

    
//     fourth->data =7;
//     fourth->next = fifth;


//     fifth->data =2;
//     fifth->next = NULL;


//     printf("Linked List before deletion\n");
//     linkedlistraversal(head);
//     printf("Linked List after deletion\n");
//     head = delete_between_node(head,2);//to enter the index after which the node should be deleted
//     linkedlistraversal(head);//to print the linked list

//     return 0;
// }






// // To delete the last node
// #include "stdio.h"
// #include "stdlib.h"
// struct Node{
//     int data;
//     struct Node*next;
// };
// void linkedlistraversal(struct Node * ptr){
//     while(ptr!=NULL){
//     printf("Element : %d\n",ptr->data);
//     ptr = ptr->next;
//     }
// }
// struct Node*deleter_lastnode(struct Node *head){//function for deleting the last node
    // struct Node*prevptr=head;
    // struct Node*ptr=head->next;
//     while(ptr->next!=NULL){
//         ptr=ptr->next;
//         prevptr=prevptr->next;
//     }
//     prevptr->next=NULL;
//     free(ptr);
//     return head;
// }
// int main(){
//     struct Node*head;
//     struct Node*second;
//     struct Node*third;
//     struct Node*fourth;
//     struct Node*fifth;

//     //Allocated memory of nodes in the HEAP(dynamic memory allocation)
//     head = (struct Node*) malloc(sizeof(struct Node));
//     second = (struct Node*) malloc(sizeof(struct Node));
//     third = (struct Node*) malloc(sizeof(struct Node));
//     fourth = (struct Node*)malloc(sizeof(struct Node));
//     fifth=(struct Node*)malloc(sizeof(struct Node));


//     head->data =8;
//     head->next = second;

    
//     second->data =9;
//     second->next = third;

    
//     third->data = 11;
//     third->next = fourth;

    
//     fourth->data =7;
//     fourth->next = fifth;


//     fifth->data =2;
//     fifth->next = NULL;


//     printf("Linked List before deletion\n");
//     linkedlistraversal(head);
//     printf("Linked List after deletion\n");
//     head = deleter_lastnode(head);//to enter the element in the index node 
//     linkedlistraversal(head);//to print the linked list

//     return 0;
// }






// // To delete the node with the given value
// #include "stdio.h"
// #include "stdlib.h"
// struct Node{
//     int data;
//     struct Node*next;
// };
// void linkedlistraversal(struct Node*head){
//     struct Node*p=head;
//     while(p!=NULL){
//         printf("Element: %d\n",p->data);
//         p=p->next;
//     }
// }
// struct Node*delete_between_node(struct Node *head,int data){//function for deleting the last node
//     struct Node*prevptr=head;
//     struct Node*ptr=head->next;
//     while(ptr->data!=data){
//         ptr=ptr->next;
//         prevptr=prevptr->next;
//     }
//     prevptr->next=ptr->next;
//     free(ptr);
//     return head;
// }
// int main(){
//     struct Node*head;
//     struct Node*second;
//     struct Node*third;
//     struct Node*fourth;
//     struct Node*fifth;

//     //Allocated memory of nodes in the HEAP(dynamic memory allocation)
//     head = (struct Node*) malloc(sizeof(struct Node));
//     second = (struct Node*) malloc(sizeof(struct Node));
//     third = (struct Node*) malloc(sizeof(struct Node));
//     fourth = (struct Node*)malloc(sizeof(struct Node));
//     fifth=(struct Node*)malloc(sizeof(struct Node));

//     head->data =8;
//     head->next = second;

//     second->data =9;
//     second->next = third;

//     third->data = 11;
//     third->next = fourth;

//     fourth->data =7;
//     fourth->next = fifth;

//     fifth->data =2;
//     fifth->next = NULL;

//     printf("Linked List before deletion\n");
//     linkedlistraversal(head);
//     printf("Linked List after deletion\n");
//     head = delete_between_node(head,11);//to enter the element in the index node 
//     linkedlistraversal(head);//to print the linked list
//     return 0;
// }





//###CIRCULAR Linked list





// //simple Traversal of Circulat linked list
// #include "stdio.h"
// #include "stdlib.h"
// struct Node{
//     int data;
//     struct Node*next;
// };
// void linkedlistraversal(struct Node*head){
//     struct Node*p=head;
//     do{
//         printf("%d\t",p->data);
//         p=p->next;
//     }while(p!=head);
// }
// int main(){
//     struct Node*head;
//     struct Node*second;
//     struct Node*third;
//     struct Node*fourth;
//     struct Node*fifth;

//     //Allocated memory of nodes in the HEAP(dynamic memory allocation)
//     head = (struct Node*) malloc(sizeof(struct Node));
//     second = (struct Node*) malloc(sizeof(struct Node));
//     third = (struct Node*) malloc(sizeof(struct Node));
//     fourth = (struct Node*)malloc(sizeof(struct Node));
//     fifth=(struct Node*)malloc(sizeof(struct Node));

//     head->data =8;
//     head->next = second;

//     second->data =9;
//     second->next = third;

//     third->data = 11;
//     third->next = fourth;

//     fourth->data =7;
//     fourth->next = fifth;

//     fifth->data =2;
//     fifth->next = head;

//     linkedlistraversal(head);//to print the linked list
//     return 0;
// }






// //simple Code of insertion in Circulat linked list
// #include "stdio.h"
// #include "stdlib.h"
// struct Node{
//     int data;
//     struct Node*next;
// };
// void linkedlistraversal(struct Node*head){
//     struct Node*p=head;
//     do{
//         printf("%d\t",p->data);
//         p=p->next;
//     }while(p!=head);
//     printf("\n");
// }
// struct Node* insertion_in_head(struct Node*head,int data){
//     struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
//     struct Node*ptrt=head;
//     ptr->data=data;
//     ptr->next=head;
//     while(ptrt->next!=head){
//         ptrt=ptrt->next;
//     }
//     ptrt->next=ptr;
//     head=ptr;//this makes the new node as the head of the linked list
//     return head;
// }
// int main(){
//     struct Node*head;
//     struct Node*second;
//     struct Node*third;
//     struct Node*fourth;
//     struct Node*fifth;
//     //Allocated memory of nodes in the HEAP(dynamic memory allocation)
//     head = (struct Node*) malloc(sizeof(struct Node));
//     second = (struct Node*) malloc(sizeof(struct Node));
//     third = (struct Node*) malloc(sizeof(struct Node));
//     fourth = (struct Node*)malloc(sizeof(struct Node));
//     fifth=(struct Node*)malloc(sizeof(struct Node));

//     head->data =8;
//     head->next = second;

//     second->data =9;
//     second->next = third;

//     third->data = 11;
//     third->next = fourth;

//     fourth->data =7;
//     fourth->next = fifth;

//     fifth->data =2;
//     fifth->next = head;
//     printf("Circular linked list before insertion\n");
//     linkedlistraversal(head);//to print the linked list
//     head=insertion_in_head(head,69);
//     head=insertion_in_head(head,96);    
//     printf("Circular Linked list after insertion\n");
//     linkedlistraversal(head);//to print the linked list
//     return 0;
// }






// //simple Code of deletion in Circulat linked list
// #include "stdio.h"
// #include "stdlib.h"
// struct Node{
//     int data;
//     struct Node*next;
// };
// void linkedlistraversal(struct Node*head){
//     struct Node*p=head;
//     do{
//         printf("%d\t",p->data);
//         p=p->next;
//     }while(p!=head);
//     printf("\n");
// }
// struct Node* deletion_in_head(struct Node*head){
//     struct Node*ptr=head;
//     struct Node*ptrt=head->next;
//     while(ptrt->next!=head){
//         ptrt=ptrt->next;
//     }
//     ptrt->next=ptr->next;
//     head=ptrt->next;
//     free(ptr);
//     return head;
// }
// int main(){
//     struct Node*head;
//     struct Node*second;
//     struct Node*third;
//     struct Node*fourth;
//     struct Node*fifth;
//     //Allocated memory of nodes in the HEAP(dynamic memory allocation)
//     head = (struct Node*) malloc(sizeof(struct Node));
//     second = (struct Node*) malloc(sizeof(struct Node));
//     third = (struct Node*) malloc(sizeof(struct Node));
//     fourth = (struct Node*)malloc(sizeof(struct Node));

//     fifth=(struct Node*)malloc(sizeof(struct Node));

//     head->data =8;
//     head->next = second;

//     second->data =9;
//     second->next = third;

//     third->data = 11;
//     third->next = fourth;

//     fourth->data =7;
//     fourth->next = fifth;

//     fifth->data =2;
//     fifth->next = head;
//     printf("Circular linked list before deletion\n");
//     linkedlistraversal(head);//to print the linked list
//     head=deletion_in_head(head);
//     printf("Circular Linked list after deletion\n");
//     linkedlistraversal(head);//to print the linked list
//     return 0;
// }






//###DOUBLY Linked list






// //Code of reversal using doubly linked list
// #include "stdio.h"
// #include "stdlib.h"
// struct Node{
//     struct Node*prev;
//     int data;
//     struct Node*next;
// };
// void linkedlistraversal(struct Node*head){
//     printf("Forward Treaversal in Doubly linked list \n");
//     struct Node*p=head;
//     struct Node*ptr;
//     while(p!=NULL){
//         printf("%d\t",p->data);
//         ptr=p;
//         p=p->next;//    We store the last node for reverse traversal
//     }
//     printf("\n");
//     printf("Reverse Treaversal in Doubly linked list \n");
//     while(ptr!=NULL){
//         printf("%d\t",ptr->data);
//         ptr=ptr->prev;
//     }
//     printf("\n");
// }
// int main(){
//     struct Node*head;
//     struct Node*second;
//     struct Node*third;
//     struct Node*fourth;
//     struct Node*fifth;
//     //Allocated memory of nodes in the HEAP(dynamic memory allocation)
//     head = (struct Node*) malloc(sizeof(struct Node));
//     second = (struct Node*) malloc(sizeof(struct Node));
//     third = (struct Node*) malloc(sizeof(struct Node));
//     fourth = (struct Node*)malloc(sizeof(struct Node));
//     fifth=(struct Node*)malloc(sizeof(struct Node));

//     head->prev=NULL;
//     head->data =8;
//     head->next = second;

//     second->prev=head;
//     second->data =9;
//     second->next = third;

//     third->prev=second;
//     third->data = 11;
//     third->next = fourth;

//     fourth->prev=third;
//     fourth->data =7;
//     fourth->next = fifth;

//     fifth->prev=fourth;
//     fifth->data =2;
//     fifth->next = NULL;

//     linkedlistraversal(head);//to print the linked list
//     return 0;
// }