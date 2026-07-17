#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    priority_queue<pair<int, int>> q;
    long dist[n];
    vector<pair<int, int>> c[n];
    const long INF = pow(10,9);
    for(int i = 0; i<m; i++){
        int x, y, w;
        cin >> x >> y >> w;
        c[x-1].push_back({y-1, w});
        c[y-1].push_back({x-1, w});
    }
    dist[0] = 0;
    for(int i = 1;  i<n; i++){
        dist[i] = INF;
    }
    q.push({0, 0});
    while(!q.empty()){
        int num, w;
        num = q.top().second;
        q.pop();
        for(auto x: c[num]){
            w = x.second;
            if(dist[x.first] > dist[num]+w){
                dist[x.first] = dist[num]+w;
                q.push({-x.second, x.first});
            }
        }
    }
    cout << dist[n-1];
}