struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{30, NULL};
    Node* second = new Node{40, NULL};
    Node* third = new Node{50, NULL};

    head->next = second;
    second->next = third;

    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

