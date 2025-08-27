
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