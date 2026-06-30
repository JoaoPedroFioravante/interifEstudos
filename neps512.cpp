#include <bits/stdc++.h>
using namespace std;

void dfs(int y, bool *visited, vector<int>* x){
    if(visited[y]) return;
    visited[y] = true;
    for(auto v : x[y]){
        dfs(v, visited, x);    
    }
} 

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> x[n];
    bool visited[n];
    for(int i =0; i<n; i++){
        visited[i] = false;
    }
    int qtd = 0;
    for(int i =0; i<m; i++){
        int a, b;
        cin >> a >> b;
        x[a-1].push_back(b-1);
        x[b-1].push_back(a-1);
    }
    for(int  i = 0; i<n; i++){
        if(visited[i]) continue;
        dfs(i, visited, x);
        qtd++;
    }
    cout<<qtd<<endl;
}

