#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    const long long INF = pow(10, 10);
    map<int, vector<pair<int, int>>> adj;
    long long d[n+2];
    bool pd[n+2];
    priority_queue<pair<int, int>> q;
    for(int i =0; i<=n+1; i++){
        d[i] = INF;
        pd[i] = false;
    }
    for(int i =0; i<m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    d[0] = 0;
    q.push({0, 0});
    while(!q.empty()){
        int p = q.top().second;
        q.pop();
        if(pd[p] == true) continue;
        pd[p] = true;
        for(auto &v : adj[p]){
            int b = v.first;
            int w = v.second;
            if(d[b]> d[p]+w) {
                d[b] = d[p]+w;
                q.emplace(-d[b], b);   
            }
        } 
    }
    cout << d[n+1];
}

