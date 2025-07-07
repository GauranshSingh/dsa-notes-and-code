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