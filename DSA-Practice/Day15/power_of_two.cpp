int main() {
    int n = 18;
    if(n > 0 && (n & (n-1)) == 0)
        cout << "Yes";
    else
        cout << "No";
}
