struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, 0};
    head->next = new Node{20, 0};
    head->next->next = new Node{30, 0};

    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
