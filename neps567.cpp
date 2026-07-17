#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> vet;
map<pair<int, int>, bool> visited;


void removeBlot(int y, int x, int my, int mx){
    if(visited[{y, x}]) return;
    if(y >= my || x >= mx || y < 0 || x < 0) return;
    visited[{y,x}] = true;
    if(vet.at(y).at(x) == 0) return;
    vet.at(y).at(x)  = 0;
    removeBlot(y-1, x, my, mx);
    removeBlot(y+1, x, my, mx);
    removeBlot(y, x-1, my, mx);
    removeBlot(y, x+1, my, mx);

}

int main(){
    int n, m; cin >> n >> m;
    vector<pair<int, int>> positions;
    for(int i = 0; i<n; i++){
        vector<int> line;
        for(int j = 0; j<m; j++){
            int v; cin>>v;
            if(v==1) positions.push_back({i, j});
            line.push_back(v);
        }
        vet.push_back(line);
    }
    int blots = 0;    
    for(int i = 0; i<positions.size(); i++){
        int x, y;
        x = positions.at(i).second;
        y = positions.at(i).first;
        if(vet.at(y).at(x) == 1){
                blots++;
                removeBlot(y, x, n, m);
            }
        }
    cout << blots;
}