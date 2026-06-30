#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n];
    priority_queue<pair<int, int>> q;
    bool processed[n];
    long long dist[n];
    const long long INF = pow(10,11);
    for(int i =0; i<n; i++){
        dist[i] = INF;
        processed[i] = false;
    }
    for(int i = 0; i<m; i++){
        int u,v,p;
        cin >> u >> v >>p;
        adj[u-1].push_back({v-1, p});
        adj[v-1].push_back({u-1, p});
    }

    int starter;
    cin >> starter;
    --starter;
    q.push({0,starter});
    dist[starter] = 0;
    while(!q.empty()){
        int s = q.top().second;
        q.pop();
        if(processed[s]) continue;
        processed[s] = true;
        for(auto &x : adj[s]){
            int f, w;
            f = x.first;
            w = x.second;
            if(dist[f] > w+dist[s]){
                dist[f] = w+dist[s];
                q.push({-dist[f], f});
            }
        }
    }
    long long min = INF, max = -1;
    for(int i = 0; i<n; i++){
        if(i == starter) continue;
        if(dist[i] > max) max = dist[i];
        if(dist[i] < min) min = dist[i];
    }
    cout << max - min;

    }