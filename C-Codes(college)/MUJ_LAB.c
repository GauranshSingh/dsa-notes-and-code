// #include "stdio.h"
// int main(){


    
//     return 0;
// }



//                                                            ###lab-1

// Q-3
// #include "stdio.h"
// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("The entered number is even\n");
//         }
//         else{
//             printf("The enterd number is odd\n");
//         }
//         return 0;
//     }


// Q-8
// #include "stdio.h"
// int main(){
//     int p,r,t,si;
//     printf("Enter the principle amount upon which the interest has to be calculated: ");
//     scanf("%d",&p);
//     printf("Enter the rate of interest: ");
//     scanf("%d",&r);
//     printf("Enter the number of days the interest has been layed off: ");
//     scanf("%d",&t);
//     si = (p*r*t)/100;
//     printf("The simple interst calculated is: %d",si);
//     return 0;
// }

//                                                          ####lab-3
// Q-2
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
//     printf("Sum of the number added = &d\n",sum);
//     return 0;
// }



// // Q-4
// #include "stdio.h"
// int main(){
//     int d ,mm,cm,i,f;
//     printf("Enter the distance(in mm) : ");
//     scanf("%d",&d);
//     if(d<10){
//         printf("The distance is %dmm\n",d);
//     }
//     else if(d>=10&&d<25){
//         cm = d/10;
//         mm= d-(cm*10);
//         printf("The distance is %dcm %dmm\n",cm,mm);
//     }
//     else if(d>10&&d<=25){
//         i = d/25;
//         cm = (d-(i*25))/10;
//         mm = d-(i*25)-(cm*10);
//         printf("The distance is %dinch %dcm %dmm\n",i,cm,mm);
//     }
//     else if (d>=300){
//         f=d/300;
//         i=(d-(f*300))/25;
//         cm = (d-(f*300)-(i*25))/10;
//         mm = d-(f*300)-(i*25)-(cm*10);
//         printf("The distance is %dfeet %dinch %dcm %dmm\n",f,i,cm,mm);
//     }
//     return 0;
// }



// Q-5
// #include "stdio.h"
// #include "math.h"
// int main(){
//     int x1,x2,y1,y2;
//     float d;
//     printf("Enter the co-ordiantes of the point 1: ");
//     scanf("%d %d",&x1,&y1);
//     printf("Enter the co-ordiantes of the point 2: ");
//     scanf("%d %d",&x2,&y2);
//     d = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
//     printf("The distance between the points is %f\n",d);
//     return 0;
// }

// #include "stdio.h"
// int main(){
//     int a,b;
//     printf("Enter the value of a: ");
//     scanf("%d",&a);
//     printf("Enter the value of b: ");
//     scanf("%d",&b);
//     printf("Entered values are\na=%d,b=%d\n",a,b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("The values after interchangeing is \na=%d,b=%d\n",a,b);
//     return 0;
// }

// Q-2
// #include "stdio.h"
// int main(){
//     int y;
//     printf("Enter the year: ");
//     scanf("%d",&y);
//     if((y%4==0&&y%100!=0)||y%400==0){
//         printf("The year entered is a leap year\n");
//     }
//     else{
//         printf("The year ain't a leap year\n");
//     }
// }


// Q-3
// #include "stdio.h"
// #include "math.h"
// int main(){
//     int a ,b,c,discriminant;
//     float root1,root2,root1i,root2i;
//     printf("Enter the coefficient of x^2; ");
//     scanf("%d",&a);  
//     printf("Enter the coefficient of x; ");
//     scanf("%d",&b);
//     printf("Enter the constant in the equation: ");
//     scanf("%d",&c);
//     if (a==0){
//         printf("Entered quadratic equation is invalid\n");
//         return 0;
//     }
//     discriminant = (b*b)-(4*a*c);
//     if (discriminant<0){
//     root1 = -(b)/(2*a);
//     root1i = (sqrt(-discriminant))/(2*a);
//     root2 = -(b)/(2*a);
//     root2i = (sqrt(-discriminant))/(2*a);
//     printf("The roots are %f,%fi and %f,%fi\n",root1,root1i,root2,root2i);
//     }
//     else{
//         root1 = (-b+sqrt((b*b)-(4*a*c)))/(2*a);
//         root2 = (-b-sqrt((b*b)-(4*a*c)))/(2*a);
//         printf("The roots of the quadratic equation are %f & %f\n",root1,root2);
//     }
//     return 0;
// }


// Q-8
// #include "stdio.h"
// int main(){
//     char a;
//     printf("Enter anything");
//     scanf("%c",&a);
//     if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
//         printf("This is a vowel\n");
//     }
//     else if(a=='0'||a=='1'||a=='2'||a=='3'||a=='4'||a=='5'||a=='6'||a=='7'||a=='8'||a=='9'){
//         printf("This is a digit\n");
//     }
//     else{
//         printf("This is a consonent\n");
//     }
// }

//                                                  ###Lab-5


// Q-4
// #include "stdio.h"
// int main(){
//     int a,b;
//     char sp;
//     float value;
//     printf("Enter the equation\n");
//     scanf("%d%c%d",&a,&sp,&b);
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

// ###                                                                      lab-8

// // Q-1
// #include "stdio.h"
// int main(){
//     int arr[5]={-69,2,3,4,69},s=arr[0],l=arr[0];
//     for(int i=0;i<5;i++){
//         if(s>arr[i]){
//         s=arr[i];
//         }
//         if(l<arr[i]){
//         l = arr[i];
//         }
//     }
//     printf("smallest value is %d and the largest value is %d\n",s,l);
// }


// // Q3
// #include "stdio.h"
// int main(){
//     int arr[]={-69,2,3,4,69,465,4,5,6},a,b,n;
//     printf("enter the indexes you want to include in the array");
//     scanf("%d %d",&a,&b);
//     n=b-a+1;
//     int subarr[n];
//     for(int i=a;i<=b;i++){
//             subarr[i-a]=arr[i];
//         }
//     for(int j=0;j<n;j++){
//         printf("%d\n",subarr[j]);
//     }
// }


// // Q8
// #include "stdio.h"
// int main(){
//     int arr[]={69,2,3,4,69,465,4,5,6,69};
//     int subarr1[5],subarr2[5];
//     for(int i=0;i<=9;i++){
//             if(i<5){
//             subarr1[i]=arr[i];
//             }
//             if(i>=5){
//                 subarr2[i-5]=arr[i];
//             }
//     }
//     for(int j=0;j<=4;j++){
//         printf("%d\n",subarr1[j]);
//     }
//     printf("array 2\n");
//     for(int j=0;j<=4;j++){
//         printf("%d\n",subarr2[j]);
//     }
// }

// Q-7
// #include "stdio.h"
// int main(){
//     int  n;
//     printf("Enter the number of elements to be stored in the array\n");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter the elements of the array\n");
//     for(int g=0;g<n;g++){
//         scanf("%d",&arr[g]);
//     }
//     for(int i =0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j]= arr[j+1];
//                 arr[j+j]=temp;
//             }
//         }
//     }
//     for(int k =0;k<n;k++){
//         printf("%d\n",arr[k]);
//     }
// }

//                                                                              ####lab-9
// // // Q-1
// #include "stdio.h"
// int main(){

//     int arr[3][5],totalofstudents[3]={0,0,0},totalmarksinsubject[5]={0,0,0,0,0},average[5];
//     printf("Enter the elements of array\n");
//     for(int i=0;i<3;i++){
//         printf("Marks of the student number %d\n",i);
//         for(int j=0; j<5;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int k =0;k<3;k++){
//         totalofstudents[k]=0;
//         for(int g=0; g<5;g++){
//             totalofstudents[k]=totalofstudents[k] + arr[k][g];
//         }
//     }   
//     for(int a =0;a<3;a++){
//         for(int b=0; b<5;b++){
//             totalmarksinsubject[b]=totalmarksinsubject[b] + arr[a][b];
//         }
//     }
//     for(int s=0;s<5;s++){
//         average[s]=(totalmarksinsubject[s]/5);
//     }
//     for(int q=0;q<3;q++){
//         printf("total marks of student number %d is %d\n",q,totalofstudents[q]);
//     }
//     for(int w=0;w<5;w++){
//     printf("average marks in subject number %d is %d\n",w,average[w]);
//     }
// }


// 3. Write a program to multiply two matrices.
// #include "stdio.h"
// int main(){
//     int i,j,x,y,sum ;
//     printf("Enter the number of rows and coloumns of matrix-1\n");
//     scanf("%d%d",&i,&j);
//     int arr1[i][j];
//     for(int a=0;a<i;a++){
//         for(int b =0;b<j;b++){
//             scanf("%d",&arr1[a][b]);
//         }
//         printf("Enter the elements of next row\n");
//     }
//     printf("Enter the number of rows and coloumns of matrix-2\n");
//     scanf("%d%d",&x,&y);
//     if(j!=x){
//         printf("The matrix is invalid\n");
//         return 0;
//     }
//     int arr2[x][y];
//     for(int w=0;w<x;w++){
//         for(int b =0;b<y;b++){
//             scanf("%d",&arr2[w][b]);
//         }
//         printf("Enter the elements of next row\n");
//     }
//     int multiple[j][x];
//     for(int s=0;s<i;s++){
//         for(int e=0;e<y;e++){
//             sum=0;
//             for(int g=0;g<j;g++){
//             sum=sum+(arr1[s][g]*arr2[g][e]);
//             }
//             multiple[i][y]=sum;
//         }
//     }
// for (int f=0;f<x;f++){
//     for(int i=0;i<j;i++){
//         printf("%d\t",multiple[f][i]);
//     }
//     printf("\n");
// }
// }


// #include "stdio.h"
// int main(){
//     int i ,a, b;
//     char arr[50];
//     printf("Enter the indexes of the substring: ");
//     scanf("%d %d",&a,&b);
//     int n = b-a+1;
//     char subarr[n];
//     for(i=a;i<=b;i++){
//         subarr[i-a],arr[i];
//     }
//     puts(subarr);
// }



// #include "stdio.h"
// #include "string.h"
// int main(){
//     int i, a, b;
//     char arr[50];
//     printf("Enter the string: ");
//     fgets(arr, sizeof(arr), stdin);
    // arr[strcspn(arr, "\n")] = '\0';
//     printf("Enter the start and end indexes of the substring: ");
//     scanf("%d %d", &a, &b);
//     if (a < 0 || b >= strlen(arr) || a > b) {
//         printf("Invalid indexes.\n");
//         return 1;
//     }
//     int n = b - a + 1;
//     char subarr[n + 1];
//     for(i = a; i <= b; i++) {
//         subarr[i - a] = arr[i];  
//     }
//     subarr[n] = '\0';  
//     printf("The substring is: %s\n", subarr);
//     return 0;
// }





// #include "stdio.h"
// #include "string.h"
// int main(){
//     char str1[10],str2[10];
//     printf("Enter the palindrome name: ");
//     fgets(str1,sizeof(str1),stdin);
//     strcpy(str1,str2);
//     strrev(str2);
//     if(strcmp(str1,str2)==0){
//         printf("The string is palindrome");
//     }
//     else{
//         printf("The string aint palindrome");
//     }
// }

// #include "stdio.h"
// int main(){
//     int mat1[4][3],mat2[3][2],i,j,k, sum;
//     printf("Enter the elements of the first matrix:\n");
//     for(i=0;i<4;i++){
//         for(j=0;j<3;j++){
//             scanf("%d",&mat1[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<2;j++){
//             scanf("%d",&mat2[i][j]);
//         }
//     }
//     int mul[4][2];
//     for(i=0;i<4;i++){
//         for(j=0;j<2;j++){
//             sum=0;
//             for(k=0;k<3;k++){
//                 sum=sum+(mat1[i][k]*mat2[k][j]);
//             }
//         mul[i][j]=sum;
//         }
//     }
//     for(i=0;i<4;i++){
//         for(j=0;j<2;j++){
//             printf("%d\t",mul[i][j]);
//         }
//         printf("\n");
//     }


// }





// #include "stdio.h"
// int main(){
//     int a=5,b=6;
//     int *p,*q;
//     p=&b;
//     q=&a;
//     a =*p;
//     b=*q;
//     printf("%d %d\n",a,b);
// }







// #include "stdio.h"
// int main(){
//     printf("Enter the number of empoyes: ");
//     int n,sum;
//     scanf("%d",n);
//     struct student{
//         int roll;
//         char name[50];
//         int marks[3];
//         int totalmarks;
//     }s1[n];
//     printf("Enter the details of the employ...\n");
//     for(int i=0;i<n;i++){
//         printf("Enter the marks of student number %d\n",i+1);
//         printf("Roll Number: ");
//         scanf("%d",&s1[i].name);
//         printf("Name: ");
//         fgets(s1[i].name,50,stdin);
//         printf("Marks\n");
//         for(int j=0;j<3;j++){
//             printf("Subject-%d\n: ",j+1);
//             scanf("%d",&s1[i].marks[j]);
//         }
//     }
//     for(int k=0;k<n;k++){
//         sum=0;
//         for(int m=0;m<3;m++){
//             sum=sum+s1[k].marks[m];
//         }
//         s1[k].totalmarks=sum;
//     }
//     int temp;
//     for(int t=0;t<n;t++){
//         for(int u=0;u<n-t;u++){
//             if(s1[u].totalmarks>s1[u+1].totalmarks){
//                 temp = s1[u];
//                 s1[u] = s1[u+1];
//                 s1[u+1] = temp;

//             }
//         }
//     }
    



// }


// 1. Write a program to print different patterns using nestedloops.
// 1
// 23
// 456
// 7 8 9 10
// 11 12 13 14 15

// #include "stdio.h"
// int main(){
//     int i ,j,num=1;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf("*");
//             num++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include "stdio.h"
// int main(){
//     int i,j,n=5;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//         printf("%d",i);
//         }
//     printf("\n");
//     }
//     for(i=5;i>=1;i--){
//         for(j=i;j>=1;j--){
//             printf("%d",i);
//         }
//         printf("\n");
//     }
// }

// #include "stdio.h"
// int main(){
//     int i,j,n=5;
//     for(i=1;i<=n;i++){
//         for(j=1;j<i;j++){
//             printf("%d",n);
//             n+=2;
//         }
//         printf("\n");
//     }
// }



// #include "stdio.h"
// int main(){
//     int a =10,b=19,sum;
//     int *p,*q;
//     p=&a,q=&b;
//     sum = *p+*q;
//     printf("%d\n",sum);  
// }


// #include "stdio.h"
// int main(){
//     int a,b,c;
//     printf("Enter the value of a,b&c\n");
//     scanf("%d %d %d",&a,&b,&c);
//     int *p,*q,*r;
//     p=&a;
//     q=&b;
//     r=&c;
//     if(*p>*q&&*p>*r){
//         printf("The value of a is the greatest");
//     }
//     else if (*r>*q){
//         printf("The value of c is the greatest");
//     }
//     else{
//         printf("The value of b is the greatest");
//     }
// }


// Q-4-Write a program to compute the sum of all elements stored in an array using a pointer.
// #include "stdio.h"
// int main(){
//     int sum =0 ,arr[5]={1,2,3,4,5};
//     int *p;
//     for(int i=0;i<5;i++){
//         p=&arr[i];
//         sum = sum + *p;
//     }
//     printf("The value of sum of array is %d\n",sum);
// }

// Q-5. Write a program to determine whether a substring (string 1) is in the main string or not.If present,
// return the pointer of the first occurrence.
// #include "stdio.h"
// int main(){
//     char str[50];
//     char substr[25];
//     char *p,*q;
//     printf("Enter the first string: ");
//     fgets(str,sizeof(str),stdin);
//     printf("Enter the second string: ");
//     fgets(substr,sizeof(substr),stdin);
//     p=&str;
//     q=&substr;
//     for(int i=0;i<50;i++){
//         if
//     }
// }



// #include "stdio.h"
// int main(){
//     int a =2138;
//     int b = 2261;
//     int c ;
//     c = b-a;
//     printf("The achievement is %d\n",c);
// }










  