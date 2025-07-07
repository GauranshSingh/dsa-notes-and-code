

// // insertion in an array
// #include "stdio.h"
// void insertion(int arr[],int size,int index,int value){
//     for(int i=size-1;i>index;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[index]=value;
// }
// int main(){
//     int arr[15];
//     int a =1;
//     for(int i =0;i<14;i++){
//         arr[i]=a;
//         a++;
//     }
//     insertion(arr,15,8,16);
//     for(int x=0;x<15;x++){
//         printf("%d\n",arr[x]);
//     }
// }












// // this is binarysearch code
// #include <stdio.h>
// int binarysearch(int arr[],int size, int value){
//     int low=0;
//     int high = size-1;
//     int mid=(high+low)/2;
//     while(low<=high){
//     int mid=(high+low)/2;
//     if(arr[mid] == value){
//         return mid;
//     }
//     if(value <arr[mid]){
//         high=mid-1;;
//     }
//     if(value>arr[mid]){
//         low=mid+1;
//     }
//     }
//     return -1;
// }
// int main(){
//     int arr[10];
//     int size = 10;
//     for(int i=0;i<size;i++){
//         arr[i]=i;
//     }
//     int index = binarysearch(arr,size,3);
//     printf("%d",index);
//     return 0;
// }










// //insertion at head and deletion and index
// #include <stdio.h>
// #include <stdlib.h>
// struct Node{
//     int data;
//     struct Node*next;
// };

// void print(struct Node*head){
//     while(head!=NULL){
//         printf("%d\n",head->data);
//         head=head->next;
//     }
// }

// struct Node*deleter_b4_node(struct Node*head, int index){
//     struct Node*p=head;
//     struct Node*q=head->next;
//     for(int i=1;i<index-1;i++){
//         p=p->next;
//         q=q->next;
//     }
//     p->next=q->next;;
//     free(q);
//     return head;
// }
// struct Node* insertion_at_head(struct Node*head,int data_to_b_inserted){
//     struct Node*head_b_inserted;
//     head_b_inserted=(struct Node*)malloc(sizeof(struct Node));
//     head_b_inserted->data=data_to_b_inserted;
//     head_b_inserted->next = head;
//     return head_b_inserted;
// }
// int main(){
//     struct Node*head;
//     struct Node*second;
//     struct Node*third;
//     struct Node*fourth;
//     struct Node*fifth;
    
//     head=(struct Node*)malloc(sizeof(struct Node));
//     second=(struct Node*)malloc(sizeof(struct Node));
//     third=(struct Node*)malloc(sizeof(struct Node));
//     fourth=(struct Node*)malloc(sizeof(struct Node));
//     fifth=(struct Node*)malloc(sizeof(struct Node));

//     head->data = 1;
//     head->next=second;
    
//     second->data = 2;
//     second->next= third;
    
//     third->data = 3;
//     third->next=fourth;
    
//     fourth->data = 4;
//     fourth->next=fifth;

//     fifth->data = 5;
//     fifth->next=NULL;

//     printf("Linked List b4 insertion:\n");
//     print(head);
//     // head=insertion_at_head(head,6);
//     // =deleter_b4_node(head,3);
//     // printf("Linked list after insertion:\n");
//     // printf("Linked list after deletion:\n");
//     print(head);

//     return 0;
// }







// #include <stdio.h>
// #include <stdlib.h>

// struct stack {
//     int size;
//     int top;
//     int *arr;
// };
// int isfull(struct stack*ptr){
//     if(ptr->top==ptr->size-1){
//         return 1;
//     }
//     else{
//         return -1;
//     }
// }
// void push(struct stack *ptr,int val){
//     if(isfull(ptr)==1){
//         printf("stack overflow");
//     }
//     else{
//         ptr->top++;
//         ptr->arr[ptr->top]=val;
//     }
// }
// void display(struct stack *ptr ){
//     for(int i=0;i<=(ptr->top);i++){
//         printf("%d\n",ptr->arr[i]);
//     }
// }
// int main() {
//     struct stack *s = (struct stack *) malloc(sizeof(struct stack));
//     s->size = 80;
//     s->top = -1;
//     s->arr = (int *) malloc(s->size * sizeof(int));

//     s->top++;
//     s->arr[0]=1;

//     s->top++;
//     s->arr[1]=2;

//     s->top++;
//     s->arr[2]=3;

//     s->top++;
//     s->arr[3]=4;

//     s->top++;
//     s->arr[4]=5;

//     push(s,6);

//     display(s);
// }







//### Linked List ###






// // reverse traversal of a singly linked list(correct and simple)
// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node* next;
// };

// void reverse_travers(struct node* ptr) {
//     if (ptr == NULL) {
//         return;
//     }
//     reverse_travers(ptr->next);
//     printf("%d\n", ptr->data);// this will go on till the last element of the linked list in recersions then it will...
//                               // start printing the last element(6) and the function would get over....after this the previous funciton in which 
//                               // the function(5) was called will get over and then 4 3 2 1 function gets over.
// }

// int main() {
//     struct node* head;
//     struct node* second;
//     struct node* third;
//     struct node* fourth;
//     struct node* fifth;
//     struct node* sixth;

//     head = (struct node*)malloc(sizeof(struct node));
//     second = (struct node*)malloc(sizeof(struct node));
//     third = (struct node*)malloc(sizeof(struct node));
//     fourth = (struct node*)malloc(sizeof(struct node));
//     fifth = (struct node*)malloc(sizeof(struct node));
//     sixth = (struct node*)malloc(sizeof(struct node));

//     head->data = 1;
//     head->next = second;

//     second->data = 2;
//     second->next = third;

//     third->data = 3;
//     third->next = fourth;

//     fourth->data = 4;
//     fourth->next = fifth;

//     fifth->data = 5;
//     fifth->next = sixth;

//     sixth->data = 6;
//     sixth->next = NULL;

//     printf("Linked list in reverse:\n");
//     reverse_travers(head);

//     return 0;
// }





//###Stacks - question






// // paranthesis matching question
// #include <stdio.h>
// #include <stdlib.h>
// struct stack {
//     int size;
//     int top;
//     char *arr;
// };
// int isfull(struct stack*ptr){
//     if(ptr->top==ptr->size-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int isempty(struct stack*ptr){
//     if(ptr->top==-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// void push(struct stack *ptr,char val){
//     if(isfull(ptr)==1){
//         printf("maximum brackets limit Exceeded");
//     }
//     else{
//         ptr->top++;
//         ptr->arr[ptr->top]=val;
//     }
// }
// char pull(struct stack *ptr){
//     if(isempty(ptr)==1){
//         return -1;
//     }
//     else{
//         char val=ptr->arr[ptr->top];
//         ptr->top--;
//         return val;
//     }
// }

// int main() {
//     struct stack *s = (struct stack *) malloc(sizeof(struct stack));

//     s->top = -1;


//     int size;
//     printf("Enter the size of the equaiton: ");
//     scanf("%d",&size);

//     char arr[size];
//     s->size=size;
//     s->arr = (char *) malloc(s->size * sizeof(char));
//     printf("\n Enter the equation: ");
//     for(int i=0;i<size;i++){
//         scanf(" %c",&arr[i]);
//     }

//     for(int i=0;i<size;i++){
//         if(arr[i]==')' || arr[i]==']' || arr[i]=='}'||arr[i]=='(' || arr[i]=='[' || arr[i]=='{'){
//         if(arr[i]=='(' || arr[i]=='[' || arr[i]=='{'){
//             push(s,arr[i]);
//         }
//         else if(!isempty(s) && ((arr[i]==')'&& s->arr[s->top]=='(') || (arr[i]==']'&& s->arr[s->top]=='[') || (arr[i]=='}'&& s->arr[s->top]=='{'))){
//             pull(s);
//         }
//         else{
//         printf("\nThe equation is invalid\n");
//         return 0;           
//         }
//     }
//     }

//     if(s->top==-1){
//         printf("\nThe equation is valid\n");
//         return 0;
//     }
//     else{
//         printf("\nThe equation is invalid\n");
//         return 0;
//     }
// }



