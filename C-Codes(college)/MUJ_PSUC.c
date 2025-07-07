//              #########sample typed syntax#########

// #include <stdio.h>
// int main() {

// return 0;
// }

// #include <stdio.h>

// int main() {
//     printf("Gaurnsh singh is the best in the west:\n");
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }

//                  #this is a machine that adds
// #include <stdio.h>
// int main(){int  a=9,b=5,c;
// c = a+b;
//     printf("%d",c);
//     }

// This is a machine that tells the sky value of a character
// #include <stdio.h>
// int main() {
//     char g, s, u,a ,A;
//     printf("%d %d %d %d %d\n",'g','s','u','a','A');
//     return 0;

// This is a machine that converts mm in cm inch & feet

// #include <stdio.h>
// int main() {
//     float mm,cm,inch,feet;

//     printf("enter the distance( in mm) ");
//     scanf("%f",&mm);

//     cm=mm/10;
//     inch=cm/2.5;
//     feet=inch/12;

//     printf("the distance %f is equal to %f cm %f inch %f feet",mm,cm,inch,feet);
//     return 0;
// }

// #This is a machine that reverses a number
// #include <stdio.h>

// int main() {
//     int c,r;
//     float d1,d2,d3;

//     printf("enter the number: ");
//     scanf("%d",&c);

//     int int_c = (int)c;
//     d1 = int_c % 10;
//     d2 = (int_c - d1) / 10;
//     d3 = (int_c - (d1 + d2 * 10)) / 100;

//     // int d1=(int_c %10);
//     // int d2=((c-d1)%100);
//     // int d3=(c-(d1+d2)/100);

//     r = ((d1*100)+(d2*10)+d3);

//     printf("the reverse is%d\n",r);
//     return 0;
// }

// #This is a machie that also reverses a number(by google gemini)
// #include <stdio.h>
// #include <math.h>

// int main() {
//     float n, reversed_number = 0, remainder, factor = 1;

//     printf("Enter a number: ");
//     scanf("%f", &n);

//     int integer_part = (int)n;
//     float decimal_part = n - integer_part;

//     // Reverse the integer part
//     while (integer_part != 0) {
//         remainder = integer_part % 10;
//         reversed_number = reversed_number * 10 + remainder;
//         integer_part /= 10;
//     }

//     // Reverse the decimal part (up to a certain precision)
//     int decimal_places = 2; // Adjust as needed
//     for (int i = 0; i < decimal_places; i++) {
//         decimal_part *= 10;
//         remainder = (int)decimal_part % 10;
//         reversed_number += remainder * pow(0.1, i + 1);
//         decimal_part -= remainder;
//     }

//     printf("The reversed number is: %.0f\n", reversed_number);

//     return 0;
// }

// This is a machine that calcualtes the roots of a quadratic equation.
// #include <stdio.h>
// #include <math.h>
// int main() {
//     float a,b,c,r1,r2;
//     printf("enter the co efficients of the quadratic equation:");
//     scanf("%f %f %f",&a,&b,&c);

//     if((b*b)-4*a*c>=0){
//     r1=(-b-sqrt((b*b)-4*a*c))/2*a;
//     r1=(-b+sqrt((b*b)-4*a*c))/2*a;
//     printf("the roots of the equation %fx^2 + %fx + %f = 0 are: %f & %f\n",a,b,c,r1,r2);

//     }
//     else
//     printf("The equation has no real roots, and the roots are imaginary");
//     return 0;
// }

//                                      #####Control statement#####

//                                      ####Decision statement####

//                                       ###If else statement###

// ## This is a machine that tells whether a number is even or odd and whether a number is greater or lesser than 100{using if else}##

// # include <stdio.h>
// int main() {
//     int a;
//     printf("enter teh number- ");
//     scanf("%d",&a);
//     if (a % 2 == 0)

//     printf("number is even\n");
//     else
//     printf("the number entered is odd\n");
//     if (a<100)
//     printf("the number is lesser than 100");
//     else
//     printf("the number is greater than 100");
//      }

// ## This is a machine that tells whether a number is even or odd and if even whether a number is greater or lesser than 100{using if else}##

// # include <stdio.h>
// int main() {
//     int a;
//     printf("enter theß number- ");
//     scanf("%d",&a);
//     if (a % 2 == 0)
//     {
//     if (a<100)
//     printf("number is even\n and the number is lesser than 100");
//     else
//     printf("number is even\n and the number is greater than 100");
//     }
//     else
//     printf("the number entered is odd\n");
//     }

// ## This is a machine that tells which is the biggest number of all {using if else(aka logical && operators)}##

// #include <stdio.h>
// int main() {
//     int a,b,c;
//     printf("enter the number a - ");
//     scanf("%d",&a);
//     printf("enter the number b - ");
//     scanf("%d",&b);
//     printf("enter the number c - ");
//     scanf("%d",&c);
//     if(a>b&&a>c)
//     printf("a=%d is the greatest of all ",a);
//     if(b>a&&b>c)
//     printf("b=%d is the greatest of all",b);
//     else
//     printf("c=%d is the greatest of all",c);
// }

// ## This is a machine that tells which is the biggest number of all {using nested if else}##

// #include <stdio.h>
// int main() {

//     int a,b,c;
//     printf("enter the number a - ");
//     scanf("%d",&a);
//     printf("enter the number b - ");
//     scanf("%d",&b);
//     printf("enter the number c - ");
//     scanf("%d",&c);
//     if(a!=b!=c)
//     if(a<=b)
//     if(b<=c)
//     printf("c=%d is the greatest of all",c);
//     else
//     printf("b=%d is the greatest of all",b);
//     else
//     printf("a=%d is the greatest of all",a);
//     else
//     printf("all the given inputs are equal");
// }

// ## This is a machine that tells which is the biggest number of all {usingif else ladder}##

// #include <stdio.h>
// int main() {

//     long double  a,b,c;
//     printf("enter the number a - ");
//     scanf("%Lf",&a);
//     printf("enter the number b - ");
//     scanf("%Lf",&b);
//     printf("enter the number c - ");
//     scanf("%Lf",&c);
//     if(a==b==c)
//     printf("all the given inputs are equal");
//     else
//     if(a>=b&&a>=c)
//     printf("a=%Lf is the greatest of all",a);
//     else
//     if(b<=c)
//     printf("c=%Lf is the greatest of all",c);
//     else
//     printf("b=%Lf is the greatest of all",b);

// }

// ## This is a machine that tells which is the biggest number of all {using conditional statement AKA ternary operator}##

// #include <stdio.h>

// int main() {
// int a,b,c;
// printf("enter number A- ");
// scanf("%d",&a);
// printf("enter number B- ");
// scanf("%d",&b);
// printf("enter number C- ");
// scanf("%d",&c);

// (a<b&&a<c)?((b<c)?(printf("c=%d is the greatest of all",c)):(printf("b=%d is the greatest of all",b))):printf("a=%d is the greatest of all",a);

// }

// #This is a machine that tells whether a number is a prime number or not

// #include "stdio.h"
// int main(){
//     int n,i;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     for(i=2;i<n/2;i++){
//         if(n%i==0)
//         printf("the number entered is not a prime number.\n");
//         else
//         printf("the number entered is a prime number! \n");
//         break;
//     }
//     return 0;
// }

//                  ###Switch-cases

// ##This is a calculator made using swithch-case {with number operator number interface}

// #include <stdio.h>
// int main() {
//     float a,b,result;
//     int op;
//     printf("enter the first number- ");
//     scanf("%f",&a);
//     while(getchar()!='\n');
//     printf("press the number corresponding to the operation\n\naddition= 0\nsubtraction= 1\nmultiplication= 2\ndivision= 3\n");
//     scanf("%d", &op);
//     printf("enter the second number- ");
//     scanf("%f",&b);
//     switch(op)
//         {
//         case 0:
//         result=a+b;
//         break;
//         case 1:
//         result=a-b;
//         break;
//         case 2:
//         result=a*b;
//         break;
//         case 3:
//         result=a/b;
//         break;
//     }
//     printf("result=%f\n",result);
// }

// ##This is a calculator made using swithch-case{with first operator then switch and then number 1 and 2}

// #include <stdio.h>
// int main() {

//     int a,b,result;
//     char ch;
//     printf("enter the operation- ");
//     scanf("%c",&ch);
//     switch(ch){
//         case '+' :
//         printf("enter the first number- ");
//         scanf("%d",&a);
//         printf("enter the second number- ");
//         scanf("%d",&b);
//         printf("result=%d",a+b);
//         break;
//         case '-':
//         printf("enter the first number- ");
//         scanf("%d",&a);
//         printf("enter the second number- ");
//         scanf("%d",&b);
//         printf("result=%d",a-b);
//         break;
//         case '*':
//         printf("enter the first number- ");
//         scanf("%d",&a);
//         printf("enter the second number- ");
//         scanf("%d",&b);
//         printf("result=%d",a-b);
//         break;
//         case '/':
//         printf("enter the first number- ");
//         scanf("%d",&a);
//         printf("enter the second number- ");
//         scanf("%d",&b);
//         printf("result=%d",a-b);
//         break;
//     }
// }

// ##This is a calculator made using swithch-case{directly write by looking at the equation}

// #include <stdio.h>
// int main() {

//     float a,b,result;
//     char ch;
//     printf("enter the equation- ");
//     scanf("%f %c %f",&a,&ch,&b);
//     switch(ch){
//         case '+' :
//         printf("result = %f\n",a+b);
//         break;
//         case '-':
//         printf("result = %f\n",a-b);
//         break;
//         case '*':
//         printf("result = %f\n",a*b);
//         break;
//         case '/':
//         printf("result = %f\n",a/b);
//         break;
//          }
// }

// ##This is a calculator made using swithch-case{user gotta choose }

// #include <stdio.h>
// int main() {

// float a,b,result,op;

// printf("enter the first number- ");
// scanf("%f",&a);
// printf("enter the second number- ");
// scanf("%f",&b);
// printf("press the number corresponding to the operation\n\naddition= 0\nsubtraction= 1\nmultiplication= 2\ndivision= 3");
// scanf("%f", &op);
// switch(op)
//     {
//     case 0:
//     result=a+b;
//     break;
//     case 1:
//     result=a-b;
//     break;
//     case 2:
//     result=a*b;
//     break;
//     case 3:
//     result=a/b;
//     break;
// }
// printf("result=%f",result);
// }

// #This is a machine that fucntions as both a calculator(equation) and also a calculator(difined quantities)

// #include <stdio.h>
// int main() {
//     int option;
//     printf("choose the service you want- \n 1. calculator for equation\n 2. calculator for difined quantities\n");
//     scanf("%d",&option);
//     switch(option){
//         case 1 :int a,b,result;
//                 char op;
//                 printf("enter the equation- ");
//                 scanf("%d %c %d",&a,&op,&b);
//                 switch(op){
//                 case '+' :
//                 printf("result = %d\n",a+b);
//                 break;
//                 case '-':
//                 printf("result = %d\n",a-b);
//                 break;
//                 case '*':
//                 printf("result = %d\n",a*b);
//                 break;
//                 case '/':
//                 printf("result = %d\n",a/b);
//                 break;
//                 }
//                 break;
//         case 2 :int x,y,answer;
//                 char ch;
//                 while(getchar()!='\n');
//                 printf("enter the operation- ");
//                 scanf("%c",&ch);
//                 switch(ch){
//                     case '+' :
//                     printf("enter the first number- ");
//                     scanf("%d",&x);
//                     printf("enter the second number- ");
//                     scanf("%d",&y);
//                     printf("%d\n",x+y);
//                     break;
//                     case '-':
//                     printf("enter the first number- ");
//                     scanf("%d",&x);
//                     printf("enter the second number- ");
//                     scanf("%d",&y);
//                     printf("%d\n",x-y);
//                     break;
//                     case '*':
//                     printf("enter the first number- ");
//                     scanf("%d",&x);
//                     printf("enter the second number- ");
//                     scanf("%d",&y);
//                     printf("%d\n",x*y);
//                     break;
//                     case '/':
//                     printf("enter the first number- ");
//                     scanf("%d",&x);
//                     printf("enter the second number- ");
//                     scanf("%d",&y);
//                     printf("%d\n",x/y);
//                     break;
//                     }
//                     default:
//                     printf("Error...the choosen feature doesn't exist\n");
//                     break;
//                 }
// }

// #This is a machine that calculates the total bill of telephone is month
// #include <stdio.h>

// int main() {
//     int calls;
//     float bill;
//     printf("enter the number of calls in the last month: ");
//     scanf("%d",&calls);

//     switch(calls){
//     case 1 ...100 :
//     bill=200;
//     break;
//     case 101 ...150:
//     bill=200 + (calls-100)*0.6;
//     break;
//     case 151 ...200:
//     bill = 230 + (calls-150)*0.5;
//     break;
//     default:
//     bill = 255 + (calls -200)*0.4;
//     }

//     printf("the total bill for the month is Rs. %f\n",bill);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a,d,i;
//     printf("Enter the amount of shopping you have done: ");
//     scanf("%d",&a);
//     switch(a){
//     case 1 ...499:
//     d = 0;
//     break;
//     case 500 ...800:
//     d = (a/100)*20;
//     default:
//     d = (a/100)*25;
//     }
//     printf("the dicount availed = rupees %d\n",d);
//     return 0;
// }

//                                                                      ###loops###

// ##simple practice questions(for loop)

// #This is a program that creates a loop between 0 & 5 for int x(variable)

// #include "stdio.h"

// int main(){
//     int x=0;
//     for(x=0;x<5;x++){
//         printf("x=%d\n",x);
//     }
//     printf("out of loop!");
// }

// #include "stdio.h"

// int main(){
//     int x;
//     for(;x<5;x++){
//         printf("hello world\n");
//     }
//     printf("out of loop!");
//     return 0;
// }

// #include "stdio.h"

// int main(){
//     for(int x=100;x>5;x--){
//         printf("%d\n",x);
//     }
//     printf("out of loop!");
//     return 0;
// }

// #This is a program that creates a loop between 0 & 127 as there are only 127 positive numbers for x variable

// #include "stdio.h"
// int main(){
//     char n1,n2;
//     for(n1=0,n2=1;n1<n2;n1++,n2++)
//         printf("n1=%d n2=%d\n",n1,n2);

// }

// #include <stdio.h>
// int main() {
//     int i=0;
//     do{printf("i=%d\n",i);
//     i++;
//     }
//     while(i<5);
//     printf("out of the do while\n");

// }

// These are the most important question of all time

// #include <stdio.h>                           // this is called a pre processor directive (without this our c program won't work)

// int main(){

// int n;
// printf("enter the number you want the table to start from: ");
// scanf("%d",&n);
// for(;n>=1;n--){
//     if(n%2==0){
//         continue;
//     }
//     printf("%d\n",n);
// }
// printf("out of loop");
//     return 0;
// }

// Q-2 Write a program to print the Fibonacci number.
// Hint: (Fibonacci series is 0, 1, 1, 2, 3, 5, 8,)

// #include <stdio.h>

// int main() {
//     int n, i, t1 = 0, t2 = 1, nextTerm;

//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series: ");

//     for (i = 1; i <= n; ++i) {
//         printf("%d, ", t1);
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }

//     printf("\n");
//     return 0;
// }

// Q-3 Write a program to find whether the given number is prime or not.

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int binaryNum, decimalNum = 0, remainder, n = 0;

//     printf("Enter a binary number: ");
//     scanf("%d", &binaryNum);

//     while (binaryNum != 0) {
//         remainder = binaryNum % 10;
//         decimalNum += remainder * pow(2, n);
//         binaryNum /= 10;
//         n++;
//     }

//     printf("Decimal equivalent: %d\n", decimalNum);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int binaryNum, decimalNum = 0, remainder, n = 0;

//     printf("Enter a binary number: ");
//     scanf("%d", &binaryNum);

//     for(;binaryNum!=0;)
//     }

//     printf("Decimal equivalent: %d\n", decimalNum);
//     return 0;
// }
//                                                      ###arrays

// #include <stdio.h>
// int main() {
//     int x=50;
//     int x=60;
//     int x=90;
//     int x=150;
//     int x=200;
//     printf("x=%d,x=%d,x=%d,x=%d,x=%d",x,x,x,x,x);

// }

// #include "stdio.h"
// int main(){
//     int i
//     printf("enter the value of i: ");
//     scanf("%d",&d);
// for(i=0;i<5;i++);
//     scanf(%d,&x[i]);
// }

// #include "stdio.h"

// int main(){
//     int *p=0;
//     p++;
//     pirntf("%a");

// }
// int main() {
//     int x=50;
//     int x=60;
//     int x=90;
//     int x=150;
//     int x=200;
//     printf("x=%d,x=%d,x=%d,x=%d,x=%d",x,x,x,x,x);

// }

// #include "stdio.h"
// int main(){
//     int i
//     printf("enter the value of i: ");
//     scanf("%d",&d);
// for(i=0;i<5;i++);
//     scanf(%d,&x[i]);
// }

// #include "stdio.h"

// int main(){
//     int *p=0;
//     p++;
//     pirntf("%a");

// }
// int main() {
//     int x=50;
//     int x=60;
//     int x=90;
//     int x=150;
//     int x=200;
//     printf("x=%d,x=%d,x=%d,x=%d,x=%d",x,x,x,x,x);

// }

// #include "stdio.h"
// int main(){
//     int i
//     printf("enter the value of i: ");
//     scanf("%d",&d);
// for(i=0;i<5;i++);
//     scanf(%d,&x[i]);
// }

// #include "stdio.h"

// int main(){
//     int *p=0;
//     p++;
//     pirntf("%a");

// }
// }

// #include "stdio.h"
// int main(){
//     int i
//     printf("enter the value of i: ");
//     scanf("%d",&d);
// for(i=0;i<5;i++);
//     scanf(%d,&x[i]);
// }

// #include "stdio.h"

// int main(){
//     int *p=0;
//     p++;
//     pirntf("%a");

// }

// }

// #include "stdio.h"
// int main(){
//     int i
//     printf("enter the value of i: ");
//     scanf("%d",&d);
// for(i=0;i<5;i++);
//     scanf(%d,&x[i]);
// }

// #include "stdio.h"

// int main(){
//     int *p=0;
//     p++;
//     pirntf("%a");

// }
// int main(){
//     int *p=0;
//     p++;
//     pirntf("%a");

// }

// #include <stdio.h>
// #include <math.h>

// // Function to calculate sin(x) using the sine series
// double sin_series(double x, int n_terms) {
//     double sin_value = 0.0;  // Initialize sum of the series

//     // Loop to calculate each term in the series
//     for (int n = 0; n < n_terms; n++) {
//         // Calculate the nth term of the series
//         double term = pow(-1, n) * pow(x, 2 * n + 1) / tgamma(2 * n + 2);  // tgamma(n) gives (n-1)!

//         // Add the term to the sum
//         sin_value += term;
//     }

//     return sin_value;
// }

// int main() {
//     double x;
//     int n_terms;

//     // Input: angle in radians and number of terms
//     printf("Enter the angle in radians (x): ");
//     scanf("%lf", &x);

//     printf("Enter the number of terms to sum (n): ");
//     scanf("%d", &n_terms);

//     // Calculate sin(x) using the series
//     double result = sin_series(x, n_terms);

//     // Output the result
//     printf("The value of sin(%.4f) using %d terms is: %.8f\n", x, n_terms, result);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {   char str[100];
// printf("Enter string\n");
// gets(str);
// puts(str);
// printf("%s\n",str);
// }

// ###Strings

// #include "stdio.h"
// int main(){
//     char str[30]="hello";
//     // printf("%.2s",str);
//     // printf("%10.4s sex\n",str);
//     // printf("&str" );
//     int c=0,i=0;
//     while(str[i]!='\0')
//     {
//         c++;
//         i++;
//     }
// }

// #include "stdio.h"                               this is the gets example mentioned in the notebook
// int main(){
//     char x;
//     x = getchar();
//     putchar(x);
// }

// #include <stdio.h>
// int main() {
//     int i,j,a[2][3]={{1,2,3},{1,2,3}},sum=0;
//         for(i=0;i<2;i++){
//             for(j=0;j<3;j++){

//                 printf("%d\t",a[i][j]);
//                 sum = sum +a[i][j];
//             }
//             printf("\n");
//         }
//         printf("The sum of the matrix is %d\n",sum);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i,j,a[2][3],sum=0;
//     printf("Enter the elements of a matrix\n");
//         for(i=0;i<2;i++){
//             for(j=0;j<3;j++){
//                 scanf("%d",&a[i][j]);
//             }
//         }
//         printf("The matrix is as follows...\n");
//         for(i=0;i<2;i++){
//             for(j=0;j<3;j++){
//                 printf("%d\t",a[i][j]);
//                 sum = sum +a[i][j];
//             }
//             printf("\n");
//         }
//         printf("The sum of the above matrix = %d\n",sum);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i,j,a[2][3]={{1,2,3},{1,2,3}},sum=0;
//     printf("the matrix is as follows...\n");
//         for(i=0;i<3;i++){
//             for(j=0;j<2;j++){
//                 printf("%d\t",a[j][i]);
//             }
//             printf("\n");
//         }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i,j,a[2][3]={{1,2,3},{1,2,3}},b[2][3]={{1,2,3},{1,2,3}},sum[2][3];
//         for(i=0;i<2;i++){
//             for(j=0;j<3;j++){
//                 sum[i][j] = b[i][j] +a[i][j];
//             }
//         }
//         printf("The sum of the matrix is %d\n",sum[i][j]);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i,a[3]={1,2,3},b[3]={1,2,3},sum=0;
//         for(i=0;i<3;i++){
//                 sum= sum +b[i] +a[i];
//             }

//         printf("The sum of the matrix is %d\n",sum);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i,j,a[3][3]={{1,1,-1},{1,0,0},{-1,0,5}},sk=0;
//     printf("the matrix is as follows...\n");
//         for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//         printf("%d\t",a[j][i]);
//     }
//     printf("\n");
// }
// for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//         if(a[i][j]==a[j][i]){
//                 sk=sk+1;
//         }
//         }
//     }
// if(sk==9){
//     printf("the matrix is skew symitric\n");
// }
// else{
//     printf("the matrix ain't skew symitric\n");
// }

//     return 0;
// }

// #include <stdio.h>
// int main(){
// int rows,num=1;
// printf("Enter the number of rows: ");
// scanf("%d",&rows);
// for(int i; i<=rows; i++){
//     for(int j; j<=i; j++ ){
//         printf("%d",num);
//         num++;
//     }
//     printf("\n");
// }
// return 0;
// }

// ###Pointers

// #include "stdio.h"
// int main(){
//     int a = 10,*p,**q;
//     p = &a;
//     q=&p;
//     printf("the address of a is : %d\n",&a);
//         printf("the address of a is : %x\n",&a);
//     printf ("the value at address a is : %x\n",p);
//     printf("the address of p is : %x\n",&p);
//     printf("the address of p is : %x\n",q);
// }

// #include "stdio.h"
// int main(){
//     int a = 10,*p = &a,**q=&p,***r;
//     ***r=69;
//     printf("the address of a is : %p\n",(void*)&a);
//         printf("the address of a is : %p\n",(void*)&a);
//     printf ("the value at address a is : %d\n",*p);
//     printf("the address of p is : %p\n",(void*)&p);
//     printf("the address of p is : %p\n",(void*)&q);
//     printf("the address of p is : %d\n",*(*q));
//     printf("the address of p is : %d\n",***r);                      //the value of r gets updated with 69

// }

// #include "stdio.h"
// int main(){
//     int a[5]={3,2,67,0,56};
//     int *p;
//     p=a;
//     // p++;
//     printf("%d %d \n",*++p,*++p);
// }

// #include "stdio.h"
// int main(){
//     int a[]={10,11,-1,56,67,5,4};
//     int *p,*q;
//     p=a;
//     q=&a[0]+3;
//     printf("%d %d %d\n",(*p)++,(*p)++,*(++p));
//     printf("%d\n",*p);
//     printf("%d\n",(*p)++);
//     q--;
//     printf("%d\n",(*(q+2))--);
//     printf("%d\n",*(p+2)-2);
//     printf("%d\n",*(p++ -2)-1);
// }

// # include "stdio.h"
// int main(){
//     int a=10,b=20,*p,*q,sum;
//     p=&a;
//     q=&b;
//     sum = *p+*q;
//     printf("sum is = %d\n",sum);

// }

// functions

// #include <stdio.h>
// void fun(int x, int y, int *p, int *q);
// int main(){
//     int a=1,b=20,c=30,d=50;
//     fun(a,b,&c,&d);
//     printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
// }
// void fun(int x,int y,int *p,int*q){
//     int sum,product ;
//     x=x+5,y=y+5;
//     *p=*p+10,*q=*q+20;
// product=*p**q;
// printf("sum=%d,product=%d",sum,product);
// }

// #include <stdio.h>

// // Function declaration (prototype)
// void fun(int x, int y, int *p, int *q);

// int main(){
//     int a = 1, b = 20, c = 30, d = 50;
//     fun(a, b, &c, &d);
//     printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
//     return 0;
// }

// void fun(int x, int y, int *p, int *q){
//     int sum, product;

//     // Modify values of x, y, p, q
//     x = x + 5;
//     y = y + 5;
//     *p = *p + 10;
//     *q = *q + 20;

//     // Calculate sum (you can decide how you want the sum)
//     sum = x + y + *p + *q;

//     // Calculate product
//     product = *p * *q;

//     // Output sum and product
//     printf("sum=%d, product=%d\n", sum, product);

//     }
// #include <stdio.h>
// fun(int m)
// int main()
// {
//     int n=5;
//     printf("%d",fun(m));
// }
// fun(int m)
// {
//     if(m==1)
//     return 1;
//     else
//     return 1 fun(m-1);
// }

// #include "stdio.h"
// void fun(int m);
// int main(){

//     fun(5);
// }
// void fun(int m)
// {
//     printf("%d\n",m);
//     if(m){
//     fun(m-1);
// }
// printf("%d\n",m);}

// #include <stdio.h>
// int main()
// {            float f=10.3%2;
// printf("%f",f);
// return 0;}

// #include <stdio.h>
// int main()
// {      float f=10/3+1;
// printf("%.3f",f);
// return 0;
// }

// void main(){enum color{R=10,G,B=26};
// Color c=G;
//  printf("%d",G);}
// (1.5 Points)

// void main()
// {
// float a=5.0;
// if(printf(“”))
// printf(“Hello”);
// else
// printf(“World”);
// }

// #include <stdio.h>
//   int main()
// {     int a[2] = {1, 2};
// printf("%d\n", (a[2]+1)++);
// return 0;
// }

// void main(){int a=5;
// if(a>2)
// printf("Hello");
// else;
// printf("World");}

// #include <stdio.h>
// int main() {   int a=10,*p;p=&a;printf("%d\n",*(p+1));
// return 0;}

// #include<stdio.h>
// main()
// {  int i ;
// if (scanf("%d",&i))
// printf ("hi") ;
// else
// printf ("bye") ;
// return 0;  }

// #include <stdio.h>
// void f1()
// { printf("hello");  }
// int main()
// { int f1 = 3;
// printf("%d", f1);
// return 0;  }

// #include <stdio.h>
// void f1()
// { printf("Hello");  }
// int main()
// { int f1 = 3;
// printf("%d", f1);
// return 0;  }

// #include "stdio.h"
// char fun();
// int main(){
//     char ch;
//     ch = fun();
//     printf("Entered character is %c\n",ch);
// }
// char fun(){
//     char c;
//     printf("Enter the character: ");
//     scanf("%c",&c);
//     return 'c';
// }

// // ###call by value
// #include "stdio.h"
// void fun(int,int);
// int main(){
//     int x=5,y=7;
//     fun(x,y);
//     printf("value inside main(calling function)\nx=%d,y=%d",x,y);
//     return 0;
// }
// void fun(int a,int b){
//     int x=7,y=5;
//     printf("valuse inside fun(called fucntion)\nx=%d,y=%d\n",x,y);
// }

// ##no argument without return type

// #include "stdio.h"
// int sum(void);
// int main(){
//     int s;
//     s = sum();
//     printf("sum=%d\n",s);
// }
// int sum(){
//     int x,y,sum;
//     printf("Enter the values of a and b: ");
//     scanf("%d %d",&x,&y);
//     sum = x + y;
//     return sum;
// }

// ####recursions
// #include "stdio.h"
// void display(int n){
//     if(n<1){
//         printf("0\n");
//         return;
//     }
//     else{
//         printf("%d\n",n);
//         display(n-1);
//         printf("%d\n",n);
//     }
// }
// int main(){
//     int n=6;
//     display(n);
// }

// #include "stdio.h"
// int factorial(int n){
//     if(n==0||n==1){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }
// int main(){
//     int n=6;
//     int result=factorial(n);
//     printf("The factorial of the function is %d\n",result);
// }

//                                                           ###structure

// #include "stdio.h"
// int main(){
// struct student{
//     int rollno ;
//     char name[50];

// }s1;
//     printf("enter the name and the rollno of the student to be displayed\n");
//     scanf("%d ",&s1.rollno);
//     fgets(s1.name,sizeof(s1.name),stdin);
//     printf("The rollno of the student is: %d\n" ,s1.rollno);
//     printf("The name of the student is: ");
//     puts(s1.name);

// }

// #include "stdio.h"
// int main(){
// struct personal{
//     char name[50];
//     int dateofjoining;
//     float salary;
// }s1;
//     printf("Enter the name the Date of joining and the salary of the Employ to be displayed\n");
//     fgets(s1.name,sizeof(s1.name),stdin);
//     scanf("%d ",&s1.dateofjoining);
//     scanf("%f",&s1.salary);
//     printf("The name of the Employ is:");
//     puts(s1.name);
//     printf("The Date of joining and the salary of the Employ is: %d & %0.2f\n" ,s1.dateofjoining,s1.salary);
// }

// Q-3 lab psuc
// #include "stdio.h"
// int main(){
//     int N,i,total=0,avg;
//     printf("Enter the number of employes");
//     scanf("%d",&N);
// struct personal{
//     int empno;
//     char name[50];
//     float salary;
//     float HRA;
// }s1[N];
//     printf("Enter the following details of the employe\n");
//     for(i=0;i<N;i++){
//         printf("\ndetails of enploye %d\n",(i+1));
//         printf("Emp-no: ");
//         scanf("%d",&s1[i].empno);
//         getchar();
//         printf("Name: ");
//         fgets(s1[i].name, sizeof(s1[i].name), stdin);
//         printf("Salary: ");
//         scanf("%f",&s1[i].salary);
//         printf("HRA: ");
//         scanf("%f",&s1[i].HRA);
//     }
//     for(i=0;i<N;i++){
//         total = total +(s1[i].salary+s1[i].HRA);
//     }
//     avg = total/N;
//     printf("\nTotal salary + HRA of all employees is: %d\n", total);
//     printf("Average salary + HRA: %d\n\n", avg);
//     printf("Details of employes whos Salary+HRA is more than average\n");
//     for (i=0;i<N;i++){
//         if((s1[i].salary+s1[i].HRA)>avg){
//             printf("EMP-NO: %d\nName: %ssalary: %0.2f\nHRA: %0.2f\n",s1[i].empno,s1[i].name,s1[i].salary,s1[i].HRA);
//         }
//     }
//     printf("Details of employes whos salary+HRA is less than average\n");
//     for (i=0;i<N;i++){
//         if((s1[i].salary+s1[i].HRA)<=avg){
//             printf("EMP-NO: %d\nName: %s\nsalary:%0.2f\nHRA: %0.2f\n",s1[i].empno,s1[i].name,s1[i].salary,s1[i].HRA);
//         }
//     }
// }

// #include <stdio.h>

// // Function to calculate the nth Fibonacci number using recursion
// int nthFibonacci(int n){
//     // Base case: if n is 0 or 1, return n
//     if (n <= 1){
//         return n;
//     }
//     // Recursive case: sum of the two preceding Fibonacci numbers
//     return nthFibonacci(n - 1) + nthFibonacci(n - 2);
// }

// int main(){
//     int n = 5;
//     int result = nthFibonacci(n);
//     printf("%d\n", result);e
//     return 0;
// }

// #include "stdio.h"
// int main(){
//     int a,b;
//     char sp;
//     float value;
//     printf("Enter the value of first number\n");
//     scanf("%d",&a);
//     printf("Enter the operandus\n");
//     while (getchar()!='\n');
//     scanf("%c",&sp);
//     printf("Enter the value of second number\n");
//     scanf("%d",&b);
//     switch(sp){
//         case '+':
//         value = a +b;
//         break;
//         case '-':
//         value = a - b;
//         break;
//         case '*':
//         value = a *b;
//         break;
//         case '/':
//         value = a /b;
//         break;
//     }
//     printf("the value of the equation is %f\n",value);
// }

// #include "stdio.h"
// int main(){
//     int a,i,x;
//     printf("Enter the number of students\n");
//     scanf("%d",&a);
//     struct student{
//         int rollnumber;
//         char name[50];
//         int marks[3];
//         int totalmarks;
//     }s1[a];
//     printf("Details filling coulumn\n");
//     for(i=0;i<a;i++){
//         printf("Enter the following details of student %d\nrollnumber: ",i);
//         scanf("%d",&s1[i].rollnumber);
//         getchar();
//         printf("Enter the name of the student: ");
//         fgets(s1[i].name,50,stdin);
//         printf("Enter the marks in 3 subjects: ");
//         for(int j=0;j<3;j++){
//             printf("subject number %d: ",(j+1));
//             scanf("%d",&s1[i].marks[j]);
//         }
//     }
//             for(int i=0;i<a;i++){
//                 s1[i].totalmarks = s1[i].marks[0]+s1[i].marks[1]+s1[i].marks[2];
//             }
//             for(int z =0;z<a;z++){
//                 for(x=0;x<a-z-1;x++){
//                 if (s1[x].totalmarks>s1[x+1].totalmarks){
//                 int temp = s1[x].totalmarks;
//                 s1[x].totalmarks=s1[x+1].totalmarks;
//                 s1[x+1].totalmarks=temp;

//                 struct student temp_student = s1[x];
//                 s1[x] = s1[x+1];
//                 s1[x+1]= temp_student;
//                 }
//             }
//         }
//         for(x=a;x>=0;x--){
//             printf("Roll number: %d\nName: %s\ntotal marks: %d",s1[x].rollnumber,s1[x].name,s1[x].totalmarks);
//         }
//     }

// #include "stdio.h"
// #include "string.h"
// int main(){
//     char name[50];
//     char surname[50];
//     printf("Enter the first name: ");
//     fgets(name,50,stdin);
//     printf("Enter the last name: ");
//     fgets(surname,50,stdin);
//     strcat(name,surname);
//     printf("The full name is %s\n",name);
// }

// #include "stdio.h"
// #include "string.h"
// int main(){
//     char name[50];
//     printf("Enter the name that is palindrome: ");
//     fgets(name,50,stdin);
//     strrev(name);
//     printf("The palindrome of the name is %s\n",name);
// }

// #include "stdio.h"
// #include "string.h"
// int main(){
//     char name[50];
//     printf("Enter the name please\n");
//     fgets(name,50,stdin);
//     int last =-1;
//     for(int i=0;name[i]!='\o';i++){
//         if(name[i]=='/'){
//             last= i;
//         }
//     }
//     printf("The last letter in the name is: %c",name[last]);
//     return 0;
// }

// #include "stdio.h"
// #include "string.h"
// int main(){
//     char name[50];
//     int c =0,i=0;
//     printf("Enter The name: ");
//     fgets(name,sizeof(name),stdin);
//     do{
//         c++;
//         }while(name[i++] != '\0');
//     if(name[strlen(name)-1]=='\n'){
//     c=c-2;
//     }
//     printf("The number of characters in the string is %d\n",c);
// }

// #include "stdio.h"
// int main(){
//     int i,j,n=5,num=5;
//     for(i=n;i>=1;i--){
//         for(j=i;j>=1;j--){
//             printf("%d",num);
//         }
//         num--;
//         printf("\n");
//     }
// }
// #include "stdio.h"
// int main(){
//     int i,j,n=5,num=5;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }

// #include "stdio.h"
// #include "string.h"
// int main(){
//     char place[100];
//     printf("Enter a string\n");
//     for(int i=0;i<100;i++){
//         scanf("%c",&place[i]);
//         if(getchar()=='\n'){
//             place[i]='\0';
//             break;
//         }
//     }
//     int c=0;
//     for (int j =0;j<100;j++){
//         if(place[j]!='\0'){
//             c++;
//         }
//         else{
//             break;
//         }
//     }
//     int a=0;
//     for(int k =0;k<c;k++){
//         if(place[k]=='a'){
//             a++;
//         }
//         else{
//             break;
//         }
//     }
// }

// #include "stdio.h"
// #include "string.h"
// int main(){
//     char str1[50],str2[50];
//     int c=0;
//     for(int i=0;i<50;i++){
//         scanf("%c",&str1[i]);
//         if(str1[i]=='\n'){
//             str1[i]='\0';
//             break;
//         }
//         c++;
//     }
//     for(int k=c;k>=0;k--){
//         str2[c-k-1]=str1[k];
//     }
//         if(strcmp(str2,str1)==0){
//             printf("The entered string is palindrome\n");
//         }
//         else{
//             printf("The entered string is not palindrome\n");
//         }
//     return 0;
// }

// #include "stdio.h"
// int main(){
//     int f1,f2,f3,i,q;
//     printf("Enter the number of terms: ");
//     scanf("%d",&q);
//     f1=0;
//     f2=1;
//     printf("%d,%d,",f1,f2);
//     for(i=0;i<q;i++){
//         f3=f1+f2;
//         printf("%d,",f3);
//         f1=f2;
//         f2=f3;
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// #include "math.h"

// int main() {
//     int num, originalNum, remainder, n = 0, result = 0;
//         printf("Enter a number: ");
//     scanf("%d", &num);
//     originalNum = num;
//     while (originalNum != 0) {
//         originalNum /= 10;fac
//         ++n;
//     }
//     originalNum = num;
//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result = result + pow(remainder,n);
//         originalNum = originalNum/ 10;
//     }
//     if (result == num)
//         printf("%d is an Armstrong number.\n", num);
//     else
//         printf("%d is not an Armstrong number.\n", num);

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int num, i, isPrime = 1;
//         printf("Enter a number: ");
//     scanf("%d", &num);
//     if (num <= 1) {
//         isPrime = 0;
//     }
//     for (i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             isPrime = 0;
//             break;
//         }
//     }
//     if (isPrime) {
//         printf("%d is a prime number.\n", num);
//     } else {
//         printf("%d is not a prime number.\n", num);
//     }
//     return 0;
// }

// #include "stdio.h"
// int main(){
//     int i,num,isprime=1;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     if(num<=0){
//         isprime=0;
//     }
//     for(i=2;i*i<=num;i++){
//         if(num%i==0){
//             isprime = 0;
//             break;
//         }
//     }
//     if(isprime){
//         printf("The entered number is a prime number\n");
//     }
//     else{
//         printf("The enterd number ain't a prime number\n");
//     }
// return 0;
// }

// #include "stdio.h"
// // #include "string.h"
// int main(){
//     int i;
//     char str[100];
//     fgets(str,sizeof(str),stdin);
//     for(i=0;str[i]!='\0';i++){
//         if(str[i]>='a'&&str[i]<='z')
//         str[i]=str[i]-32;
//     }
//     printf("%s",str);
// }

// #include "stdio.h"
// int main(){
//     char str[50];
//     printf("Enter the sting: ");
//     fgets(str,sizeof(str),stdin);
//     char *ptr;
//     int length=0;
//     ptr = str;
//     while(*ptr!='\0'){
//         length++;
//         ptr++;
//     }
//     printf("The length of the string is %d\n",length-1);
// }

// #include "stdio.h"
// int main(){
//     int i,j,k,rows,num=1;
//     printf("Enter the number of rows\n");
//     scanf("%d",&rows);
//     for(i=1;i<=rows;i++){
//         for(j=rows-i;j>=1;j--){
//             printf(" ");
//         }
//         for(k=1;k<=i;k++){
//         printf("%d",num);
//         num++;
//         }
//         printf("\n");
//     }
// }

// #include "stdio.h"
// int main(){
//     int i,j,rows=5,num=1;
//     for(i=1;i<=rows;i++){
//         if(i%2!=0){
//             num = i;
//         }
//         else{
//             num = i+1;
//         }
//         for(j=1;j<=i;j++){
//             printf("%d",num);
//             num+=2;
//         }
//         printf("\n");
//     }
// }

// #include "stdio.h"

// int main() {
//     int i, j, num, rows;

//     printf("Enter the number of rows\n");
//     scanf("%d", &rows);

//     num = 1;  // Initialize num to 1 (starting number for the first row)

//     for(i = 1; i <= rows; i++) {
//         // Print the numbers in the current row
//         for(j = 1; j <= i; j++) {
//             printf("%d ", num);
//             num += 2;  // Increment by 2 to follow the pattern (odd or even numbers)
//         }
//         printf("\n");  // Move to the next line after each row
//     }

//     return 0;
// }

// #include "stdio.h"
// int main(){
//     int num ,onum,reverse=0,remainder;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     onum = num;
//     while(onum!=0){
//         remainder = onum%10;
//         reverse = reverse *10 + remainder;
//         onum = onum /10;
//     }
//     if (reverse==num){
//         printf("The entered number is palindrome\n");
//     }
//     else{
//         printf("The entered number ain't palindrome");
//     }
// }

// #include "stdio.h"
// int main(){
//     int num,remainder=0,reverse=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     while(num!=0){
//         remainder = num % 10;
//         reverse = reverse*10 + remainder;
//         num/=10;
//     }
//     printf("The reverse of the number is: %d\n",reverse);

// }

// #include "stdio.h"
// int main(){
//     int i , j ,isprime=1;
//     printf("Enter the number: ");
//     scanf("%d",&i);
//     if(i<=0){
//         isprime=0;
//     }
//     for(j=2;j*j<=i;j++){
//         if(i%j==0){
//             isprime =0;
//         }
//     }
//     if (isprime){
//         printf("The enterd number is prime\n");
//     }

//     else{
//         printf("The entered number ain't prime");
//     }
// }

// #include "stdio.h"
// int main(){
//     int n,fact = 1;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     while(n>1){
//         fact = fact*n;
//         n = n-1;
//     }
//     printf("The value of th factorial of the number is: %d\n",fact);
// }

// #include "stdio.h"
// #include "math.h"
// int main(){
//     int i,k,binary,remainder=0,decimal=0;
//     printf("enter teh value of number: ");
//     scanf("%d",&binary);
//     while(binary !=0){
//         remainder = binary%10;
//         decimal = decimal + remainder*pow(2,i);
//         binary = binary/10;
//         i++;
//     }
//     printf("decimal= %d\n",decimal);
// }

// #include "stdio.h"
//     int sum(int,int){
//         int sum;
//         sum = a + b;
//         return sum;
//     }
//     int sum(int,int);
//     int a ,b;
//     printf("Enter the value of the two digits: ");
//     scanf("%d %d",&a,&b);
//     sum = sum();
//     }
// }

// #include "stdio.h"
// int fun(int x ,int y){
//     int sum=0;
//     sum = x+y;
//     return sum;
//     // printf("sum = %d\n",sum);
// }
// int main(){
//     int a =5,b=6,sum=0;
//     int s = fun(a,b);
//     printf
// ("sum = %d\n",s);
// }

// #include "stdio.h"
// // void function(int);
// void function(int k){
//     int fact=1;
//     while(k>1){
//         fact = fact*k;
//         k=k-1;
//     }
//     printf("The factorial of the function is %d\n",fact);
// }
// int main(){
//     int k;
//     printf("Enter the number to find the factorial: ");
//     scanf("%d",&k);
//     function(k);
//     return 0;
// }

// 2. Write a program to find the maximum of a given set of numbers using functions. (Use a function Max and return the result to the main function)
// #include "stdio.h"
// int MAX(int arr[],int size);
// int main(){
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements in the array: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int maximum;
//     maximum=MAX(arr,n);
//     int maxat=0;
//     for(int i=0;i<n;i++){
//         if(maximum==arr[i]){
//             maxat=i;
//         }
//     }
//     printf("The maximum value out of the given set is :%d\nThe maximum value is at index: %d\n",maximum,maxat+1);
// }
// int MAX(int arr[],int size){
//     int max,maxat;
//     max=arr[0];
//     for(int i=1;i<size;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     return max;
// }

// #include "stdio.h"
// int prime(int k){
//     int isprime =1;
//     if(k<1){
//         isprime=0;
//     }
//     for(int i=2;i*i<=k;i++){
//         if(k%i==0){
//             isprime = 0;
//             break;
//         }
//     }
//     return isprime;
// }
// int main(){
//     int i,num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     i = prime(num);
//     if(i){
//         printf("The entered number is a prime number\n");
//     }
//     else{
//         printf("The enterd number ain't a prime number\n");
//     }
// }

// #include "stdio.h"
// int main(){
//     int i,num,isprime=1;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     if(num<=0){
//         isprime=0;
//     }
//     for(i=2;i*i<=num;i++){
//         if(num%i==0){
//             isprime = 0;
//             break;
//         }
//     }
//     if(isprime){
//         printf("The entered number is a prime number\n");
//     }
//     else{
//         printf("The enterd number ain't a prime number\n");
//     }
// return 0;
// }

// #include "stdio.h"
// #include "string.h"
// int main(){
//     char name[50];
//     printf("Enter the name that is palindrome: ");
//     fgets(name,50,stdin);
//     char str[50];
//     for(int i=0;i<50;i++){
//         str[50-i-1]=name[i];
//     }
//     printf("The palindrome of the name is %s\n",str);
// }

// #include "stdio.h"
// char stringhandler(char str,int m);
// int main(){
//     char str1[50],str2[50];
//     int c=0;
//     for(int i=0;i<50;i++){
//         scanf("%c",&str1[i]);
//         if(str1[i]=='\n'){
//             str1[i]='\0';
//             break;
//         }
//         c++;
//         stringhadler(char str1[c],int c);
//     }
// }
// void stringhadler(char str1,int m){
//         int m = c;
//         char str2;
//         for(int k=c;k>=0;k--){
//         str2[c-k-1]=str1[k];
//     }
//     if(strcmp(str2,str1)==0){
//             printf("The entered string is palindrome\n");
//         }
//     else{
//             printf("The entered string is not palindrome\n");
//         }
// }

// #include "stdio.h"
// #include "string.h"
// int main(){
//     char str1[50],str2[50];
//     int c=0;
//     for(int i=0;i<50;i++){
//         scanf("%c",&str1[i]);
//         if(str1[i]=='\n'){
//             str1[i]='\0';
//             break;
//         }
//         c++;
//     }
//     for(int k=c;k>=0;k--){
//         str2[c-k-1]=str1[k];
//     }
//         if(strcmp(str2,str1)==0){
//             printf("The entered string is palindrome\n");
//         }
//         else{
//             printf("The entered string is not palindrome\n");
//         }
//     return 0;
// }

// #include "stdio.h"
// int factorial(int m);
// int main(){
//     int n=5;
//     int result = factorial(n);
//     printf("The factorial is %d",result);
// }
// int factorial(int m){
//     if(m==0||m==1){
//         return 1;
//     }
//     else{
//         return m*factorial(m-1);
//     }
// }

// #include "stdio.h"
// int main (){
//     struct date{
//         int day,month,year;
//     }s1;
//     printf("Enter the date: ");
//     scanf("%d %d %d",&s1.day,&s1.month,&s1.year);
//     if (s1.day>=32||s1.month>12){
//         printf("Enter a valid date\n");
//         return 0;
//     }
//     else if((s1.year%4==0&&s1.year%100==0)||(s1.year%400==0)){
//         if(s1.month==2){
//         if(s1.day<=15){
//             s1.day=s1.day+(45-32);
//             s1.month=s1.month+1;
//         }
//         else if(s1.day>15){
//             s1.day=s1.day+(45-31-32);
//             s1.month=s1.month+2;
//         }
//         }
//     else if(s1.month==1||s1.month==3||s1.month==5||s1.month==7||s1.month==8||s1.month==10){
//         if(s1.day<=15){
//             s1.day=s1.day+(45-31);
//             s1.month=s1.month+1;
//         }
//         else if(s1.day>15){
//             s1.day=s1.day+(45-30-31);
//             s1.month=s1.month+2;
//         }
//     }
//     else if(s1.month==4||s1.month==6||s1.month==9||s1.month==11){
//         if(s1.day<=15){
//             s1.day=s1.day+(45-31);
//             s1.month=s1.month+1;
//         }
//         else if(s1.day>15){
//             s1.day=s1.day+(45-31-30);
//             s1.month=s1.month+2;
//         }
//     }
//     else if(s1.month==11){
//         if(s1.day<=15){
//             s1.day=s1.day+(45-30);
//             s1.month=s1.month+1;
//         }
//         else if(s1.day>15){
//             s1.day=s1.day+(45-31-30);
//             s1.month=1;
//             s1.year=s1.year+1;
//         }
//     }
//     else if(s1.month==12){
//         if(s1.day<=15){
//             s1.day=s1.day+(45-31);
//             s1.month=1;
//             s1.year=s1.year+1;
//         }
//         else if(s1.day>15){
//             s1.day=s1.day+(45-30-31);
//             s1.month=2;
//             s1.year=s1.year+1;
//         }
//     }
//     }
//     else{
//         if(s1.month==2){
//         if(s1.day<=15){
//             s1.day=s1.day+(45-33);
//             s1.month=s1.month+1;
//         }
//         else if(s1.day>15){
//             s1.day=s1.day+(45-31-33);
//             s1.month=s1.month+2;
//         }
//         }
//     else if(s1.month==1||s1.month==3||s1.month==5||s1.month==7||s1.month==8||s1.month==10){
//         if(s1.day<=15){
//             s1.day=s1.day+(45-31);
//             s1.month=s1.month+1;
//         }
//         else if(s1.day>15){
//             s1.day=s1.day+(45-30-31);
//             s1.month=s1.month+2;
//         }
//     }
//     else if(s1.month==4||s1.month==6||s1.month==9||s1.month==11){
//         if(s1.day<=15){
//             s1.day=s1.day+(45-31);
//             s1.month=s1.month+1;
//         }
//         else if(s1.day>15){
//             s1.day=s1.day+(45-31-30);
//             s1.month=s1.month+2;
//         }
//     }
//     else if(s1.month==11){
//         if(s1.day<=15){
//             s1.day=s1.day+(45-30);
//             s1.month=s1.month+1;
//         }
//         else if(s1.day>15){
//             s1.day=s1.day+(45-31-30);
//             s1.month=1;
//             s1.year=s1.year+1;
//         }
//     }
//     else if(s1.month==12){
//         if(s1.day<=15){
//             s1.day=s1.day+(45-31);
//             s1.month=1;
//             s1.year=s1.year+1;
//         }
//         else if(s1.day>15){
//             s1.day=s1.day+(45-30-31);
//             s1.month=2;
//             s1.year=s1.year+1;
//         }
//     }
//     }
//     printf("The date after 45 days would be: %d/%d/%d\n",s1.day,s1.month,s1.year);
//     return 0;
// }

// #include "stdio.h"
// int main(){
//     int i,j,f;
//     for(i=0;i<5;i++){
//         for(j=0;j<i;j++){
//             printf("%d",i);
//         }
//     printf("\n");
//     }
// }

// #include "stdio.h"
// int sum(int,int);
// int main(){
//     int a,b;
//     printf("Enter the numbers you want to add\n");
//     scanf("%d %d",&a,&b);
//     int result=sum(a,b);
//     printf("The sum of the Entered numbers is %d",result);
// }
// int sum(int x,int y){
//     int sum=x+y;
//     return sum;
// }

// #include "stdio.h"
// int main(){
//     printf("HELLOW\n");
//}

// #include "stdio.h"
// int main(){
//     int a,b,sum=b+a;
//     printf("enter the value of a and b\n",sum);
//     scanf("%d",&a);
//     printf("The sum of a and b = %d\n",sum);
//     return 0;
// }

// #include "stdio.h"

// int sum(int, int);

// int main() {
//     int a, b;
//     printf("Program started...\n"); // Debug log
//     printf("Enter the numbers you want to add\n");
//     scanf("%d %d", &a, &b);
//     printf("Inputs received: a = %d, b = %d\n", a, b); // Debug log
//     int result = sum(a, b);
//     printf("The sum of the Entered numbers is %d\n", result);
//     return 0;
// }

// int sum(int x, int y) {
//     return x + y;
// }

// #include "stdio.h"
// int fact(int);
// int main(){
//     int a;
//     printf("Enter the to find the factorial for: ");
//     scanf("%d",&a);
//     int facto = fact(a);
//     printf("The factorial of the number is %d",facto);
// }
// int fact(int b){
//     int fact=1;
//     while(b>1){
//         fact = fact*b;
//         b=b-1;
//     }
//     return fact;
// }

// #include "stdio.h"
// int fact(int);
// int main(){
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     int result=fact(a);
//     printf("The factorial of the number is %d\n",result);
// }
// int fact(int a){
//     if(a==1||a==0){
//         return 1;
//     }
//     else{
//         return a*fact(a-1);
//     }
// }

// #include "stdio.h"
// int main(){
//     int f1=0,f2=1,up,f3=0;
//     printf("Enter the upper limit of the series: ");
//     scanf("%d",&up);
//     printf("%d %d ",f1,f2);
//     while (f3<=up)
//     {
//         f3=f1+f2;
//         printf("%d ",f3);
//         f1=f2;
//         f2=f3;
//     }
// return 0;
// }

// #include "stdio.h"
// int main(){
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter the elements in the array: ");
//     for(int s=0;s<n;s++){
//         scanf("%d",&a[s]);
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<=n-i-1;j++){
//             if(a[j]>=a[j+1]){
//                 int temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     for(int k=0;k<n;k++){
//         printf("%d ",a[k]);
//     }
// return 0;
// }

// #include "stdio.h"
// int main(){
//     int n=5;
//     int fact=1;
//     while(n>1){
//         fact=fact*(n);
//         n--;
//     }
//     printf("%d",fact);
// }

// #include "stdio.h"
// #include "stdlib.h"
// #include "time.h"
// int random(int a ){
//     int i;
//     int num=(rand()%(a%1));
//     return num;
// }
// int function(int n)
// {
//     int i;

//     if (n <= 0)
//     {
//         return 0;
//     }
//     else
//     {
//         i = random(n - 1);
//         printf("this\n");
//         return function(i) + function(n - 1 - i);
//     }
// }
// int main(){
//     function(6);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int random(int a) {
//     if (a <= 0) return 0;  // Ensure non-negative modulus
//     return rand() % a;     // Get a random number in range [0, a-1]
// }

// int function(int n) {
//     if (n <= 0) {
//         return 0;
//     } else {
//         int i = random(n); // Fixed function call
//         printf("this\n");
//         return function(i) + function(n - 1 - i);
//     }
// }

// int main() {
//     srand(time(0)); // Seed the random function
//     function(6);
//     return 0;
// }

// // malloc()funtion usage
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *ptr;
//     ptr = (int*) malloc(5 * sizeof(int));  // Allocate memory for 5 integers

//     if (ptr == NULL) {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     // Use the allocated memory
//     for (int i = 0; i < 5; i++) {
//         ptr[i] = i + 1;
//     }

//     // Print the allocated memory values
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", ptr[i]);
//         printf("%d",ptr[i]);
//     }

//     free(ptr);  // Always free the allocated memory when done
//     return 0;
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
//         for (i = 0; i < n; i++){
//             printf("%d ", *(ptr + i));
//         }
//             return 0;
// }






// #include "stdio.h"
// int main(){

// return 0;
// }

// #include "stdio.h"
// int main(){

// return 0;
// }

// #include "stdio.h"
// int main(){

// return 0;
// }

// #include "stdio.h"
// int main(){

// return 0;
// }

// #include "stdio.h"
// int main(){

// return 0;
// }



// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the name: ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         printf("P\n");
//     }
//     return 0;
// }        

#include <stdio.h> int main(){ printf("Gauransh Singh \n") return 0;}