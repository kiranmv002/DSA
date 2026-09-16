// Reverse array
int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = 6;

    for(int i = 0; i < n/2; i++) {
        swap(arr[i], arr[n-i-1]);
    }

    for(int x : arr) cout << x << " ";
}
