struct Node {
    int data;
    Node* left;
    Node* right;
};

void preorder(Node* root) {
    if(root == 0) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    Node* root = new Node{1,0,0};
    root->left = new Node{2,0,0};
    root->right = new Node{3,0,0};

    preorder(root);
}
