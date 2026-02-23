void subset(vector<int>& arr, int i) {
    if(i == arr.size()) {
        cout << endl;
        return;
    }
    cout << arr[i] << " ";
    subset(arr, i+1);
    subset(arr, i+1);
}

int main() {
    vector<int> arr = {1,2,3};
    subset(arr,0);
}
