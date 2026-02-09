int main() {
    int arr[] = {64,25,12,22,11};
    int n = 5;

    for(int i = 0; i < n-1; i++) {
        int minIdx = i;
        for(int j = i+1; j < n; j++)
            if(arr[j] < arr[minIdx])
                minIdx = j;

        int t = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = t;
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
