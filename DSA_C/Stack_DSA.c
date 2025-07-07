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


//     //Puching an element manually
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






// //Manually push and pop in a stack
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
//     stack *s;
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
//     stack *s=(struct stack*)malloc(sizeof(struct stack));
// s->size=80;
// s->top=-1;
// s->arr=(int*)malloc(s->size*sizeof(int));

// s->top++;
// s->arr[0]=7;

// s->top++;
// s->arr[1]=5;

// s->top++;
// s->arr[2]=4;

//     s->top++;
//     s->arr[3]=2;
//     stacktop(s);
//     stackbottum(s);
// }







// //###stack using linked list###






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
//         printf("Element: %d\t", ptr->data);
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
//         top = (tp)->next;
//         int x = tp->data;
//         free(tp);
//         return x; 
//     }
// }
// int main(){
//     top = push(top, 78);
//     top = push(top, 7);
//     top = push(top, 8);
//     top = push(top,69);
//     linkedListTraversal(top);
//     int element = pop(top); 
//     printf("Popped element is %d\n", element);
//     linkedListTraversal(top);
//     return 0;
// }






// //peek ,at bottum, at top functions in stack...
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






// Paranthesis Matching using stack






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
// }
// if (isempty(sp))
// {
//     return 1;
// }
// else
// {
//     return 0;
// }
// }
// int main()
// {
//     char exp[] = "(8)*(9)";

//     if (is_paranthesis_matching(exp))
//     {
//         printf("The Parenthesis is balanced \n");
//         return 0;
//     }
//     printf("The Parenthesis is not balanced ");
//     return 0;
// }







// // Multiple Paranthesis Matching programme
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
//       printf("The Parenthesis is balanced \n");
//         return 0;
//     }
//     printf("The Parenthesis is not balanced ");
//     return 0;
// }






// // Multiple Paranthesis Matching programme(space complexity optimised code )
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
// int not_same(char a,char b){
//     if(a=='('&&b==')'){
//         return 0;
//     }
//     else if(a=='['&&b==']'){
//         return 0;
//     }
//     else if(a=='{'&&b=='}'){
//         return 0;
//     }
//     else{
//         return 1;
//     }
// }
// int is_paranthesis_matching(char *exp)
// {
//     struct stack *sp;
//     sp = (struct stack *)malloc(sizeof(struct stack));
//     sp->size = 100;
//     sp->top = -1;
//     sp->arr = (char *)malloc(sp->size * sizeof(char));
//     char x;
//     for (int i = 0; exp[i] != '\0'; i++)
//     {
//         if (exp[i] == '('||exp[i] == '['||exp[i] == '{')
//         {
//             push(sp, exp[i]);
//         }
//         else if (exp[i] == ')'||exp[i] == ']'||exp[i] == '}')
//         {
//             if (isempty(sp))
//             {
//                 return 0;
//             }
//             x = pop(sp);
//             if (not_same(x,exp[i]))
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
// int main(){
//     char exp[] = "{8}*([9])[]";

//     if (is_paranthesis_matching(exp))
//     {
//       printf("The Parenthesis is balanced \n");
//         return 0;
//     }
//     printf("The Parenthesis is not balanced ");
//     return 0;
// }





// // infix to post-fix
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
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
//         return val;
//     }
// }
// char stacktop(struct stack*sp){
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
//     char * postfix=(char*) malloc((strlen(infix)+1)*sizeof(char));//allocating dynamic memory for the output
//     int i=0;//to run array of infix
//     int j=0;//to run array of postfix
//     while(infix[i]!='\0'){
//         if(!isOperator(infix[i])){
//             postfix[j]=infix[i];
//             i++;
//             j++;
//         }
//         else{
//             if(isempty(sp)){
//                 push(sp,infix[i]);
//                 i++;
//             }
//             else if(precendence(infix[i])>precendence(stacktop(sp))){
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
//     printf("Postfix of %s\n",infixtopostfix(infix));
//     return 0;
// }





