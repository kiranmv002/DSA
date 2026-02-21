struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *newNode;

    for(int i=1;i<=3;i++){
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = i*10;
        newNode->next = head;
        head = newNode;
    }

    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
