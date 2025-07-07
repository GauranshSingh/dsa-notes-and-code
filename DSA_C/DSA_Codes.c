// #include <stdio.h>
// int main(){

// return 0;
// }






// //###Dynamic allocation of memory with MALLOC() funtion program
// #include "stdio.h"
// #include "stdlib.h"
// int main(){
//     printf("Enter the number of elements to be stored in the pointer: ");
//     int n;
//     scanf("%d",&n);
//     int *ptr;
//     ptr = (int*)malloc(n*(sizeof(int)));
//     for(int i=0;i<n;i++){
//         printf("Enter the %d element: ",(i+1));
//         scanf("%d",ptr + i);
//     }
//     printf("following are the elements entered: ");
//     for(int j=0;j<n;j++){
//         if(j<n-1){
//         printf("%d,",*(ptr+j));
//         }
//         else{
//         printf("%d",*(ptr+j));
//         }
//     }
// return 0;
// }






// //###MALLOC() funtion program
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int i, n;
//     printf("Enter the number of integers: ");
//     scanf("%d", &n);
//     int *ptr = (int *)malloc(n * sizeof(int));
//     if (ptr == NULL)
//     {
//     printf("Memory not available.");
//     exit(1);
//     }
//         for (i = 0; i < n; i++)
//         {
//             printf("Enter an integer: ");
//             scanf("%d", ptr + i);
//         }
//         printf("The enterd integers are: ");
//         for (i = 0; i < n; i++){
//             printf("%d ", *(ptr + i));
//         }
//             return 0;
// }






// //#dynamic memory allocation for array in the  program
// #include <stdio.h>
// #include <stdlib.h>
// struct myArray{
//     int total_size;
//     int used_size;
//     int *ptr;
// };

// void CreateArray(struct myArray *a, int t_size,int u_size){
//     // (*a).total_size = t_size;
//     // (*a).used_size = u_size; 
//     // (*a).ptr = (int *)malloc(t_size*(sizeof(int)));
    
//     a->total_size = t_size;
//     a->used_size = u_size;   
//     a->ptr = (int *)malloc(t_size*(sizeof(int)));
//     if (a->ptr == NULL) {
//     printf("Memory allocation failed!\n");
//     exit(1);
// }
// }

// void setVal(struct myArray *a){
//     int n;
//     for(int i=0;i<a->used_size;i++){
//         scanf("%d",&n);
//         (a->ptr)[i]=n;
//     }
// }

// void show(struct myArray *a){
//     for(int i=0;i < a ->used_size;i++){
//         printf("%d\t",(a->ptr)[i]);
//     }
// }

// int main(){
//     struct myArray array;
//     CreateArray(&array,10,6);
//     printf("value intake\n");
//     setVal(&array);
//     printf("value outlet: ");
//     show(&array);
// return 0;
// }






// #include <stdio.h>
// int main(){
//     int x= 10;
//     int* p = &x;
//     // printf("%d", *p);     // this give the value at address x =10 
//     printf("%d",p);          // this gives the address of x= 6422296
//     return 0;
// }








////Traversal is done here
// #include "stdio.h"
// void display(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
// }
// int main(){
//     int arr[4]={1,2,3,4};
//     display(arr,4);
// }





// //###code for insertion of array
// #include "stdio.h"
// void display(int arr[],int n){
//     //code for traversal
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//    }
// }
//  int indexinsertion(int arr[],int size,int element,int capacity,int index){//##code for insertion
//     if(size+1>capacity){
//         return -1;
//         //used to declare and error
//     }
//     else{
//     for(int i=size-1;i>=index;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[index]=element;
//     return 1;
//     }
// }
// int main(){
//     int arr[10]={7,8,12,27,88};
//     int size = 5;
//     int n,i;
//     printf("Enter the element to be inserted: ");
//     scanf("%d",&n);
//     printf("Enter the index to be inserted in: ");
//     scanf("%d",&i);
//     int element =n;
//     int index=i;
//     printf("Befor insertion\n");
//     display(arr,size);
//     printf("\n");
//     int result =indexinsertion(arr,size,element,100,index);
//     if(result==-1){//this
//         printf("You have exceeded the capacity of Array\n");
//     }
//     else{
//         printf("The insertion was succesfull!!\n");
//         printf("After the insertion\n");
//         display(arr,size+1);
//     }
//     return 0;
// }





// //###code for deletion of array
// #include "stdio.h"
// void display(int arr[],int n){
//     //code for travrsal
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//    }
// }
// void deletion(int arr[],int size,int index){//##code for deletion
//     for(int i=index;i<=size-1;i++){
//         arr[i]=arr[i+1];
//     }
// }
// int main(){
//     int arr[100]={7,8,12,27,88};
//     int size = 5;
//     int i;
//     printf("Enter the index to be deleted in: "); 
//     scanf("%d",&i);
//     int index=i;
//     printf("Before deletion\n");
//     display(arr,size);
//     printf("\n");
//     printf("after deletion\n");
//     deletion(arr,size,index);
//     size = size-1;
//     display(arr,size);
//     return 0;
// }






//##Linear search(works for both unsorted and sorted arrays)
// #include "stdio.h"
// int linearsearch(int arr[],int l,int n){
//     for(int i=0;i<l;i++){
//         if(arr[i]==n){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={1,5,321,1,4342,24314,7343,131,452,69};
//     int to_find=69;
//     int index = linearsearch(arr,(sizeof(arr)/sizeof(int)),to_find);//###this is a new way to find size of an array
//     printf("Element %d found at %d index\n",arr[index],index);
//     return 0;
// }






// //Binary search(works only for sorted array)
// #include "stdio.h"
// int binarysearch(int arr[],int size,int element){
//     int low, mid ,high;
//     low = 0;
//     high=size-1;
//     // mid = (high +low)/2;
//     while(low<=high){//keeps searching until low is lesser than high
//     mid = (high +low)/2;
//     if(arr[mid]==element){
//         return mid;
//     }
//     else if(arr[mid]<element){
//         low = mid+1;//we take mid +1 since there is no point of searching on mid element 
//     }
//     else{
//         high = mid-1;//we take mid -1 since there is no point of searching on mid element 
//     } 
//     }
//     return -1;
// }
// int main(){
//     int arr[]={1,5,7,8,69};
//     printf("Enter the element in the array you wanna search: ");
//     int to_find;
//     scanf("%d",&to_find);
//     int index = binarysearch(arr,(sizeof(arr)/sizeof(int)),to_find);//###this is a new way to find size of an array
//     if (index==-1){
//         printf("Entered number is not in the array\n");
//     }
//     else{
//     printf("Element %d found at %d index\n",to_find,index);
//     }
//     return 0;
// }






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
//     struct Node*head;
//     struct Node*second;
//     struct Node*third;
//     struct Node*fourth;

//     //Allocated memory of notes in the HEAP(dynamic memory allocation)
//     head = (struct Node*) malloc(sizeof(struct Node));
//     second = (struct Node*) malloc(sizeof(struct Node));
//     third = (struct Node*) malloc(sizeof(struct Node));
//     fourth = (struct Node*)malloc(sizeof(struct Node));

//     //link first and second nodes 
//     head->data =7;
//     head->next = second;

//     //link second and third nodes 
//     second->data =11;
//     second->next = third;

//     //link third and fourth nodes 
//     third->data = 66;
//     third->next = fourth;

//     //Terminate the list at the FOURTH node
//     fourth->data =69;
//     fourth->next = NULL;

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
// struct Node*deleter_between_node(struct Node *head,int index){//function for deletion node at index
//     struct Node*p=head;
//     struct Node*q=p->next;
//     int i=0;
//     for(int i=0;i<=index-1;i++){
//         p=p->next;
//         q=q->next;
//     }
//     p->next=q->next;
//     free(q);
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
//     head = deleter_between_node(head,2);//to enter the index after which the node should be deleted
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
//     do{                                  // so while loop since we can;t use p->next!=head in while for this type of condition
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
//     head=ptr;//this makes the new node as the head of the linked list(altough we can directle return ptr)
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
// struct Node* deletion_of_last_node(struct Node*head){
//     struct Node*ptr_prev=head;
//     struct Node*ptr_del=head->next;
//     while(ptr_del->next!=head){
//         ptr_prev=ptr_prev->next;
//         ptr_del=ptr_del->next;
//     }
//     ptr_prev->next=head;
//     free(ptr_del);
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





////####STACK####//




// #include <stdio.h>
// #include <stdlib.h>
// struct stack{
//     int size;
//     int top;
//     int *arr;
// };
// int isempty(struct stack* ptr){
//     if(ptr->top==-1){
//         return 1;
//     }
// }
// int isFull(struct stack* ptr){
//     if(ptr->top==ptr->size-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     struct stack *s;
//     s->size=80;
//     s->top=-1;
//     s->arr=(int*)malloc(s->size*sizeof(int));


//     //Pushing an element manually
//     s->arr[0]=7;
//     s->top++;
//     //check if stack is empty
//     if(isempty(s)){
//         printf("The stack is emptry\n");
//         return 0;
//     }
//     printf("The stack is not empty");
//     return 0;
// }






// //funtion to push and pop in a stack
// #include <stdio.h>
// #include <stdlib.h>
// struct stack{
//     int size;
//     int top;
//     int *arr;
// };
// int isempty(struct stack* ptr){
//     if(ptr->top==-1){
//         return 1;
//     }
//     return 0;
// }
// int isFull(struct stack* ptr){
//     if(ptr->top==ptr->size-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     struct stack *s;
//     s->size=80;
//     s->top=-1;
//     s->arr=(int*)malloc(s->size*sizeof(int));

//     s->arr[0]=7;
//     s->top++;

//     s->arr[1]=5;
//     s->top++;

//     s->arr[2]=4;
//     s->top++;

//     s->arr[3]=2;
//     s->top++;

//     if(isFull(s)){
//         printf("Stack over flow\n");
//     }
//     else{
//         printf("The stack has got space\n");
//     }

//     if(isempty(s)){
//         printf("The stack is empty\n");
//         return 0;
//     }
//     printf("The stack is not empty\n");
//     return 0;
// }








// //funtion to push in a stack
// #include <stdio.h>
// #include <stdlib.h>
// struct stack{
//     public:
//     int size;
//     int top;
//     int *arr;
// };
// int isfull(struct stack* ptr){
//     if(ptr->top==ptr->size-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// void push(struct stack*ptr,int val){
//     if(isfull(ptr)){
//         printf("Stack overflow\n");
//     }
//     else{ptr->top++;
//     ptr->arr[ptr->top]=val;
//     }
// }
// void traversal(struct stack*ptr){
//     if(ptr->top==-1){
//         printf("The stack is empty\n");
//     }
//     else{
//         for(int i=0;i<=ptr->top;i++){
//             printf("%d\t",ptr->arr[i]);
//         }
//     }
// }
// int main(){
//     stack *s=(struct stack*)malloc(sizeof(struct stack));
//     s->size=80;
//     s->top=-1;
//     s->arr=(int*)malloc(s->size*sizeof(int));

//     s->top++;
//     s->arr[0]=7;

//     s->top++;
//     s->arr[1]=5;

//     s->top++;
//     s->arr[2]=4;

//     s->top++;
//     s->arr[3]=2;

//     int val;
//     if(isfull(s)){
//         printf("Stack over flow\n");
//     }
//     else{
//         printf("Enter the value you wanna add: ");
//         scanf("%d",&val);
//     }
//     push(s,val);
//     traversal(s);

// }







// //funtion to pop in a stack
// #include <stdio.h>
// #include <stdlib.h>
// struct stack{
//     public:
//     int size;
//     int top;
//     int *arr;
// };
// int isempty(struct stack* ptr){
//     if(ptr->top==-1){
//         return 1;
//     }
//     return 0;
// }
// void pop(struct stack*ptr){
//     if(isempty(ptr)){
//         printf("Nothing to pop\n");
//     }
//     else{
//         printf("Poping %d from the stack\n",ptr->arr[ptr->top]);
//         ptr->top--;
//     }
// }
// void traversal(struct stack*ptr){
//     if(ptr->top==-1){
//         printf("The stack is empty\n");
//     }
//     else{
//         for(int i=0;i<=ptr->top;i++){
//             printf("%d\t",ptr->arr[i]);
//         }
//     }
// }
// int main(){
//     stack *s=(struct stack*)malloc(sizeof(struct stack));
//     s->size=80;
//     s->top=-1;
//     s->arr=(int*)malloc(s->size*sizeof(int));

//     s->top++;
//     s->arr[0]=7;

//     s->top++;
//     s->arr[1]=5;

//     s->top++;
//     s->arr[2]=4;

//     s->top++;
//     s->arr[3]=2;

//     if(isempty(s)){
//         printf("Stack over flow\n");
//     }
//     else{
//         pop(s);
//     }
//     traversal(s);

// }






// //funciton to peek at a specific position in the stack
// #include <stdio.h>
// #include <stdlib.h>
// struct stack{
//         int size;
//     int top;
//     int *arr;
// };
// int isempty(struct stack* ptr){
//     if(ptr->top==-1){
//         return 1;
//     }
//     return 0;
// }
// int peek(struct stack*ptr,int i){
//     if(ptr->top==-1){
//         printf("The stack is empty\n");
//         return 0;
//     }
//     int p;
//     p=ptr->top-i+1;
//     printf("%d is the value at position %d",ptr->arr[p],i);
// }
// int main(){
//     struct stack *s=(struct stack*)malloc(sizeof(struct stack));
//     s->size=80;
//     s->top=-1;
//     s->arr=(int*)malloc(s->size*sizeof(int));

//     s->top++;
//     s->arr[0]=7;

//     s->top++;
//     s->arr[1]=5;

//     s->top++;
//     s->arr[2]=4;

//     s->top++;
//     s->arr[3]=2;
//     int p;
//     printf("Enter the position of the stack: ");
//     scanf("%d",&p);
//     peek(s,p);
// }







// //funciton to peek at multiple positions in the stack
// #include <stdio.h>
// #include <stdlib.h>
// struct stack{
//     int size;
//     int top;
//     int *arr;
// };
// int isempty(struct stack* ptr){
//     if(ptr->top==-1){
//         return 1;
//     }
//     return 0;
// }
// int peek(struct stack*ptr,int i[3]){
//     if(ptr->top==-1){
//         printf("The stack is empty\n");
//         return 0;
//     }
//     for(int j=0;j<3;j++){
//     int p;
//     p=ptr->top-i[j]+1;
//     printf("%d is the value at position %d\n",ptr->arr[p],i[j]);
//     }
// }
// int main(){
//     struct stack *s=(struct stack*)malloc(sizeof(struct stack));
//     s->size=80;
//     s->top=-1;
//     s->arr=(int*)malloc(s->size*sizeof(int));

//     s->top++;
//     s->arr[0]=7;

//     s->top++;
//     s->arr[1]=5;

//     s->top++;
//     s->arr[2]=4;

//     s->top++;
//     s->arr[3]=2;
//     int p[3];
//     printf("Enter the position of the stack: ");
//     for(int i=0;i<3;i++){
//         scanf("%d",&p[i]);
//     }
//     peek(s,p);
// }






// //funciton to peek at top and bottum positions in the stack
// #include <stdio.h>
// #include <stdlib.h>
// struct stack{
//     int size;
//     int top;
//     int *arr;
// };
// int isempty(struct stack* ptr){
//     if(ptr->top==-1){
//         return 1;
//     }
//     return 0;
// }
// int stacktop(struct stack*ptr){
//     printf("The stack top is %d\n",ptr->arr[ptr->top]);
// }
// int stackbottum(struct stack*ptr){
//     printf("The stack top is %d\n",ptr->arr[0]);
// }
// int main(){
//     struct stack *s=(struct stack*)malloc(sizeof(struct stack));
//     s->size=80;
//     s->top=-1;
//     s->arr=(int*)malloc(s->size*sizeof(int));

//     s->top++;
//     s->arr[0]=7;

//     s->top++;
//     s->arr[1]=5;

//     s->top++;
//     s->arr[2]=4;

//     s->top++;
//     s->arr[3]=2;
//     stacktop(s);
//     stackbottum(s);
// }







// //Trying to implement stack using linked list
// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Stack {
//     struct Node* top;
// };

// int isEmpty(struct Stack* s) {
//     return s->top == NULL;              // if the == is 1 then is empty if not then its not empty 
// }

// void push(struct Stack* s, int value) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     if (!newNode) {
//         printf("Stack overflow!\n");
//         return;
//     }
//     newNode->data = value;
//     newNode->next = s->top;              
//     s->top = newNode;
// } 
// int pop(struct Stack* s) {              
//     if (isEmpty(s)) {
//         printf("Stack underflow!\n");
//         return -1;
//     }
//     struct Node* temp = s->top;
//     int popped = temp->data;
//     s->top = temp->next;
//     free(temp);
//     return popped;
// }

// int peek(struct Stack* s) {
//     if (isEmpty(s)) {
//         printf("Stack is empty!\n");
//         return -1;
//     }
//     return s->top->data;
// }

// void display(struct Stack* s) {
//     struct Node* ptr = s->top;
//     printf("Stack contents:\n");
//     while (ptr != NULL) {
//         printf("%d -> ", ptr->data);
//         ptr = ptr->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     struct Stack s;
//     s.top = NULL;

//     push(&s, 10);
//     push(&s, 20);
//     push(&s, 30);

//     display(&s);

//     printf("Top element: %d\n", peek(&s));

//     printf("Popped element: %d\n", pop(&s));
//     display(&s);

//     printf("Popped element: %d\n", pop(&s));
//     display(&s);

//     printf("Popped element: %d\n", pop(&s));
//     display(&s);

//     if (isEmpty(&s)) {
//         printf("Stack is empty.\n");
//     } else {
//         printf("Stack is not empty.\n");
//     }

//     return 0;
// }









// //programme for traversal, is empty , is full, push, pop 
// #include<stdio.h>
// #include<stdlib.h>
 
// struct Node{
//     int data;
//     struct Node * next;
// };
 
// struct Node* top = NULL;
 
// void linkedListTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element: %d\n", ptr->data);
//         ptr = ptr->next; 
//     }
// }
 
// int isEmpty(struct Node* top){
//     if (top==NULL){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
 
// int isFull(struct Node* top){
//     struct Node* p = (struct Node*)malloc(sizeof(struct Node));
//     if(p==NULL){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
 
// struct Node* push(struct Node* top, int x){
//     if(isFull(top)){
//         printf("Stack Overflow\n");
//     }
//     else{
//         struct Node* n = (struct Node*) malloc(sizeof(struct Node));
//         n->data = x;
//         n->next = top;
//         top = n;
//         return top;
//     }
// }
 
// int pop(struct Node* tp){
//     if(isEmpty(tp)){
//         printf("Stack Underflow\n");
//     }
//     else{
//         struct Node* n = tp;
//         top = (tp)->next;
//         int x = n->data;
//         free(n);
//         return x; 
//     }
// }

// int main(){
//     top = push(top, 78);
//     top = push(top, 7);
//     top = push(top, 8);
//     top = push(top,69);
    
//     // linkedListTraversal(top);
 
//     int element = pop(top); 
//     printf("Popped element is %d\n", element);
//     linkedListTraversal(top);
//     peek(top,2);
//     return 0;
// }







// #include<stdio.h>
// #include<stdlib.h>
// struct Node{
//     int data;
//     struct Node * next;
// };
 
// struct Node* top = NULL;

// void linkedListTraversal(struct Node*top){
//     struct Node*ptr=top;
//     while(ptr!=NULL){
//         printf("%d\t",ptr->data);
//         ptr=ptr->next;
//     }
//     printf("\n");
// }
// int isFull(struct Node*top){
//     struct Node*p=(struct Node*) malloc(sizeof(struct Node));
//     if(p==NULL){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// struct Node* push(struct Node* top, int x){
//     if(isFull(top)){
//         printf("Stack Overflow\n");
//     }
//     else{
//         struct Node* n = (struct Node*) malloc(sizeof(struct Node));
//         n->data = x;
//         n->next = top;
//         top = n;
//         return top;
//     }
// }
// void peek(struct Node*top,int index){
//     struct Node*ptr=top;
//     for(int i=0;i<index-1;i++){
//         ptr=ptr->next;
//     }
//     printf("The value at %d position in the stack is %d\n",index,ptr->data);
// }
// void stacktop(struct Node*top){
//     printf("%d is the value at the top of the stack\n",top->data);
// }
// void stackbottum(struct Node*top){
//     struct Node*ptr=top;
//     while(ptr->next!=NULL){
//         ptr=ptr->next;
//     }
//     printf("%d is the value at the bottum of the stack\n",ptr->data);
// }
// int main(){
//     top = push(top, 78);
//     top = push(top, 7);
//     top = push(top, 8);
//     top = push(top,69);
    
//     linkedListTraversal(top);
//     peek(top,2);
//     stacktop(top);
//     stackbottum(top);
//     return 0;
// }






// Paranthesis Matching





// // Paranthesis Matching programme
// #include <stdio.h>
// #include <stdlib.h>
// struct stack
// {
//     int size;
//     int top;
//     char *arr;
// };
// int isempty(struct stack *ptr)
// {
//     if (ptr->top == -1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int isFull(struct stack *ptr)
// {
//     if (ptr->top == ptr->size - 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// void push(struct stack *ptr, char val)
// {
//     if (isFull(ptr))
//     {
//         printf("Stack Overflow\n");
//     }
//     else
//     {
//         ptr->top++;
//         ptr->arr[ptr->top] = val;
//     }
// }
// char pop(struct stack *tp)
// {
//     if (isempty(tp))
//     {
//         printf("Stack Underflow\n");
//         return '\0';
//     }
//     else
//     {
//         char val = tp->arr[tp->top];
//         tp->top--;
//         // free(tp->arr[tp->top]);
//         return val;
//     }
// }
// int is_paranthesis_matching(char *exp)
// {
//     // create and initialize an array
//     struct stack *sp;
//     sp = (struct stack *)malloc(sizeof(struct stack));
//     sp->size = 100;
//     sp->top = -1;
//     sp->arr = (char *)malloc(sp->size * sizeof(char));
//     char x;

//     for (int i = 0; exp[i] != '\0'; i++)
//     {
//         if (exp[i] == '(')
//         {
//             push(sp, '(');
//         }
//         else if (exp[i] == ')')
//         {
//             if (isempty(sp))
//             {
//                 return 0;
//             }
//             x = pop(sp);
//             if (x != '(')
//             {
//                 return 0;
//             }
//         }
//         if (exp[i] == '[')
//         {
//             push(sp, '[');
//         }
//         else if (exp[i] == ']')
//         {
//             if (isempty(sp))
//             {
//                 return 0;
//             }
//             x = pop(sp);
//             if (x != '[')
//             {
//                 return 0;
//             }
//         }
//         if (exp[i] == '{')
//         {
//             push(sp, '{');
//         }
//         else if (exp[i] == '}')
//         {
//             if (isempty(sp))
//             {
//                 return 0;
//             }
//             x = pop(sp);
//             if (x != '{')
//             {
//                 return 0;
//             }
//         }
//     }
//     if (isempty(sp))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     char exp[] = "{8}*[9]";

//     if (is_paranthesis_matching(exp))
//     {
//         printf("The Parenthesis is balanced \n");
//         return 0;
//     }
//     printf("The Parenthesis is not balanced ");
//     return 0;
// }






// // Paranthesis Matching programme
// #include <stdio.h>
// #include <stdlib.h>
// struct stack
// {
//     int size;
//     int top;
//     char *arr;
// };
// int isempty(struct stack *ptr)
// {
//     if (ptr->top == -1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int isFull(struct stack *ptr)
// {
//     if (ptr->top == ptr->size - 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// void push(struct stack *ptr, char val)
// {
//     if (isFull(ptr))
//     {
//         printf("Stack Overflow\n");
//     }
//     else
//     {
//         ptr->top++;
//         ptr->arr[ptr->top] = val;
//     }
// }
// char pop(struct stack *tp)
// {
//     if (isempty(tp))
//     {
//         printf("Stack Underflow\n");
//         return '\0';
//     }
//     else
//     {
//         char val = tp->arr[tp->top];
//         tp->top--;
//         // free(tp->arr[tp->top]);
//         return val;
//     }
// }
// int is_paranthesis_matching(char *exp)
// {
//     // create and initialize an array
//     struct stack *sp;
//     sp = (struct stack *)malloc(sizeof(struct stack));
//     sp->size = 100;
//     sp->top = -1;
//     sp->arr = (char *)malloc(sp->size * sizeof(char));
//     char x;

//     for (int i = 0; exp[i] != '\0'; i++)
//     {
//         if (exp[i] == '(')
//         {
//             push(sp, '(');
//         }
//         else if (exp[i] == ')')
//         {
//             if (isempty(sp))
//             {
//                 return 0;
//             }
//             x = pop(sp);
//             if (x != '(')
//             {
//                 return 0;
//             }
//         }
//     if (isempty(sp))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// }
// int main()
// {
//     char exp[] = "{8}*[9]";

//     if (is_paranthesis_matching(exp))
//     {
//         printf("The Parenthesis is balanced \n");
//         return 0;
//     }
//     printf("The Parenthesis is not balanced ");
//     return 0;
// }








// // Paranthesis Matching programme
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// struct stack
// {
//     int size;
//     int top;
//     char *arr;
//     int prec;
// };
// int isempty(struct stack *ptr)
// {
//     if (ptr->top == -1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int isFull(struct stack *ptr)
// {
//     if (ptr->top == ptr->size - 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// void push(struct stack *ptr, char val)
// {
//     if (isFull(ptr))
//     {
//         printf("Stack Overflow\n");
//     }
//     else
//     {
//         ptr->top++;
//         ptr->arr[ptr->top] = val;
//     }
// }
// char pop(struct stack *tp)
// {
//     if (isempty(tp))
//     {
//         printf("Stack Underflow\n");
//         return '\0';
//     }
//     else
//     {
//         char val = tp->arr[tp->top];
//         tp->top--;
//         // free(tp->arr[tp->top]);
//         return val;
//     }
// }
// int stacktop(struct stack*sp){
//     return sp->arr[sp->top];
// }
// int isOperator(char ch){
//     if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int precendence(char ch){
//     if(ch=='*'||ch=='/'){
//         return 3;
//     }
//     else if(ch=='+'||ch=='-'){
//         return 2;
//     }
//     else{
//         return 0;
//     }
// }
// char * infixtopostfix(char*infix){
//     struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
//     sp->size=100;
//     sp->top=-1; 
//     sp->arr=(char*) malloc(sp->size*sizeof(char));
//     char * postfix=(char*) malloc(strlen(infix)+1*sizeof(char));
//     int i=0;
//     int j=0;
//     while(infix[i]!='\0'){
//         if(!isOperator(infix[i])){
//             postfix[j]=infix[i];
//             i++;
//             j++;
//         }
//         else{
//             if(precendence(infix[i])>precendence(stacktop(sp))){
//                 push(sp,infix[i]);
//                 i++;
//             }
//             else{
//                 postfix[j]=pop(sp);
//                 j++;
//             }
//         }
//     }
//     while(!isempty(sp)){
//         postfix[j]=pop(sp);
//         j++;
//     }
//     postfix[j]='\0';
//     return postfix;
// }
// int main()
// {
//     char*infix = "a-b/t*6";
//     printf("Postfix to %s\n",infixtopostfix(infix));
//     return 0;
// }





// //###QUEUE###





// //This is the code of all the basic functions in queue
// #include <stdio.h>
// #include <stdlib.h>
// struct queue{
//     int size;
//     int f;
//     int r;
//     int *arr;
// };
// void traversal(struct queue*q){
//     for(int i=q->f+1;i<=q->r;i++){
//         printf("%d\t",q->arr[i]);
//     }
// }
// int isfull(struct queue *q){
//     if(q->r==q->size-1){
//         return 1;
//     }
//     return 0;
// }
// int isempty(struct queue *q){
//     if(q->f==q->r){
//         return 1;
//     }
//     return 0;
// }
// int enqueue(struct queue *q,int val){
//     if(isfull(q)){
//         printf("Queue Overflow\n");
//     }
//     else{
//     q->r++;
//     q->arr[q->r]=val;
//     }
//     return q;
// }
// void dequeue(struct queue *q){
//     int a=-1;
//     if(isempty(q)){
//         printf("Queue underflow\n");
//     }
//     else{
//     q->f++;
//     a=q->arr[q->f];
//     }
//     printf("Dequed element %d\n",a);
// }
// int main(){
//     struct queue q;
//     q.size=100;
//     q.r=q.f=-1;
//     q.arr=(int *)malloc(q.size*sizeof(int ));
//     enqueue(&q,12);
//     enqueue(&q,15);
//     traversal(&q);
//     dequeue(&q);
//     traversal(&q);
//     return 0;
// }






// ###CIRCULAR QUEUE

// A circular queue is a type of queue where the last element is connected to the first element,
// forming a circle. This allows the queue to be implemented using a single array, and the
// enqueue and dequeue operations can be performed efficiently.





// //This is the code of all the basic functions in cicularqueue
// #include <stdio.h>
// #include <stdlib.h>
// struct circularqueue{
//     int size;
//     int f;
//     int r;
//     int *arr;
// }; 
// void traversal(struct circularqueue*q){
//     for(int i=q->f+1;i<=q->r;i++){
//         printf("%d\t",q->arr[i]);
//     }
// }
// int isfull(struct circularqueue *q){
//     if((q->r+1)%q->size==q->f){                     // r+1 is done since we are looking for the next positon in the queue
//         return 1;
//     }
//     return 0;
// }
// int isempty(struct circularqueue *q){
//     if(q->r==q->f){
//         return 1;
//     }
//     return 0;
// }
// int enqueue(struct circularqueue *q,int val){
//     if(isfull(q)){
//         printf("Queue Overflow\n");
//     }
//     else{
//     q->r=(q->r+1)%q->size;
//     q->arr[q->r]=val;
//     }
//     return q;
// }
// void dequeue(struct circularqueue *q){
//     int a=-1;
//     if(isempty(q)){
//         printf("Queue underflow\n");
//     }
//     else{
//     q->f=(q->f+1)%q->size;
//     a=q->arr[q->f];
//     }
//     printf("Dequed element %d\n",a);
// }
// int main(){
//     struct circularqueue q;
//     q.size=100;
//     q.r=q.f=0;
//     q.arr=(int *)malloc(q.size*sizeof(int ));
//     enqueue(&q,12);
//     enqueue(&q,15);
//     traversal(&q);
//     dequeue(&q);
//     traversal(&q);
//     return 0;
// }






// //###QUEUE Using linked list






// //This is the code of all the basic functions in queue using linked list
// #include <stdio.h>
// #include <stdlib.h>
// struct queue{
//     int data;
//     struct queue*next;
// };
// struct queue*f=NULL;
// struct queue*r=NULL;
// void traversal(struct queue*ptr){
//     // struct queue*n=(struct queue*)malloc(sizeof(struct queue));
//     while(ptr!=NULL){
//         printf("%d\t",ptr->data);
//         ptr = ptr->next;
//     }
//     printf("\n");
// }
// struct queue* enqueue(int val){
//     struct queue* ptr= (struct queue*)malloc(sizeof (struct queue) );
//     // struct queue *p=q;
//     if(ptr==NULL){           // if the malloc function fails to allocate memory to the linked list then this condition is used to avoid infinite loop
//         printf("Queue Overflow\n");
//         return 0;
//     }
//     ptr->data=val;
//     if(r==NULL){             // if the new node of the queue(ptr) is the first element of the queue then this condition is used
//         r=ptr;
//         f=ptr;
//     }
//     ptr->next=NULL;
//     r->next=ptr;
//     r=ptr;
// }
// void dequeue(){
//     if(f==NULL){
//         printf("Queue underflow\n");
//         return;
//     }
//     struct queue*t=f;
//     f=f->next;
//     printf("dequed %d\n",t->data);
//     free(t);
// }
// int main(){
//     enqueue(12);
//     enqueue(15);
//     enqueue(13);
//     traversal(f);
//     dequeue();
//     traversal(f);
// }






//###DOUBLE-ENDED Queue






// //This is the code of all the basic functions in double ended queue
// #include <stdio.h>
// #include <stdlib.h>
// struct queue{
//     int size;
//     int f;
//     int r;
//     int *arr;
// }; 
// void traversal(struct queue*q){
//     printf("Traversal\n");
//     for(int i=q->f+1;i<=q->r;i++){
//         printf("%d\t",q->arr[i]);
//     }
//     printf("\n");
// }
// int isfull(struct queue *q){
//     if(q->r==q->size-1){
//         return 1;
//     }
//     return 0;
// }
// int isempty(struct queue *q){
//     if(q->f==q->r){
//         return 1;
//     }
//     return 0;
// }
// void enqueue_r(struct queue *q,int val){
//     if(isfull(q)){
//         printf("Queue Overflow\n");
//     }
//     else{
//     q->r++;
//     q->arr[q->r]=val;
//     }
// }
// void dequeue_f(struct queue *q){
//     int a=-1;
//     if(isempty(q)){
//         printf("Queue underflow\n");
//     }
//     else{
//     a=q->arr[q->f+1];
//     q->f++;
//     }
//     printf("\nDequed element %d\n",a);
// }
// void dequeue_r(struct queue*q){
//     if(isempty(q)){
//         printf("queue underflow\n");
//     }
//     printf("dequed element %d\n",q->arr[q->r]);
//     q->r--;
// }
// void enqueue_f(struct queue*q,int val){
//     if(isfull(q)){
//         printf("queue Overflow");
//         return 0;
//     }
//     q->arr[q->f]=val;
//     q->f--;
// }
// int main(){
//     struct queue q;
//     q.size=100;
//     q.r=q.f=-1;          
//     q.arr=(int *)malloc(q.size*sizeof(int ));
//     enqueue_r(&q,12);
//     enqueue_r(&q,15);
//     enqueue_f(&q,69);
//     traversal(&q);
//     dequeue_f(&q);
//     dequeue_r(&q);
//     traversal(&q);
//     enqueue_f(&q,69);
//     dequeue_f(&q);
//     enqueue_r(&q,12);
//     enqueue_r(&q,15);
//     traversal(&q);
//     dequeue_r;
//     traversal(&q);
//     return 0;
// }






// ###searching alorigthms 






// //bubble sort
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of terms in the array");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the numbers : ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Unsorted array is as follows...\n");
//     for(int a=0;a<n;a++){
//         printf("%d\t",arr[a]);
//     }
//     int temp;
//     for(int j=0;j<n;j++){
//         for(int k=0;k<n-j-1;k++){
//             if(arr[k]>arr[k+1]){
//                 temp=arr[k];
//                 arr[k]=arr[k+1];
//                 arr[k+1]=temp;
//             }
//         }
//     }
//     printf("\n");
//     printf("Sorted array is as follows...\n");
//     for(int a=0;a<n;a++){
//         printf("%d\t",arr[a]);
//     }
//     return 0;
// }







// //insertion sort(mine)
// #include <stdio.h>
// void print_arr(int arr[],int n){
//     printf("\nArray: ");
//         for(int a=0;a<n;a++){
//         printf("%d\t",arr[a]);
//     }
// }
// int insertion_sort(int arr[],int n){
//     int key,j;
//     for( int i=0;i<n-1;i++){
//         key=arr[i];
//         j=i-1;
//         while(j>=0&&arr[j]>key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//     }
// }
// int main(){
//     int arr[]={7,1,4,36,4,69};
//     int n=6;
//     print_arr(arr,n);
//     insertion_sort(arr,n);
//     print_arr(arr,n);
//     return 0;
// }







// //insertion sort(code with harry)
// #include<stdio.h>
// void printArray(int* A, int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }

// void insertionSort(int *A, int n){
//     int key, j;
//     // Loop for passes
//     for (int i = 1; i < n; i++)
//     {
//         key = A[i];
//         j = i-1;
//         // Loop for each pass
//         while(j>=0 && A[j] > key){
//             A[j+1] = A[j];
//             j--;
//         }
//         A[j+1] = key;
//     }
// }

// int main(){
//    // -1   0    1   2   3   4   5
//    //      12,| 54, 65, 07, 23, 09 --> i=1, key=54, j=0
//    //      12,| 54, 65, 07, 23, 09 --> 1st pass done (i=1)!

//    //      12, 54,| 65, 07, 23, 09 --> i=2, key=65, j=1
//    //      12, 54,| 65, 07, 23, 09 --> 2nd pass done (i=2)!

//    //      12, 54, 65,| 07, 23, 09 --> i=3, key=7, j=2
//    //      12, 54, 65,| 65, 23, 09 --> i=3, key=7, j=1
//    //      12, 54, 54,| 65, 23, 09 --> i=3, key=7, j=0
//    //      12, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1
//    //      07, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1--> 3rd pass done (i=3)!

//    // Fast forwarding and 4th and 5th pass will give:
//    //      07, 12, 54, 65,| 23, 09 --> i=4, key=23, j=3
//    //      07, 12, 23, 54,| 65, 09 --> After the 4th pass

//    //      07, 12, 23, 54, 65,| 09 --> i=5, key=09, j=4
//    //      07, 09, 12, 23, 54, 65| --> After the 5th pass 
    
//     int A[] = {12, 54, 65, 7, 23, 9};
//     int n = 6;
//     printArray(A, n);
//     insertionSort(A, n);
//     printArray(A, n);
//     return 0;
// }





//##Selection sort algorithm





////selection sort algo(mine)
// #include <stdio.h>
// void scan(int arr[],int n){
//     printf("Enter the elements of the array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
// }
// void print(int arr[],int n){
//     printf("sorted array...\n");
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
// }
// void selection_sort(int arr[],int n){
//     int indexmin,temp;
//     for(int i=0;i<n+1;i++){
//         indexmin=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[indexmin]){
//                 indexmin=j;
//             }
//         }
//         temp=arr[indexmin];
//         arr[indexmin]=arr[i];
//         arr[i]=temp;
//     }
// }
// int main(){
//     printf("Enter the number of elements in the array: ");
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     scan(arr,n);
//     selection_sort(arr,n);
//     print(arr,n);
//     return 0;
// }





// //selesction sort(code with harry)
// #include<stdio.h>
// void printArray(int* A, int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }

// void selectionSort(int *A, int n){
//     int indexOfMin, temp;
//     printf("Running Selection sort...\n");
//     for (int i = 0; i < n-1; i++)
//     {
//         indexOfMin = i;
//         for (int j = i+1; j < n; j++)
//         {
//             if(A[j] < A[indexOfMin]){
//                 indexOfMin = j;
//             }
//         }
//         // Swap A[i] and A[indexOfMin]
//         temp = A[i];
//         A[i] = A[indexOfMin];
//         A[indexOfMin] = temp;
//     }
// }

// int main(){
//     // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
//     //  00  01  02  03  04
//     // |03, 05, 02, 13, 12

//     // After first pass
//     //  00  01  02  03  04
//     //  02,|05, 03, 13, 12

//     // After second pass
//     // 00  01  02  03  04
//     // 02, 03,|05, 13, 12

//     // After third pass
//     // 00  01  02  03  04
//     // 02, 03, 05,|13, 12

//     // After fourth pass
//     // 00  01  02  03  04
//     // 02, 03, 05, 12,|13


//     int A[] = {3, 5, 2, 13, 12};
//     int n = 5;
//     printArray(A, n);
//     selectionSort(A, n);
//     printArray(A, n);

//     return 0;
// }





//QUICK SORT ALGORITHIM 





// //Quick sort code(mine)
// #include <stdio.h>
// void scan(int arr[],int n){
//     printf("Enter the elements of the array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
// }
// void print(int arr[],int n){
//     printf("sorted array...\n");
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
// }
// int partition( int arr[],int low,int high){
//     int pivot =arr[low];
//     int i = low+1;
//     int j=high;
//     int temp;
//     while(i<=j){
//     while(i<=high&&arr[i]<=pivot){
//         i++;
//     }

//     while(j>=low&&arr[j]>pivot){
//         j--;
//     }
//     if(i<j){
//         temp=arr[j];
//         arr[j]=arr[i];
//         arr[i]=temp;
//     }
// }while(i<j);
//         //swap arr[low]and arr[j]
//         temp=arr[j];
//         arr[j]=arr[low];
//         arr[low]=temp;
//         return j;
// }
// void Quick_sort(int arr[],int low,int high){
//     int partitionindex;//index of pivot after partition 

//     if(low<high){
//     partitionindex= partition(arr,low,high);
//     Quick_sort(arr,low,partitionindex-1);//sort left subarray
//     Quick_sort(arr,partitionindex+1,high);//sort right subarray
//     }
// }
// int main(){
//     printf("Enter the number of elements in the array: ");
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     scan(arr,n);
//     Quick_sort(arr,0,n-1);
//     print(arr,n);
//     return 0;
// }





// //Quick sort algo(code with harry)
// #include <stdio.h>
// void printArray(int *A, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }

// int partition(int A[], int low, int high)
// {
//     int pivot = A[low];
//     int i = low + 1;
//     int j = high;
//     int temp;

//     do
//     {
//         while (A[i] <= pivot)
//         {
//             i++;
//         }

//         while (A[j] > pivot)
//         {
//             j--;
//         }

//         if (i < j)
//         {
//             temp = A[i];
//             A[i] = A[j];
//             A[j] = temp;
//         }
//     } while (i < j);

//     // Swap A[low] and A[j]
//     temp = A[low];
//     A[low] = A[j];
//     A[j] = temp;
//     return j;
// }

// void quickSort(int A[], int low, int high)
// {
//     int partitionIndex; // Index of pivot after partition

//     if (low < high)
//     {
//         partitionIndex = partition(A, low, high); 
//         quickSort(A, low, partitionIndex - 1);  // sort left subarray 
//         quickSort(A, partitionIndex + 1, high); // sort right subarray
//     }
// }

// int main()
// {
//     //int A[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
//     int A[] = {9, 4, 4, 8, 7, 5, 6};
//     // 3, 5, 2, 13, 12, 3, 2, 13, 45
//     // 3, 2, 2, 13i, 12, 3j, 5, 13, 45
//     // 3, 2, 2, 3j, 12i, 13, 5, 13, 45 --> first call to partition returns 3
//     int n = 9;
//     n =7;
//     printArray(A, n);
//     quickSort(A, 0, n - 1);
//     printArray(A, n);
//     return 0;
// }





//Mergesort Aglorithm





//Mergesort algorithm (mine)

// #include <stdio.h>
// void scan(int arr[],int n){
//     printf("Enter the elements of the array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
// }
// void print(int arr[],int n){
//     printf("sorted array...\n");
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
// }
// void Merge(int arr[],int mid,int low,int high){
//     int i=low;
//     int b[100];
//     int j=mid+1;
//     int k=low;
//     while(i<=mid&&j<=high){
//         if(arr[i]<arr[j]){
//             b[k]=arr[i];
//             i++;
//             k++;
//         }
//         else{
//             b[k]=arr[j];
//             j++;
//             k++;
//         }
//     }
//     while(i<=mid){
//     b[k]=arr[i];
//     i++;
//     k++;      
//     }
//     while(j<=high){
//     b[k]=arr[j];
//     j++;
//     k++;
//     }
//     for(int i=low;i<=high;i++){
//         arr[i]=b[i];
//     }
// }
// void Merge_sort(int arr[],int low,int high){
//     int mid;
//     if(low<high){
//         mid=(high+low)/2;
//         Merge_sort(arr,low,mid);
//         Merge_sort(arr,mid+1,high);
//         Merge(arr,mid,low,high);
//     }
// }
// int main(){
//     printf("Enter the number of elements in the array: ");
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     scan(arr,n);
//     Merge_sort(arr,0,n-1);
//     print(arr,n);
//     return 0;
// }






// //Mergesort algorithm (code with harry)
// #include <stdio.h>
// void printArray(int *A, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }

// void merge(int A[], int mid, int low, int high)
// {
//     int i, j, k, B[100];
//     i = low;
//     j = mid + 1;
//     k = low;

//     while (i <= mid && j <= high)
//     {
//         if (A[i] < A[j])
//         {
//             B[k] = A[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             B[k] = A[j];
//             j++;
//             k++;
//         }
//     }
//     while (i <= mid)
//     {
//         B[k] = A[i];
//         k++;
//         i++;
//     }
//     while (j <= high)
//     {
//         B[k] = A[j];
//         k++;
//         j++;
//     }
//     for (int i = low; i <= high; i++)
//     {
//         A[i] = B[i];
//     }
    
// }

// void mergeSort(int A[], int low, int high){
//     int mid; 
//     if(low<high){
//         mid = (low + high) /2;
//         mergeSort(A, low, mid);
//         mergeSort(A, mid+1, high);
//         merge(A, mid, low, high);
//     }
// }

// int main()
// {
//     // int A[] = {9, 14, 4, 8, 7, 5, 6};
//     int A[] = {9, 1, 4, 14, 4, 15, 6};
//     int n = 7;
//     printArray(A, n);
//     mergeSort(A, 0, 6);
//     printArray(A, n);
//     return 0;
// }






//Count sort algorithm






// //Count sort algorithm(mine)
// #include<stdio.h>
// #include<limits.h>
// #include<stdlib.h>
// void printArray(int *A, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }
// int maximum(int a[],int n){
//     int max=0;
//     for(int i=0;i<n;i++){
//         if(max<a[i]){
//             max=a[i];
//         }
//     }
//     return max;
// }
// void countSort(int A[],int n ){
//     int max=maximum(A,n);
//     int*count=(int*) malloc(sizeof(int)*(max+1));
//     for(int i=0;i<max+1;i++){
//         count[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         count[A[i]]++;
//     }
//     int i=0;
//     int j=0;
//     while(i<=max){
//         if(count[i]>0){
//         A[j]=i;
//         count[i]=count[i]-1;
//         j++;
//     }
//     else{
//         i++;
//     }
// }
// }
// int main(){
//     int A[] = {9, 1, 4, 14, 4, 15, 6};
//     int n = 7;
//     printArray(A, n);
//     countSort(A, n);
//     printArray(A, n); 
//     return 0;
// }







// //Count sort algorithm(code with harry)
// #include<stdio.h>
// #include<limits.h>
// #include<stdlib.h>
// void printArray(int *A, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }
// int maximum(int A[], int n){
//     int max = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (max < A[i]){
//             max = A[i];
//         }
//     }
//     return max;
// }
// void countSort(int * A, int n){
//     int i, j;
//     // Find the maximum element in A
//     int max = maximum(A, n); 
//     // Create the count array
//     int* count = (int *) malloc((max+1)*sizeof(int));
//     // Initialize the array elements to 0
//     for (i = 0; i < max+1; i++)
//     {
//         count[i] = 0; 
//     }
//     // Increment the corresponding index in the count array
//     for (i = 0; i < n; i++)
//     {
//         count[A[i]] = count[A[i]] + 1; 
//     }
//     i =0; // counter for count array
//     j =0; // counter for given array A

//     while(i<= max){
//         if(count[i]>0){
//             A[j] = i;
//             count[i] = count[i] - 1;
//             j++;
//         }
//         else{
//             i++;
//         }
//     } 
// }
// int main(){
//     int A[] = {9, 1, 4, 14, 4, 15, 6};
//     int n = 7;
//     printArray(A, n);
//     countSort(A, n);
//     printArray(A, n); 
//     return 0;
// }







// ###\tree data structure








// //preorder traversal in binary tree
// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };
// struct node* createnode(int data){
//     struct node*n;
//     n=(struct node*) malloc(sizeof(struct node));
//     n->data=data;
//     n->left=NULL;
//     n->right=NULL;
//     return n;
// }
// void preorder_traversal(struct node*root){
//     if(root!=NULL){
//         printf("%d\t",root->data);
//         preorder_traversal(root->left);
//         preorder_traversal(root->right);
//     }
// }
// int main(){
//     struct node*p=createnode(12);
//     struct node*p1=createnode(3);
//     struct node*p2=createnode(12);
//     struct node*p3=createnode(4);
//     struct node*p4=createnode(12);
//     struct node*p5=createnode(12);
//     p->left=p1;
//     p->right=p2;
//     p1->right=p3;
//     p1->left=p4;
//     preorder_traversal(p);
//     return 0;
// }






//preorder traversal in binary tree(code with harry)
// #include<stdio.h>
// #include<malloc.h>

// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };

// struct node* createNode(int data){
//     struct node *n; // creating a node pointer
//     n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data; // Setting the data
//     n->left = NULL; // Setting the left and right children to NULL
//     n->right = NULL; // Setting the left and right children to NULL
//     return n; // Finally returning the created node
// }

// void preOrder(struct  node* root){
//     if(root!=NULL){
//         printf("%d ", root->data);
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }

// int main(){
     
//     // Constructing the root node - Using Function (Recommended)
//     struct node *p = createNode(4);
//     struct node *p1 = createNode(1);
//     struct node *p2 = createNode(6);
//     struct node *p3 = createNode(5);
//     struct node *p4 = createNode(2);
//     // Finally The tree looks like this:
//     //      4
//     //     / \
//     //    1   6
//     //   / \
//     //  5   2  

//     // Linking the root node with left and right children
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;

//     preOrder(p);
//     return 0;
// }





// //post order traversal
// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node*left;
//     struct node*right;
// };
// struct node* create_node(int data){
//     struct node* root=(struct node*) malloc(sizeof(struct node));
//     root->data=data;
//     root->left=NULL;
//     root->right=NULL;
//     return root;
// }
// void postorder_traversal(struct node*root){
//     if(root!=NULL){
//         postorder_traversal(root->left);
//         postorder_traversal(root->right);
//         printf("%d\t",root->data);
//     }
// }
// int main(){
//     struct node*p=create_node(12);
//     struct node*p1=create_node(13);
//     struct node*p2=create_node(14);
//     struct node*p3=create_node(15);
//     struct node*p4=create_node(16);
//     p->left=p1;
//     p->right=p2;
//     p1->left=p3;
//     p1->right=p4;
//     postorder_traversal(p);
//     return 0;
// }





// //inorder traversal of binary tree(mine)
// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node*left;
//     struct node*right;
// };
// struct node* createnode(int data){
//     struct node*root=(struct node *) malloc(sizeof(struct node));
//     root->data=data;
//     root->left=NULL;
//     root->right=NULL;
//     return root;
// }
// void inorder_traversal(struct node*root){
//     if(root!=NULL){
//         inorder_traversal(root->left);
//         printf("%d\t",root->data);
//         inorder_traversal(root->right);
//     }
// }
// int main(){
//     struct node*p=createnode(12);
//     struct node*p1=createnode(13);
//     struct node*p2=createnode(14);
//     struct node*p3=createnode(125);
//     struct node*p4=createnode(7);
//     p->left=p1;
//     p->right=p2;
//     p1->right=p3;
//     p1->left=p4;
//     inorder_traversal(p);
//     return 0;
// }







//###Binary search tree###






// //to check if a tree is a binary search tree than we find whether the inorder traversal is in ascending order(code with harry)
// #include<stdio.h>
// #include<malloc.h>

// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };

// struct node* createNode(int data){
//     struct node *n; // creating a node pointer
//     n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data; // Setting the data
//     n->left = NULL; // Setting the left and right children to NULL
//     n->right = NULL; // Setting the left and right children to NULL
//     return n; // Finally returning the created node
// }

// void preOrder(struct  node* root){
//     if(root!=NULL){
//         printf("%d ", root->data);
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }

// void postOrder(struct  node* root){
//     if(root!=NULL){
//         postOrder(root->left);
//         postOrder(root->right);
//         printf("%d ", root->data);
//     }
// }

// void inOrder(struct  node* root){
//     if(root!=NULL){
//         inOrder(root->left);
//         printf("%d ", root->data);
//         inOrder(root->right);
//     }
// }
// int isBST(struct  node* root){
//     static struct node *prev = NULL;//static is used so that the prevoius pointer retains its value accross recursive calls
//     if(root!=NULL){
//         if(!isBST(root->left)){
//             return 0;
//         }
//         if(prev!=NULL && root->data <= prev->data){
//             return 0;
//         }
//         prev = root;
//         return isBST(root->right);
//     }
//     else{ 
//         return 1;
//     }
// }
// int main(){
//     // Constructing the root node - Using Function (Recommended)
//     struct node *p = createNode(5);
//     struct node *p1 = createNode(3);
//     struct node *p2 = createNode(6);
//     struct node *p3 = createNode(1);
//     struct node *p4 = createNode(4);
//     // Finally The tree looks like this:
//     //      5
//     //     / \
//     //    3   6
//     //   / \
//     //  1   4  

//     // Linking the root node with left and right children
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;

//     // preOrder(p);
//     // printf("\n");
//     // postOrder(p); 
//     // printf("\n");
//     inOrder(p);
//     printf("\n");
//     // printf("%d", isBST(p)); 
//     if(isBST(p)){
//         printf("This is a bst" );
//     }
//     else{
//         printf("This is not a bst");
//     }
//     return 0;
// }






//###searching in a binary search tree###







// //searching for an element in binary tree
// #include<stdio.h>
// #include<malloc.h>
// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };
// struct node* createNode(int data){
//     struct node *n; // creating a node pointer
//     n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data; // Setting the data
//     n->left = NULL; // Setting the left and right children to NULL
//     n->right = NULL; // Setting the left and right children to NULL
//     return n; // Finally returning the created node
// }
// struct node* binary_search(struct node*root,int key){//done using iteration not recurssions
//     if(root==NULL){
//         return NULL;
//     }
//     if(root->data==key){
//         return root;
//     }
//     else if(root->data>key){
//         return binary_search(root->left,key);
//     }
//     else{
//         return binary_search(root->right,key);
//     }
// }
// int main(){
//     // Constructing the root node - Using Function (Recommended)
//     struct node *p = createNode(5);
//     struct node *p1 = createNode(3);
//     struct node *p2 = createNode(6);
//     struct node *p3 = createNode(1);
//     struct node *p4 = createNode(4); 

//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;
    
//     struct node*leaf=binary_search(p,1);
//     if(leaf==NULL){
//         printf("The element was not found\n");
//         return 0;
//     }
//     else{
//     printf("Element :%d found\n",leaf->data);
//     return 0;
//     }
// }






// //searching for an element in binary tree in search iteratively(not using recursions)
// #include<stdio.h>
// #include<malloc.h>
// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };
// struct node* createNode(int data){
//     struct node *n; // creating a node pointer
//     n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data; // Setting the data
//     n->left = NULL; // Setting the left and right children to NULL
//     n->right = NULL; // Setting the left and right children to NULL
//     return n; // Finally returning the created node
// }
// struct node* binary_iter(struct node*root,int key){//iterative approach not recurssive
//     while(root!=NULL){
//         if(root->data=key){
//             return root;
//         }
//         else if(root->data>key){
//             root=root->left;
//         }
//         else{
//             root=root->right;
//         }
//     }
// }
// int main(){
//     // Constructing the root node - Using Function (Recommended)
//     struct node *p = createNode(5);
//     struct node *p1 = createNode(3);
//     struct node *p2 = createNode(6);
//     struct node *p3 = createNode(1);
//     struct node *p4 = createNode(4); 

//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;
    
//     struct node*leaf=binary_iter(p,1);
//     if(leaf==NULL){
//         printf("The element was not found\n");
//         return 0;
//     }
//     else{
//     printf("Element :%d found\n",leaf->data);
//     return 0;
//     }
// }






// //this is a code to insert a node into a binary search tree
// #include<stdio.h>
// #include<malloc.h>
// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };
// void inOrder(struct  node* root){
//     if(root!=NULL){
//         inOrder(root->left);
//         printf("%d ", root->data);
//         inOrder(root->right);
//     }
// }
// struct node* createNode(int data){
//     struct node *n; // creating a node pointer
//     n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data; // Setting the data
//     n->left = NULL; // Setting the left and right children to NULL
//     n->right = NULL; // Setting the left and right children to NULL
//     return n; // Finally returning the created node
// }
// void insert(struct node *root, int key){
//    struct node *prev = NULL;
//    while(root!=NULL){
//        prev = root;
//        if(key==root->data){
//            printf("Cannot insert %d, already in BST", key);
//            return;
//        }
//        else if(key<root->data){
//            root = root->left;
//        }
//        else{
//            root = root->right;
//        }
//    }
//    struct node* new = createNode(key);
//    if(key<prev->data){
//        prev->left = new;
//    }
//    else{
//        prev->right = new;
//    }
// }
// int main(){
//     struct node *p = createNode(5);
//     struct node *p1 = createNode(3);
//     struct node *p2 = createNode(6);
//     struct node *p3 = createNode(1);
//     struct node *p4 = createNode(4);
//     // Finally The tree looks like this:
//     //      5
//     //     / \
//     //    3   6
//     //   / \
//     //  1   4  
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;

//     return 0;
// }







//code for deletion in a key






// //full code for deleting a key in the binary tree
// #include<stdio.h>
// #include<malloc.h>
// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };
// struct node* createNode(int data){
//     struct node *n; // creating a node pointer
//     n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data; // Setting the data
//     n->left = NULL; // Setting the left and right children to NULL
//     n->right = NULL; // Setting the left and right children to NULL
//     return n; // Finally returning the created node
// }
// void inOrder(struct  node* root){
//     if(root!=NULL){
//         inOrder(root->left);
//         printf("%d ", root->data);
//         inOrder(root->right);
//     }
// }
// struct node *inOrderPredecessor(struct node* root){
//     root = root->left;
//     while (root->right!=NULL)
//     {
//         root = root->right;
//     }
//     return root;
// }// this makes the programme to deleter the key in the binary tree
// struct node *deleteNode(struct node *root, int value){
//     struct node* iPre;
//     if (root == NULL){
//         return NULL;
//     }
//     if (root->left==NULL&&root->right==NULL){
//         free(root);
//         return NULL;
//     }
//     //searching for the node to be deleted
//     if (value < root->data){
//         root-> left = deleteNode(root->left,value); 
//     }
//     else if (value > root->data){
//         root-> right = deleteNode(root->right,value);
//     }
//     //deletion strategy when the node is found(adjusting pointer to mantain the structure of BST )
//     else{
//         iPre = inOrderPredecessor(root);
//         root->data = iPre->data;
//         root->left = deleteNode(root->left, iPre->data);
//     }
//     return root;
// }
// int main(){
//     // Constructing the root node - Using Function (Recommended)
//     struct node *p = createNode(5);
//     struct node *p1 = createNode(3);
//     struct node *p2 = createNode(6);
//     struct node *p3 = createNode(1);
//     struct node *p4 = createNode(4);
//     // Finally The tree looks like this:
//     //      5
//     //     / \
//     //    3   6
//     //   / \
//     //  1   4  i
//     // Linking the root node with left and right children
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;
//     inOrder(p);
//     printf("\n");
//     deleteNode(p, 3);
//     inOrder(p);
//     return 0;
// } 








// //full code of every function in the binary search tree
// #include<stdio.h>
// #include<malloc.h>
 
// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };
 
// struct node* createNode(int data){
//     struct node *n; // creating a node pointer
//     n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data; // Setting the data
//     n->left = NULL; // Setting the left and right children to NULL
//     n->right = NULL; // Setting the left and right children to NULL
//     return n; // Finally returning the created node
// }

// void preOrder(struct  node* root){
//     if(root!=NULL){
//         printf("%d ", root->data);
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }
 
// void postOrder(struct  node* root){
//     if(root!=NULL){
//         postOrder(root->left);
//         postOrder(root->right);
//         printf("%d ", root->data);
//     }
// }
 
// void inOrder(struct  node* root){
//     if(root!=NULL){
//         inOrder(root->left);
//         printf("%d ", root->data);
//         inOrder(root->right);
//     }
// }
 
// int isBST(struct  node* root){
//     static struct node *prev = NULL;
//     if(root!=NULL){
//         if(!isBST(root->left)){
//             return 0;
//         }
//         if(prev!=NULL && root->data <= prev->data){
//             return 0;
//         }
//         prev = root;
//         return isBST(root->right);
//     }
//     else{
//         return 1;
//     }
// }
 
// struct node * searchIter(struct node* root, int key){
//     while(root!=NULL){
//         if(key == root->data){
//             return root;
//         }
//         else if(key<root->data){
//             root = root->left;
//         }
//         else{
//             root = root->right;
//         }
//     }
//     return NULL;
// }
 
// void insert(struct node *root, int key){
//     struct node *prev = NULL;
//     while(root!=NULL){
//         prev = root;
//         if(key==root->data){
//             printf("Cannot insert %d, already in BST", key);
//             return;
//         }
//         else if(key<root->data){
//             root = root->left;
//         }
//         else{
//             root = root->right;
//         }
//     }
//     struct node* new = createNode(key);
//     if(key<prev->data){
//         prev->left = new;
//     }
//     else{
//         prev->right = new;
//     }
// }

// struct node *inOrderPredecessor(struct node* root){
//     root = root->left;
//     while (root->right!=NULL)
//     {
//         root = root->right;
//     }
//     return root;
// }

// struct node *deleteNode(struct node *root, int value){

//     struct node* iPre;
//     if (root == NULL){
//         return NULL;
//     }
//     if (root->left==NULL&&root->right==NULL){
//         free(root);
//         return NULL;
//     }
//     //searching for the node to be deleted
//     if (value < root->data){
//         root-> left = deleteNode(root->left,value);
//     }
//     else if (value > root->data){
//         root-> right = deleteNode(root->right,value);
//     }
//     //deletion strategy when the node is found
//     else{
//         iPre = inOrderPredecessor(root);
//         root->data = iPre->data;
//         root->left = deleteNode(root->left, iPre->data);
//     }
//     return root;
// }
 
// int main(){
     
//     // Constructing the root node - Using Function (Recommended)
//     struct node *p = createNode(5);
//     struct node *p1 = createNode(3);
//     struct node *p2 = createNode(6);
//     struct node *p3 = createNode(1);
//     struct node *p4 = createNode(4);
//     // Finally The tree looks like this:
//     //      5
//     //     / \
//     //    3   6
//     //   / \
//     //  1   4  
 
//     // Linking the root node with left and right children
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;

//     inOrder(p);
//     printf("\n");
//     deleteNode(p, 3);
//     inOrder(p);'

//     return 0;
// }



// //This programs helps find the maximum possible product of 2 consecutice elements in the array
// #include <stdio.h>

// int maxProduct(int arr[], int n) {
//     int max_prod = arr[0], min_prod = arr[0], result = arr[0];

//     for (int i = 1; i < n; i++) {
//         if (arr[i] < 0) { 
//             int temp = max_prod;
//             max_prod = min_prod;
//             min_prod = temp;
//         }
//         max_prod = (arr[i] > arr[i] * max_prod) ? arr[i] : arr[i] * max_prod;
//         min_prod = (arr[i] < arr[i] * min_prod) ? arr[i] : arr[i] * min_prod;

//         if (max_prod > result) result = max_prod;
//     }
//     return result;
// }
// int main() {
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d",&n);
//     printf("Enter the elements in the arrays: ");
//     int arr[n];
//     for(int g=0;g<n;g++){
//     scanf("%d",&arr[g]);
//     }
//     printf("The maximum possible product of consecutive elements in you array is: %d\n", maxProduct(arr, sizeof(arr) / sizeof(arr[0])));
// }





// #include <stdio.h>
// int main() {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     printf("Your age is also : %d\n", age);
//     return 0;
// }




