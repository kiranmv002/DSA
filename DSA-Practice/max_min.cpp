int main() {
    int arr[] = {3, 5, 1, 8, 2};
    int n = 5;

    int mx = arr[0], mn = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > mx) mx = arr[i];
        if(arr[i] < mn) mn = arr[i];
    }

    cout << mx << " " << mn;
}
