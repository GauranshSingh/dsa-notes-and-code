#include <iostream>
#include <memory> // Required for std::unique_ptr

// Use a class to define the tree node
class Node {
public:
    int data;
    std::unique_ptr<Node> left;
    std::unique_ptr<Node> right;

    // A constructor to initialize the node, replacing the need for createnode()
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// The traversal logic is the same, just using C++ I/O (cout)
void preorder_traversal(const Node* root) {
    if (root != nullptr) {
        std::cout << root->data << "\t";
        preorder_traversal(root->left.get());
        preorder_traversal(root->right.get());
    }
}

int main() {
    // Create the root node using std::make_unique.
    // Memory will be managed automatically. No need for malloc or new/delete.
    auto root = std::make_unique<Node>(12);

    // Link the nodes together
    root->left = std::make_unique<Node>(3);
    root->right = std::make_unique<Node>(12);
    root->left->right = std::make_unique<Node>(4);
    root->left->left = std::make_unique<Node>(12);
    
    // We can't create p5 from your original code because p2->left and p2->right are not set.

    std::cout << "Preorder Traversal:" << std::endl;
    preorder_traversal(root.get());
    std::cout << std::endl;

    return 0; // When main ends, all unique_ptrs are destroyed, automatically freeing memory.
}