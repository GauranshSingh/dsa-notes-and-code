





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
//     a=q->arr[q->f];
//     q->f++;
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
//     if(q->f==-1){
//         printf("Queue is empty\n");
//         return 0;
//     }
//     int i=q->f;
//     do{printf("%d\t",q->arr[i]);
//         i=(i+1)%q->size;
//     }while(i!=(q->r+1)%q->size);
//     printf("\n");
// }
// int isfull(struct circularqueue *q){
//     return((q->r+1)%q->size==q->f);

// }
// int isempty(struct circularqueue *q){
//     if(q->f==-1){
//         return 1;
//     }
//     return 0;
// }
// int enqueue(struct circularqueue *q,int val){
//     if(isfull(q)){
//         printf("Queue Overflow\n");
//     }
//     else if(q->f==-1){
//         q->f=(q->f+1)%q->size;
//         q->r=(q->r+1)%q->size;
//         q->arr[q->r]=val;
//     }
//     else{
//         q->r=(q->r+1)%q->size;
//         q->arr[q->r]=val;
//     }
//     return q;
// }
// void dequeue(struct circularqueue *q){
//     int a=0;
//     printf("\n");
//     if(isempty(q)){
//         printf("Queue underflow\n");
//     }
//     else{
//     a=q->arr[q->f+1];
//     q->f=(q->f+1)%q->size;
//     }
//     printf("Dequed element %d\n",a);
// }
// int main(){
//     struct circularqueue q;
//     q.size=5;
//     q.r=q.f=-1;
//     q.arr=(int *)malloc(q.size*sizeof(int ));
//     enqueue(&q,12);
//     enqueue(&q,15);
//     enqueue(&q,6);
//     enqueue(&q,15);
//     enqueue(&q,6);
//     printf("traversal\n");
//     traversal(&q);
//     dequeue(&q);
//     enqueue(&q,69);
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
//     if(ptr==NULL){
//         printf("Queue Overflow\n");
//         return 0;
//     }
//     ptr->data=val;
//     if(r==NULL){
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










// #include <stdio.h>
// int maxP_GAT(int arr[], int n) {
//     int max_prod = arr[0], min_prod = arr[0], result = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] < 0) {
//             int temp = max_prod;
//             max_prod = min_prod;
//             min_prod = temp;
//         }
//         max_prod = (arr[i]>arr[i]*max_prod)?arr[i]:arr[i]*max_prod;
//         min_prod = (arr[i]<arr[i]*min_prod)?arr[i]:arr[i]*min_prod;
//         if (max_prod > result) result = max_prod;
//     }
//     return result;
// }
// int main() {
//     int arr[] = {2, 3, -2, 4};
//     printf("%d\n", maxP_GAT(arr, sizeof(arr) / sizeof(arr[0])));
//     return 0;
// }