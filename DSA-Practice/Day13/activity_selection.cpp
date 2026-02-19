int main() {
    vector<pair<int,int>> act = {{1,3},{2,5},{4,7},{6,9}};
    sort(act.begin(), act.end());

    int count = 1;
    int end = act[0].second;

    for(int i = 1; i < act.size(); i++) {
        if(act[i].first >= end) {
            count++;
            end = act[i].second;
        }
    }

    cout << count;
}
