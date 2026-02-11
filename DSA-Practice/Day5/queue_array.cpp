int main() {
    int q[5], front = 0, rear = -1;

    q[++rear] = 10;
    q[++rear] = 20;
    q[++rear] = 30;

    front++;   // dequeue

    for(int i = front; i <= rear; i++)
        cout << q[i] << " ";
}
