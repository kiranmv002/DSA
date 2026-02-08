
#include <bits/stdc++.h>
using namespace std;

#define MAX 5
int st[MAX], top = -1;

void push(int x) {
    if(top == MAX-1) {
        cout << "Stack Overflow\n";
        return;
    }
    st[++top] = x;
}

void pop() {
    if(top == -1) {
        cout << "Stack Underflow\n";
        return;
    }
    top--;
}

void display() {
    for(int i = top; i >= 0; i--)
        cout << st[i] << " ";
}

int main() {
    push(10);
    push(20);
    push(30);
    pop();
    display();
}



