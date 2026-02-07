int main() {
    int arr[] = {10,20,30,40};
    int n = 4, key = 30;
    int pos = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos = i;
            break;
        }
    }

    cout << pos;
}
