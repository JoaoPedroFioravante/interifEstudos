#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b; cin >> n>> a >> b;
    bool p[n];
    const long long INF = pow(10,12);
    vector<int> on[n];
    long long d[n];
    a--;b--;
    priority_queue<pair<int, int>> q;
    q.push({0, a});
    for(int i = 0; i<n; i++){
        p[i] = false;
        d[i] = INF;
    }
    d[a] = 0;
    for(int i = 0; i<n-1; i++){
        int x, y; cin >> x >> y;
        on[x-1].push_back(y-1);
        on[y-1].push_back(x-1);
    }
    
    while(!q.empty()){
        int x = q.top().second;
        q.pop();
        for(auto i: on[x]){
            if(d[i] > d[x]+1){
                d[i] = d[x]+1;
                q.push({-d[i], i});
            }
        }
    }
    cout << d[b];
}