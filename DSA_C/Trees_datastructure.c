


// //preorder traversal in binary tree
// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };
// struct node* createnode(int data){
//     struct node*n;
//     n=(struct node*) malloc(sizeof(struct node));
//     n->data=data;
//     n->left=NULL;
//     n->right=NULL;
//     return n;
// }
// void preorder_traversal(struct node*root){
//     if(root!=NULL){
//         printf("%d\t",root->data);
//         preorder_traversal(root->left);
//         preorder_traversal(root->right);
//     }
// }
// int main(){
//     struct node*p=createnode(12);
//     struct node*p1=createnode(3);
//     struct node*p2=createnode(12);
//     struct node*p3=createnode(4);
//     struct node*p4=createnode(12);
//     struct node*p5=createnode(12);
//     p->left=p1;
//     p->right=p2;
//     p1->right=p3;
//     p1->left=p4;
//     preorder_traversal(p);
//     return 0;
// }






//preorder traversal in binary tree(code with harry)
// #include<stdio.h>
// #include<malloc.h>

// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };

// struct node* createNode(int data){
//     struct node *n; // creating a node pointer
//     n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data; // Setting the data
//     n->left = NULL; // Setting the left and right children to NULL
//     n->right = NULL; // Setting the left and right children to NULL
//     return n; // Finally returning the created node
// }

// void preOrder(struct  node* root){
//     if(root!=NULL){
//         printf("%d ", root->data);
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }

// int main(){
     
//     // Constructing the root node - Using Function (Recommended)
//     struct node *p = createNode(4);
//     struct node *p1 = createNode(1);
//     struct node *p2 = createNode(6);
//     struct node *p3 = createNode(5);
//     struct node *p4 = createNode(2);
//     // Finally The tree looks like this:
//     //      4
//     //     / \
//     //    1   6
//     //   / \
//     //  5   2  

//     // Linking the root node with left and right children
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;

//     preOrder(p);
//     return 0;
// }





// //post order traversal
// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node*left;
//     struct node*right;
// };
// struct node* create_node(int data){
//     struct node* root=(struct node*) malloc(sizeof(struct node));
//     root->data=data;
//     root->left=NULL;
//     root->right=NULL;
//     return root;
// }
// void postorder_traversal(struct node*root){
//     if(root!=NULL){
//         postorder_traversal(root->left);
//         postorder_traversal(root->right);
//         printf("%d\t",root->data);
//     }
// }
// int main(){
//     struct node*p=create_node(12);
//     struct node*p1=create_node(13);
//     struct node*p2=create_node(14);
//     struct node*p3=create_node(15);
//     struct node*p4=create_node(16);
//     p->left=p1;
//     p->right=p2;
//     p1->left=p3;
//     p1->right=p4;
//     postorder_traversal(p);
//     return 0;
// }





// //inorder traversal of binary tree(mine)
// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node*left;
//     struct node*right;
// };
// struct node* createnode(int data){
//     struct node*root=(struct node *) malloc(sizeof(struct node));
//     root->data=data;
//     root->left=NULL;
//     root->right=NULL;
//     return root;
// }
// void inorder_traversal(struct node*root){
//     if(root!=NULL){
//         inorder_traversal(root->left);
//         printf("%d\t",root->data);
//         inorder_traversal(root->right);
//     }
// }
// int main(){
//     struct node*p=createnode(12);
//     struct node*p1=createnode(13);
//     struct node*p2=createnode(14);
//     struct node*p3=createnode(125);
//     struct node*p4=createnode(7);
//     p->left=p1;
//     p->right=p2;
//     p1->right=p3;
//     p1->left=p4;
//     inorder_traversal(p);
//     return 0;
// }