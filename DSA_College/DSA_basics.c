

// // // ##to see if the number entered is prime or not 
// // #include <stdio.h>
// // int main(){
// //     int num;
// //     printf("Enter the number you want to check: ");
// //     scanf("%d",&num);
// //     for(int i=2;i<num/2;i++){
// //         if(num%i==0){
// //             printf("Then number is not prime");
// //             return 0;
// //         }
// //     }
// //     printf("The number is a Prime number\n");
// //     return 0;
// // }








// // // code to get random functions generated random value 

// // #include <stdio.h>
// // #include <stdlib.h>
// // #include <time.h>
// // int main(){
// //     srand(time(NULL));
// //     int n=0;
// //     printf("Enter the size of array: ");
// //     scanf("%d",&n);
// //     char arr[n];
// //     for(int i =0;i<n;i++){
// //         arr[i]=(rand()%26) +65;
// //     }
// //     int arr_count[26];

// //     for( int i=0;i<26;i++){
// //         arr_count[i]=0;
// //     }
// //     for(int i=0;i<n;i++){
// //         arr_count[arr[i]-65]++;
// //     }
    
// //     for( int i=0;i<26;i++){
// //         printf("\n%c: %d",i+65,arr_count[i]);
// //     }
// //         return 0;    
// // }






// // //  arr[i]=(rand()%26) +'a'; to get random alphabets 






// // ## this code  give user the ability to perforem deletion insertion etc feature for an array
// #include <stdio.h>
//  #include <stdlib.h>
// int main(){
//     printf("##Welcome##\n");
//     printf("\n");
//     printf("\n");
//     printf("##options##\n1-Creation\n2-insertion\n3-Deletion\n4-Display\n5-Search\n6-Exit\n");
// int size;
//             printf("\nEnter the size of the array: ");
//             int size_t=0;
//             scanf("%d",&size_t);
            
//             int arr[size];
            
//             printf("Enter the elements of the array\n");
//             for(int i=0;i<size_t;i++){
//                 printf("Element %d : ",(i));
//                 scanf("%d",&arr[i]);
//                 printf("\n");
//             }
//             size=size_t;
//     while(0<1){
//         int intstruction=0;
//         printf("\nEnter the feature no. you want to do ");
//         scanf("%d",&intstruction);
//         if(intstruction==2){
//             if(size==0){
//                 printf("Array not created as yet, please choose option 1\n");
//                 return 0;
//             }
//             printf("Enter the index you want to insert in: ");
//             int index;
//             scanf("%d",&index);
//             if(index<0 || index >size){
//                 printf("Index is out of bound\n");
//                 return 0;
//             }
//             printf("Enter the value you want to insert: ");
//             int val;
//             scanf("%d",&val);

//             for (int i = size; i > index; i--) {
//                 arr[i] = arr[i - 1];
//             }
//             arr[index] = val;
//             size++;
//         }
//         else if(intstruction==3){
//             if(size==0){
//                 printf("Array not created as yet, please choose option 1\n");
//                 return 0;
//             }
//             printf("Enter the index you want to delet: ");
//             int index;
//             scanf("%d",&index);
//             if(index<0 || index >size){
//                 printf("Index is out of bound\n");
//                 return 0;
//             }
//             for(int i=index;i<size-1;i++){
//                 arr[i]=arr[i+1];
//             }
//             arr[size-1]=0;
//             size--;
//         }
//         else if(intstruction==4){
//             if(size==0){
//                 printf("Array not created as yet, please choose option 1\n");
//                 return 0;
//             }
//             printf("Array is as follows\n");
//             for(int i=0;i<size;i++){
//                 printf("%d ",arr[i]);
//             }
//         }
//         else if(intstruction==5){
//             if(size==0){
//                 printf("Array not created as yet, please choose option 1\n");
//                 return 0;
//             }
//             printf("Array is as follows\n");
//             for(int i=0;i<size;i++){
//                 printf("%d ",arr[i]);
//             }
//             printf("Enter the val you want to search: ");
//             int val;
//             scanf("%d",&val);
//             for(int i=0;i<size;i++){
//                 if(arr[i]==val){
//                     printf("The value is at index: %d",i);
//                 }
//             }
//         }
//         else if(intstruction==6){
//             printf("Thank you for using \n");
//             return 0;
//         }
//         else{
//             printf("Please enter a valid option \n");
//         }
//     }
// }











// // simple code to find number of repeating element in an array
// #include <stdio.h>
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,1,1,1};
//     int arr_check[10];
//     int size=0;
//     for(int i=0;i<10;i++){
//         for(int k=0;k<10;k++){
//             if(arr[i]==arr_check[k]){
//                 i++;
//             }
//         }
//         int counter=0;
//         for(int j=0;j<10;j++){
//             if(arr[i]==arr[j]){
//                 counter++;
//             }
//         }
//         if(counter>1){
//             arr_check[size]=arr[i];
//             size++;
//         }
//         printf("%d : %d \n",arr[i],counter);
//     }
//     return 0;
// }










// // simple code to find number of repeating element in an array not completed as yet
// #include <stdio.h>
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,1,1,1};
//     int arr_check[10];
//     int size=0;
//     int arr_quant[10]={0};
//     for(int i=0;i<10;i++){
//         for(int j=0;j<size;j++){
//             if(arr_check[i]==arr[j]){
//                 i++;
//             }
//         }
//         arr_check[size]=arr[i];
//         size++;
//     }
//     for(int i=0;i<size;i++){
//         int counter=0;
//         for(int j=0;j<10;j++){
//             if(arr_check[i]==arr[j]){
//                 counter++;
//                 arr_quant[i]=counter;
//             }
//         }
//     }
//     for(int i=0;i<size;i++){
//         printf("%d : %d\n",i,arr_quant[i]);
//     }
//     return 0;
// }







// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("Enter upper range : ");
//     scanf("%d",&a);
//     printf("Enter the lower limit: ");
//     scanf("%d",&b);

//     printf("The following are prime numbers from %d to %d \n",a,b);
//     for(int i=a;i<b;i++){
//         int res=0;
//         for(int j=2;j<=i/2;j++){
//             if(i%j==0){
//                 res=1;
//             }
//         }
//         if(res==0){
//             printf("%d  ",i);
//         }
//     }
//     return 0;
// }




// // Q-2
// #include <stdio.h>
// int main(){
//     char alphabet[1000];
//     int size=0;
//     printf("Enter the alphabet: ");
//     scanf("%s",alphabet);
//     int i=0;
//     while(alphabet[i]!='\0'){
//         i++;
//         size++;
//     }
//     int arr[size];
//     for(int i=0;i<size;i++){
//         arr[i]=alphabet[i];
//     }
//     for(int i=0;i<size;i++){
//         if(arr[i] >= 'a' && arr[i] <= 'z'){
//             arr[i]= arr[i]-(26+6);
//         }
//     }
//     int count[26];
//     for(int i=0;i<26;i++){
//         count[i]=0;
//     }
//     for(int i=0;i<size;i++){
//         count[arr[i]-65]++;
//     }
//     printf("The number of time each alphabet has occured is \n");
//     for(int i=0;i<26;i++){
//         printf("%c : %d\n",(i+65),count[i]);
//     }
//     return 0;
// }




// #include <stdio.h>
// int main(){
//     char str[1000];
//     char sub_str[1000];
//     printf("Enter the String: ");
//     scanf("%s",str);
//     printf("Enter the Substring: ");
//     scanf("%s",sub_str);
//     int size=0;
//     int s=0;
    
//     int size=strlen(str);
//     int size_sub=strlen(sub_str);

//     if(size<1){
//         printf("Enter something\n");
//         return 0;
//     }

// printf("%d,%d\n",size,size_sub);
//     int node=0;
//     for(int i=0;i<size-size_sub;i++){
//         int match=1;
//         if(str[i]==sub_str[node]){
//             for(int j=0;j<size_sub;j++){
//             if(sub_str[i+j]!=str[j]){
//                 match =0;
//                 break;
//             }
//         }
//         }
//         if(match){
//             printf("The Substring is present between the index %d to %d\n",i,i+size_sub);
//             return 0;
//         }
//     }
//     printf("The substring ain't present in the string");
//     return 0;
// }




// #include <string.h>
// #include <stdio.h>

// int main() {
//     char str_c[1000];
//     char sub_str_c[1000];

//     printf("Enter the String: ");
//     scanf("%s", str_c); // change to fgets if spaces needed

//     printf("Enter the Substring: ");
//     scanf("%s", sub_str_c);

//     int size = strlen(str_c);
//     int size_sub = strlen(sub_str_c);
//     int count=0;
//     if (size < 1) {
//         printf("Enter something\n");
//         return 0;
//     }


//     for (int i = 0; i <= size - size_sub; i++) {        // gr8 logic since if substring size will require minimal 
//                                                         // so amount of space so rest is not checked unnesecerrily 
//         int match = 1; 
//         for (int j = 0; j < size_sub; j++) {
//             if (str_c[i + j] != sub_str_c[j]) {         // this is great array
//                 match = 0;
//                 break;
//             }
//         }
//         if (match) {
//             printf("The substring is present between index %d and %d\n", i, i + size_sub - 1);
//             count++;
//         }
//     }
//     if(count>0){
//         printf("\n The sub string occurs %d number of time in the String.\n",count);
//     }
//     else{
//         printf("The substring ain't present in the string\n");
//     }
//     return 0;
// }













// // L_3 Q_1 linkedlist insertion deltion and all 
// #include <stdio.h>
// #include <malloc.h>
// struct LinkedNode{
//     int data;
//     struct LinkedNode * next;
// };
// struct LinkedNode* insertion(int val, int pos, struct LinkedNode* head) {
//     if (pos < 1) {
//         printf("Invalid position. Position must be 1 or greater.\n");
//         return head;
//     }

//     struct LinkedNode* newNode = (struct LinkedNode*)malloc(sizeof(struct LinkedNode));
//     newNode->data = val;

//     if (pos == 1) {
//         newNode->next = head; // New node points to the old head
//         return newNode;       // The new node is now the head
//     }

//     struct LinkedNode* temp = head;
//     for (int i = 1; i < pos - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }
//     if (temp == NULL) {
//         printf("Position out of bounds.\n");
//         free(newNode); 
//     } else {
//         newNode->next = temp->next;
//         temp->next = newNode;
//     }

//     return head;
// }

// void print_it(struct LinkedNode* node){
//     while(node->next!=NULL){
//         printf("%d->",node->data);
//         node=node->next;
//     }
//     printf("%d\n",node->data);
// }

// struct LinkedNode* deletion(int pos, struct LinkedNode* node) {
//     if (node == NULL || pos < 1) {
//         printf("List is empty or position is invalid.\n");
//         return NULL;
//     }

//     struct LinkedNode* temp = node; 

//     if (pos == 1) {
//         node = temp->next; // The new head is the next node
//         free(temp);        // Free the OLD head
//         return node;
//     }

//     for (int i = 1; i < pos - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }

//     if (temp == NULL || temp->next == NULL) {
//         printf("Position out of bounds.\n");
//     } else {
//         struct LinkedNode* delNode = temp->next; // This is the node to delete
//         temp->next = delNode->next;              // Unlink it
//         free(delNode);                           // Free its memory
//     }
    
//     return node;
// }

// void find_element(int val,struct LinkedNode* node){
//     int i =0;
//     int ret=-1;
//     while(node!=NULL){
//         if(val==node->data){
//             ret=i;
//         }
//         node=node->next;
//         i++;
//     }
//     if(ret!=-1){
//         printf("%d is the positon of %d\n",ret,val);
//     }
//     else{
//         printf("The value ain't present\n");
//     }
// }

// struct LinkedNode* creation() {
//     int num = 0;
//     printf("Enter the number of elements you want to have in the linkedlist: ");
//     scanf("%d", &num);

//     if (num == 0) {
//         return NULL;
//     }

//     struct LinkedNode* head = NULL;
//     struct LinkedNode* tail = NULL; 

//     for (int i = 0; i < num; i++) {
//         int val = 0;
//         printf("Enter the element %d: ", i + 1);
//         scanf("%d", &val);

//         struct LinkedNode* newNode = (struct LinkedNode*)malloc(sizeof(struct LinkedNode));
//         newNode->data = val;
//         newNode->next = NULL;

//         if (head == NULL) {
//             head = newNode;
//             tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }
//     return head;
// }
// int main(){

//     printf("##Welcome##\n");
//     printf("\n");
//     printf("\n");
//     printf("##options##\n1-insertion\n2-Deletion\n3-Display\n4-Search\n5-Exit\n");

//     struct LinkedNode* head=creation();

//     while(0<1){
//         printf("Enter the command number: ");
//         int c;
//         scanf("%d",&c);



//         if(c==1){
//             printf("Enter the number you want to insert: ");
//             int val;
//             scanf("%d",&val);
//             printf("Enter the position you want to insert in: ");
//             int pos;
//             scanf("%d",&pos);
//             head=insertion(val,pos,head);
//         }
//         if(c==2){
//             printf("Enter the position you want to Delete: ");
//             int pos;
//             scanf("%d",&pos);
//             head=deletion(pos,head);
//         }
//         if(c==3){
//             print_it(head);
//         }
//         if(c==4){
//             printf("Enter the number you want to find: ");
//             int num;
//             scanf("%d",&num);
//             find_element(num,head);
//         }
//         if(c==5){
//             return 0;
//         }
//     }




//     // print_it(head);
//     // head = insertion(23,3,head);
//     // print_it(head);
//     // head= deletion(3,head);
//     // print_it(head);
//     // find_element(269,head);
//     // reverse(head);

//     return 0;
// }













// //L_3 Q_2 ## this is the basic programme for sparce matrix display
// // Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     int sp1[60][3];
// sp1[0][0] = 0; sp1[0][1] = 0; sp1[0][2] = 6;
// sp1[1][0] = 0; sp1[1][1] = 1; sp1[1][2] = 9; 
// sp1[2][0] = 3; sp1[2][1] = 4; sp1[2][2] = 1;
// sp1[3][0] = 9; sp1[3][1] = 2; sp1[3][2] = 2;

//     int sp2[60][3];
//     sp2[0][0]=0;
//     sp2[0][1]=0;
//     sp2[0][2]=69;
//     sp2[1][0]=1;
//     sp2[1][1]=3;
//     sp2[1][2]=69;
//     sp2[2][0]=5;
//     sp2[2][1]=4;
//     sp2[2][2]=21;
//     sp2[3][0]=3;
//     sp2[3][1]=2;
//     sp2[3][2]=56;
    
//     int sp_count1=0;
//     int sp_count2=0;

//     for(int i=0;i<6;i++){
//         for(int j=0;j<9;j++){
//             if(i==sp1[sp_count1][0] && j==sp1[sp_count1][1] && i==sp2[sp_count2][0] && j==sp2[sp_count2][1]){
//                 int val=sp1[sp_count1][2]+sp2[sp_count2][2];
//                 printf("%d",val);
//                 sp_count1++;
//                 sp_count2++; 
//             }
//             else if(i==sp1[sp_count1][0] && j==sp1[sp_count1][1]){
//                 printf("%d",sp1[sp_count1][2]);
//                 sp_count1++;
//             }
//             else if(i==sp2[sp_count2][0] && j==sp2[sp_count2][1]){
//                 printf("%d",sp2[sp_count2][2]);
//                 sp_count2++;
//             }
//             else{
//                 printf("%d",0);
//             }
//             printf("   ");
//         }
//         printf("\n");
//     }
//     return 0;
// }










// // L_3 Q_1 linkedlist insertion deltion and all 
// #include <stdio.h>
// #include <malloc.h>
// struct LinkedNode{
//     int data;
//     struct LinkedNode * next;
// };
// struct LinkedNode* insertion(int val, int pos, struct LinkedNode* head) {
//     if (pos < 1) {
//         printf("Invalid position. Position must be 1 or greater.\n");
//         return head;
//     }
//     struct LinkedNode* check=head;  
//     struct LinkedNode* newNode = (struct LinkedNode*)malloc(sizeof(struct LinkedNode));
//     newNode->data = val;

//     if (pos == 1) {
//         newNode->next = head; // New node points to the old head
//         return newNode;       // The new node is now the head
//     }

//     struct LinkedNode* temp = head;
//     for (int i = 1; i < pos - 1 && temp!=check; i++) {
//         temp = temp->next;
//     }
//     if (temp == NULL) {
//         printf("Position out of bounds.\n");
//         free(newNode); 
//     } else {
//         newNode->next = temp->next;
//         temp->next = newNode;
//     }

//     return head;
// }

// void print_it(struct LinkedNode* node){
//     if(node==NULL){
//         return;
//     }
//     struct LinkedNode* start = node;
//     while(node!=start){
//         printf("%d->",node->data);
//         node=node->next;
//     }
//     printf("%d\n",node->data);
// }

// struct LinkedNode* deletion(int pos, struct LinkedNode* node) {
//     if (node == NULL || pos < 1) {
//         printf("List is empty or position is invalid.\n");
//         return NULL;
//     }

//     struct LinkedNode* temp = node; 
//     struct LinkedNode* check=node;  


//     if (pos == 1) {
//         node = temp->next; // The new head is the next node
//         free(temp);        // Free the OLD head
//         return node;
//     }

//     for (int i = 1; i < pos - 1 && temp!=check; i++) {
//         temp = temp->next;
//     }

//     if (temp == NULL || temp->next == NULL) {
//         printf("Position out of bounds.\n");
//     } else {
//         struct LinkedNode* delNode = temp->next; // This is the node to delete
//         temp->next = delNode->next;              // Unlink it
//         free(delNode);                           // Free its memory
//     }
    
//     return node;
// }

// void find_element(int val,struct LinkedNode* node){
//     int i =0;
//     int ret=-1;
//     struct LinkedNode* check=node;  
//     while(node!=check){               // change
//         if(val==node->data){
//             ret=i;
//         }
//         node=node->next;
//         i++;
//     }
//     if(ret!=-1){
//         printf("%d is the positon of %d\n",ret,val);
//     }
//     else{
//         printf("The value ain't present\n");
//     }
// }

// struct LinkedNode* creation() {
//     int num = 0;
//     printf("Enter the number of elements you want to have in the linkedlist: ");
//     scanf("%d", &num);

//     if (num == 0) {
//         return NULL;
//     }

//     struct LinkedNode* head = NULL;
//     struct LinkedNode* tail = NULL; 

//     for (int i = 0; i < num; i++) {
//         int val = 0;
//         printf("Enter the element %d: ", i + 1);
//         scanf("%d", &val);

//         struct LinkedNode* newNode = (struct LinkedNode*)malloc(sizeof(struct LinkedNode));
//         newNode->data = val;
//         newNode->next = NULL;

//         if (head == NULL) {
//             head = newNode;
//             tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }
//     tail->next=head;
//     return head;
// }
// int main(){

//     printf("##Welcome##\n");
//     printf("\n");
//     printf("\n");
//     printf("##options##\n1-insertion\n2-Deletion\n3-Display\n4-Search\n5-Exit\n");

//     struct LinkedNode* head=creation();
//     while(1){
//     printf("Enter the command number: ");
//     int c;
//     scanf("%d",&c);
        
//         if(c==1){
//             printf("Enter the number you want to insert: ");
//             int val;
//             scanf("%d",&val);
//             printf("Enter the position you want to insert in: ");
//             int pos;
//             scanf("%d",&pos);
//             head=insertion(val,pos,head);
//         }
//         if(c==2){
//             printf("Enter the position you want to Delete: ");
//             int pos;
//             scanf("%d",&pos);
//             head=deletion(pos,head);
//         }
//         if(c==3){
//             print_it(head);
//         }
//         if(c==4){
//             printf("Enter the number you want to find: ");
//             int num;
//             scanf("%d",&num);
//             find_element(num,head);
//         }
//         if(c==5){
//             return 0;;
//         }
//     }




//     // print_it(head);
//     // head = insertion(23,3,head);
//     // print_it(head);
//     // head= deletion(3,head);
//     // print_it(head);
//     // find_element(269,head);
//     // reverse(head);

//     return 0;
// }
