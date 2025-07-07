// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int key;
//     int height;
//     struct node*left;
//     struct node*right;
// };
// int get_height(struct node*n){
//     if(n==NULL){
//         return 0;
//     }
//     else{
//         return n->height;
//     }
// }
// struct node* creat_node(int key){
//     struct node*n=(struct node*)malloc(sizeof(struct node));
//     n->key=key;
//     n->height=1;
//     n->left=NULL;
//     n->right=NULL;
//     return n;
// }
// int getBalanceFator(struct node*n){
//     if(n==NULL){
//         return 0;
//     }
//     return get_height(n->left)-get_height(n->right);
// }
// struct Node* left_rotate(struct node*y){
//     struct node*x=y->left;
//     struct node*t2=y->right;

//     x->right=y;
//     y->left=t2;

//     y->height=max(get_height(y->left),get_height(y->right)) +1;//this step calculates the heigth of the nodes by finding the height of the left and the rigth of the node and checking for the heighest height and adding +1 to it for the height of the node 
//     x->height=max(get_height(x->left),get_height(x->right)) +1;

//     return x;
// }
// struct Node* right_rotate(struct node*x){
//     struct node*y=x->right;
//     struct node*t2=y->left;

//     x->right=t2;
//     y->left=x;

//     y->height=max(get_height(y->left),get_height(y->right)) +1;//this step calculates the heigth of the nodes by finding the height of the left and the rigth of the node and checking for the heighest height and adding +1 to it for the height of the node 
//     x->height=max(get_height(x->left),get_height(x->right)) +1;

//     return y;
// }

// struct Node *insert(struct Node* n, int key){
//     if(n==NULL){
//         return(create_node(key));
//     }
//     if(key<n->key){
//         n->left=insert(n->left,key);
//     }
//     else{
//         n->right=insert(n->right,key);
//     }
//     return n;
//     n->height=max(get_height(n->left),get_height(n->right)) +1;
//     int bf=getBalanceFator(n);

//     //left left case
//      if(bf>1&&key < n->left->key){
//         right_rotate(n);
//     }
//     if(bf<1&&key > n->left->key){
//         right_rotate(n);
//     }
//     if(bf>1&&key > n->left->key){
//         right_rotate(n);
//     }
//     if(bf<1&&key > n->left->key){
//         right_rotate(n);
//     }
// int main(){

//     return 0;
// }







//avl tree full code(rotation left right(LL,RR,LR,RL))(CODE WITH HARRY)
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};
int getHeight(struct Node *n){
    if(n==NULL)
        return 0;
    return n->height;
}
struct Node *createNode(int key){
    struct Node* node = (struct Node *) malloc(sizeof(struct Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}
int max (int a, int b){
    return (a>b)?a:b;
}
int getBalanceFactor(struct Node * n){
    if(n==NULL){
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
}
struct Node* rightRotate(struct Node* y){
    struct Node* x = y->left;
    struct Node* T2 = x->right;
 
    x->right = y;
    y->left = T2;
 
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    return x;
}
struct Node* leftRotate(struct Node* x){
    struct Node* y = x->right;
    struct Node* T2 = y->left;
 
    y->left = x;
    x->right = T2;
 
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
 
    return y;
}
struct Node *insert(struct Node* node, int key){
    if (node == NULL)
        return  createNode(key);
 
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
 
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int bf = getBalanceFactor(node);
 
    // Left Left Case
        if(bf>1 && key < node->left->key){
            return rightRotate(node);
        }
    // Right Right Case
        if(bf<-1 && key > node->right->key){
            return leftRotate(node);
        }
    // Left Right Case
    if(bf>1 && key > node->left->key){
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
    // Right Left Case
    if(bf<-1 && key < node->right->key){
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
    return node;
}
void preOrder(struct Node *root)
{
    if(root != NULL)
    {
        printf("%d ", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main(){
    struct Node * root = NULL;
 
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    preOrder(root);
    return 0;
}