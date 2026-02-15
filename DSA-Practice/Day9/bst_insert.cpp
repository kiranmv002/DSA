struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int val) {
    if(root == 0) return new Node{val,0,0};
    if(val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

int main() {
    Node* root = 0;
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 15);
}
