

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





// #include <stdio.h>
// #include <stdlib.h>

// struct queue{
//     int size;
//     int f;
//     int r;
//     int *arr;
// };
// int isfull(struct queue* s){
//     if((s->r+1)==s->f){
//         return 1;
//     }
//     return 0;
// }
// void enqueue(struct queue* s,int val){
//     if(isfull(s)){
//         printf("\nQueue is full\n");
//     }
//     else{
//         s->r++;
//         s->arr[s->r]=val;
//     }
// }
// int isempty(struct queue* s){
//     if(s->r==-1){
//         return 1;
//     }
//     return 0;
// }
// void dequeue(struct queue *s){
//     if(isempty(s)){
//         printf("\nQueue is empty\n");
//     }
//     else{
//         s->f++;
//     }
// }
// void traversal(struct queue* s){
//     if(isempty(s)){
//         printf("\nQueue is empty\n");
//     }

//     printf("Queue elements\n");
//     for(int i = s->f;i<s->r;i++){
//         printf("%d\n",s->arr[i]);
//     }
// }
// int main(){
//     struct queue*s;
//     s=(struct queue*)malloc(sizeof(struct queue));
//     s->f=s->r=-1;
//     s->size=100;
//     s->arr=((int*)malloc(sizeof(int)));

//     enqueue(s,1);
//     enqueue(s,2);
//     enqueue(s,3);
//     enqueue(s,4);
//     enqueue(s,5);

//     enqueue(s,6);           // this is dequeued so its not

//     dequeue(s);

//     traversal(s);

//     return 0;
// }





//##circulare queue



// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,3,3,4};
//     int n=5;
//     int arr_n[5]={0};
//     for(int i =0;i<n;i++){
//         for( int j=0;j<5;j++){
//             if(arr[i]==arr[j]){
//             arr_n[i]++;
//             }
//         }
//     }   
//     for(int i =0;i<5;i++){
//         printf("%d",arr_n[i]);
//     }
//     return 0;
// }

































// Searching algorithms







// //Insertion sort algo
// #include <stdio.h>


// void printarr(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d\n",arr[i]);
//     }
// }

// void InsertionSort(int arr[], int n){

//     for (int i=0;i<n;i++){

//         int key = arr[i];
//         int j = i-1;

//         while(j>=0&&key<arr[j]){

//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;

//     }
//     }
// int main(){
//     int arr[9] = {1, 2, 699, 4, 5,12,4,21,191};

//     int n=9;

//     printf("Unsorted Array\n");
//     printarr(arr,9);

//     InsertionSort(arr,9);

//     printf("Sorted Array!!!\n");
//     printarr(arr,9);


//     return 0;
// }












// //Selection sort algo
// #include <stdio.h>


// void printarr(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d\n",arr[i]);
//     }
// }

// void Selection_Sort(int arr[], int n){

//     for (int i=0;i<n;i++){

//         int index_min = i;

//         for(int j=i+1;j<n;j++){                 //remember j= i+1 since i is the index till which the array is sorted
//             if(arr[j]<arr[index_min]){
//                 index_min = j;
//             }
//         }
//         int temp=arr[i];
//         arr[i]=arr[index_min];
//         arr[index_min]=temp;
//         }
//     }
// int main(){
//     int arr[9] = {1, 2, 699, 4, 5,12,4,21,191};

//     int n=9;

//     printf("Unsorted Array\n");
//     printarr(arr,9);

//     Selection_Sort(arr,9);

//     printf("Sorted Array!!!\n");
//     printarr(arr,9);


//     return 0;
// }






//#Selection Sort algorithm 



// void printArray(int *A, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }

// int partition() 


// void quickSort(int arr[], int low , int high){
//     int partition_index;
//     if( low < high){
//         partition_index = partition(arr, low, high);
//         partition(arr,low,partition_index);
//         partition(arr,partition_index+1,high);
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






// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node*left;
//     struct node*right;
// };
// struct node* create_node(int data){
//     struct node* root = (struct node*) malloc(sizeof(struct node));
//     root->data = data;
//     root->left = NULL;
//     root->right = NULL;
//     return root;
// }
// void preorder_traversal(struct node*n){
//     if(n!=NULL){                        // this is to check if the node is null or not b4 printing its data
//     printf("%d\n",n->data);
//     preorder_traversal(n->left);
//     preorder_traversal(n->right);
//     }
// }
// int main(){
//     struct node*p = create_node(14);
//     struct node*p1 = create_node(4);
//     struct node*p3 = create_node(1);
//     struct node*p2 = create_node(17);
//     struct node*p4 = create_node(21);
    
//     p->right=p2;
//     p->left = p1;
//     p1->left = p3;
//     p1->right = p4;

//     preorder_traversal(p);

//     return 0;
// }




// #include <stdio.h>
// int searchmax(int arr[], int size){
//     int max=arr[0]*arr[1];
//     for(int i=0;i<size;i++){
//         if((arr[i]*arr[i+1])>0){
//             max=max+arr[i]*arr[i+1];
//         }
//     }
//     return max;
// }
// int main(){
//     int arr[7]={1,2,3,4,5,-6,27};
//     int max=searchmax(arr,6);
//     printf("Maximum value by adding cosecutive elements in the arr is = %d",max);
//     return 0;
// }






// #include <stdio.h>
// int isPalindrome(int x) {
//     int num = x;    // to save so that I can manipulate the number
//     int s=0;
//     printf("1\n");
//     int div=10;
//         while(num>0){
//         num=num/10;    
//         s++;
//     }
//     printf("1\n");
//     int arr[s];
//         printf("1\n");
//     int i=0;
//         printf("1\n");
//     while(x>0){
//         arr[i]=(x%div)/(div/10);
//         x=x-arr[i]*(div/10);
//         div=div*10;
//         i++;
//     }
//     printf("1\n");
//     for(int j=0;j<i;j++){
//             if(arr[j]!=arr[i-j-1]){
//                 return 0;
//             }
//     }
//     return 1;
//     //x/(div/10)>0// tried this condition in loop before
// }
// int main(){
//     int x=12121;
//     if(isPalindrome(x)){
//         printf("The number is Palindrome");
//     }
//     else{
//         printf("The number ain't Palindrome");
//     }
//     return 0;
// }
















// //simple Code of insertion in Circulat linked list
// #include "stdio.h"
// #include "stdlib.h"
// struct ListNode {
//     int data;
//     struct ListNode *next;
// };
// void linkedlistraversal(struct ListNode*head){
//     struct ListNode*p=head;
//     do{
//         printf("%d\t",p->data);
//         p=p->next;
//     }while(p!=NULL);
//     printf("\n");
// }


// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     struct ListNode *next;
//  * };
//  */
// struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

//     if(list1==NULL && list2==NULL){
//         struct ListNode* non_manipulated_head=NULL;
//         return non_manipulated_head;
//     }

//     struct ListNode* head;
//     struct ListNode* non_manipulated_head;


//     if(list1->data>=list2->data){
//         head = list2;
//         non_manipulated_head = head;
//         list2=list2->next;
//     }
//     else{
//         head=list1;
//         non_manipulated_head=head;
//         list1=list1->next;
//     }

//     while(list1!=NULL&&list2!=NULL){
//         if(list1->data<=list2->data){
//             head->next=list1;
//             list1=list1->next;
//         }
//         else{
//             head->next=list2;
//             list2=list2->next;
//         }
//         head=head->next;
//     }
//     if(list1!=NULL){
//         head->next=list1;
//     }
//     else{
//         head->next=list2;
//     }
//     return non_manipulated_head;
// }





// int main(){
//     struct ListNode*head;
//     struct ListNode*second;
//     struct ListNode*third;
//     struct ListNode*fourth;
//     struct ListNode*fifth;
//     //Allocated memory of nodes in the HEAP(dynamic memory allocation)
//     head = (struct ListNode*) malloc(sizeof(struct ListNode));
//     second = (struct ListNode*) malloc(sizeof(struct ListNode));
//     third = (struct ListNode*) malloc(sizeof(struct ListNode));
//     fourth = (struct ListNode*)malloc(sizeof(struct ListNode));
//     fifth=(struct ListNode*)malloc(sizeof(struct ListNode));

//     head->data =8;
//     head->next = second;

//     second->data =9;
//     second->next = third;

//     third->data = 11;
//     third->next = fourth;

//     fourth->data =17;
//     fourth->next = fifth;

//     fifth->data =22;
//     fifth->next = NULL;


//     struct ListNode*head_2;
//     struct ListNode*second_2;
//     struct ListNode*third_2;
//     struct ListNode*fourth_2;
//     struct ListNode*fifth_2;


//     head_2 = (struct ListNode*) malloc(sizeof(struct ListNode));
//     second_2 = (struct ListNode*) malloc(sizeof(struct ListNode));
//     third_2 = (struct ListNode*) malloc(sizeof(struct ListNode));
//     fourth_2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//     fifth_2=(struct ListNode*)malloc(sizeof(struct ListNode));

//     head_2->data =8;
//     head_2->next = second_2;

//     second_2->data =9;
//     second_2->next = third_2;

//     third_2->data = 11;
//     third_2->next = fourth_2;

//     fourth_2->data =17;
//     fourth_2->next = fifth_2;

//     fifth_2->data =22;
//     fifth_2->next = NULL;


//     struct ListNode* head_ans;

//     printf("Circular linked list before insertion\n");
//     linkedlistraversal(head);//to print the linked list

//     head_ans = mergeTwoLists(head,head_2);


//     printf("Circular Linked list after insertion\n");
//     linkedlistraversal(head_ans);//to print the linked list
//     return 0;
// }

















// #include <stdio.h>
// #include <stdlib.h>

// // Queue structure
// struct queue {
//     int size;
//     int f;
//     int r;
//     int *arr;
// };

// // Check if queue is full
// int isfull(struct queue *q) {
//     return q->r == q->size - 1;
// }

// // Check if queue is empty
// int isempty(struct queue *q) {
//     return q->f == q->r;
// }

// // Enqueue an element
// void enqueue(struct queue *q, int val) {
//     if (isfull(q)) {
//         printf("Queue Overflow\n");
//     } else {
//         q->r++;
//         q->arr[q->r] = val;
//     }
// }

// // Dequeue an element and return it
// int dequeue(struct queue *q) {
//     int a = -1;
//     if (isempty(q)) {
//         printf("Queue Underflow\n");
//     } else {
//         q->f++;
//         a = q->arr[q->f];
//     }
//     return a;
// }

// int main() {

// struct queue*  q;
//     q->f=q->r=0;
//     q->size=100;
//     q->arr=( int*)malloc(sizeof(int));

//     int node;
//     int i=0;
//     int visited[7]={0,0,0,0,0,0,0};

//     int a[7][7]={
//         {0, 1, 1, 1, 0, 0, 0},
//         {1, 0, 1, 0, 0, 0, 0},
//         {1, 1, 0, 1, 1, 0, 0},
//         {1, 0, 1, 0, 1, 0, 0},
//         {0, 0, 1, 1, 0, 1, 1},
//         {0, 0, 0, 0, 1, 0, 0},
//         {0, 0, 0, 0, 1, 0, 0},
//     };

//     printf("%d ", i);
//     visited[i]=1;
//     enqueue(q,i);


//     while(!isempty(q)){
//         node=dequeue(q);
//         for(int j=0;j<7;j++){
//             if(a[node][j]==1 && visited[j]==0){
//                 printf("%d ",j);
//                 visited[j]=1;
//                 enqueue(q,j);
//             }
//         }
//     }
//     free(q->arr);
//     return 0;
// }







// //Mergesort algorithm (mine)

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













//selesction sort(code with harry)
#include<stdio.h>
void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n){
    int indexmin=0;
    for(int i =0;i<n-1;i++){
        indexmin=i;
        for(int j=i+1;j<n-1;j++){
            if(A[j]<A[indexmin]){
                indexmin=j;
            }
        }
        int temp=A[indexmin];
        A[indexmin]=A[i];
        A[i]=temp;
    }
}

int main(){
    // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    //  00  01  02  03  04
    // |03, 05, 02, 13, 12

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13


    int A[] = {3, 5, 2, 13, 12};
    int n = 5;
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);

    return 0;
}