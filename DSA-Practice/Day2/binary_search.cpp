int main() {
    int arr[] = {10,20,30,40,50};
    int n = 5, key = 40;

    int l = 0, r = n-1, pos = -1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(arr[mid] == key) {
            pos = mid;
            break;
        }
        if(arr[mid] < key) l = mid + 1;
        else r = mid - 1;
    }

    cout << pos;
}
