int main() {
    vector<int> adj[4];
    adj[0] = {1,2};
    adj[1] = {0,3};
    adj[2] = {0};
    adj[3] = {1};

    bool visited[4] = {false};
    queue<int> q;

    visited[0] = true;
    q.push(0);

    while(!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for(int x : adj[node]) {
            if(!visited[x]) {
                visited[x] = true;
                q.push(x);
            }
        }
    }
}
