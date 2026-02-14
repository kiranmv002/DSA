struct Node {
    int data;
    Node* left;
    Node* right;
};

void inorder(Node* root) {
    if(root == 0) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = new Node{1,0,0};
    root->left = new Node{2,0,0};
    root->right = new Node{3,0,0};

    inorder(root);
}
