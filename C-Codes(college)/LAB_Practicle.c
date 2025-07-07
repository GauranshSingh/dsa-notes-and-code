
// end term lab practical
// Q-1wite a c program to check whether the given string is a palindrom or not 

// #include <stdio.h>
// #include <string.h>
// int isPalindrome(char str[]) {
//     int l = 0,h=strlen(str)-1;
//     while (h>l) {
//         if (str[l]!=str[h]) {  
//             return 0;  
//         }
//         l++;
//         h--;
//     }
//     return 1;  
// }
// int main() {
//     char str[100];
//     printf("enter a lowercase string: ");  
//     fgets(str, 100, stdin);
//     str[strcspn(str, "\n")] = '\0';  
//     if (isPalindrome(str) == 1) {
//         printf("the given string is a palindrome.\n");  
//     } else {
//         printf("the given string is not a palindrome.\n"); 
//     }
// }

// Q2-write a program to find the factorial of a number usng a function
// #include <stdio.h>
// int f(int n) {
//     if (n == 0) {
//         return 1;
//     } else {
//         return n * f(n - 1);
//     }
// }
// int main() {5
//     int number;
//     printf("enter number");
//     scanf("%d", &number);
//     if (number < 0) {
//         printf("number enter is negative\n");
//     } else {
//         printf("factorial is %d\n",f(number));
//     }
//     return 0;
// }




// ans 1 
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int isPalindrome(char str[]) {
//     int l = 0;
//     int h = strlen(str) - 1;

//     while (h > l) {
//         if (tolower(str[l]) != tolower(str[h])) {
//             return 0;
//         }
//         l++;
//         h--;
//     }
//     return 1;
// }

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     gets(str);

//     if (isPalindrome(str)) {
//         printf("The string is a palindrome.\n");
//     } else {
//         printf("The string is not a palindrome.\n");
//     }

//     return 0;
// }



// ans -2 


// #include <stdio.h>

// Function to calculate factorial
// int factorial(int n) {
//     if (n == 0) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     if (number < 0) {
//         printf("Factorial of a negative number doesn't exist.\n");
//     } else {
//         printf("Factorial of %d is %d\n", number, factorial(number));
//     }

//     return 0;
// }

// int main() {
//     int n;

//     // Pattern 1
//     printf("Pattern 1:\n");
//     printPattern1(5); // This can be changed for different sizes

//     // Pattern 2
//     printf("\nPattern 2:\n");
//     printPattern2(5); // This can be changed for different sizes

//     // Pattern 3
//     printf("\nPattern 3:\n");
//     printPattern3(5); // This can be changed for different sizes

//     // Pattern 4
//     printf("\nPattern 4:\n");
//     printPattern4(5); // This can be changed for different sizes

//     // Pattern 5
//     printf("\nPattern 5:\n");
//     printPattern5(5); // This can be changed for different sizes

//     // Pattern 6
//     printf("\nPattern 6:\n");
//     printPattern6(5); // This can be changed for different sizes

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int num = 1, n;

//     // Input the number of rows for the pattern
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     // Loop to print the pattern
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", num++);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// find the length of the string in c without usingh string.h library function or 


// #include <stdio.h>

// int main(){
//     int num = 1,n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", num++);
//         }
//         printf("\n");
//     }
// }
// void printPattern2(int n) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
// }
// void printPattern3(int n) {
//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
// }
// void printPattern4(int n) {
//     int num = 1;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", num);
//             num++;
//         }
//         printf("\n");
//     }
// }
// void printPattern5(int n) {
//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// }
// void printPattern6(int n) {
//     int num = 1;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", num);
//             num += 2;
//         }
//         printf("\n");
//     }
// }


// #include "stdio.h"
// int main() {
//     int num, i, isPrime = 1;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if (num <= 1) {
//         isPrime = 0;  
//     }
//     else {
//         for (i = 2; i * i <= num; i++) {
//             if (num % i == 0) {
//                 isPrime = 0;  
//                 break;
//             }
//         }
//     }
//     if (isPrime)
//         printf("%d is a prime number.\n", num);
//     else
//         printf("%d is not a prime number.\n", num);
//     return 0;
// }


// #include "stdio.h"
// int main(){
//     int n,sum,o,t,h,k;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     if (n<10){
//         sum = n;
//     }
//     if(n>=10&&n<100){
//         t=n/10;
//         o=n-(t*10);
//         sum = o + t;
//     }
//     if(n<1000&n>=100){
//         h=n/100;
//         t=(n-(h*100))/10;
//         o=n-(h*100)-(t*10);
//         sum = o + t + h;
//     }
//     if(n>=1000&&n<10000){
//         k=n/1000;
//         h=(n-(k*1000))/100;
//         t=(n-(k*1000)-(h*100))/10;
//         o=n-(k*1000)-(h*100)-(t*10);
//         sum = o + t+ h+k;
//     }
//     printf("Sum of the number added = %d\n",sum);
//     return 0;
// }

// #include "stdio.h"
// int main(){
//     int i,j,rows=5,num=1;
//     for(i=1;i<=rows;i++){
//         for(j=1;j<=i;j++){
//             printf("*");
//             num=num+1;
//         }
//         printf("\n");
//     }
// }


// #include "stdio.h"
// int main(){
//     int i,j,rows=5,num=1;
//     for(i=5;i>=1;i--){
//         for(j=1;j<=i;j++){
//             printf("%d",i);
//             num=num+1;
//         }
//         printf("\n");
//     }
// }


// #include "stdio.h"
// int main(){
//     int i,j,odd=1,even=2,rows=5;
//     for(i=1;i<rows;i++){
//         for(j=1;j<=i;j++){
//             if(i%2==0){
//                 printf("%d",odd);
//                 odd=odd+1;
//             }
//             else{
//                 printf("%d",even);
//                 even=even+1;
//             }
//         }
//         printf("\n");
//     }

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
// int main(){
//     printf("The best is the fact");
// }




// #include <stdio.h>

// Function to calculate sum
// int sum(int, int);

// int main() {
//     int a, b;

//     // Print the initial prompt and flush to ensure it appears immediately
//     printf("Program started...\n");
//     printf("Enter the numbers you want to add: ");
//     fflush(stdout);  // Ensures the output is displayed immediately

//     // Take input from the user
//     if (scanf("%d %d", &a, &b) != 2) {
//         printf("Invalid input. Please enter two integers separated by a space.\n");
//         return 1;  // Exit with an error code
//     }

//     // Calculate and display the sum
//     int result = sum(a, b);
//     printf("The sum of the entered numbers is: %d\n", result);

//     return 0;
// }

// // Function definition
// int sum(int x, int y) {
//     return x + y;
// }
