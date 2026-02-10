int main() {
    int st[5], top = -1;

    st[++top] = 10;
    st[++top] = 20;
    st[++top] = 30;

    top--;   // pop

    for(int i = top; i >= 0; i--)
        cout << st[i] << " ";
}
