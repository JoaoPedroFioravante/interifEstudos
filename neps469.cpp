#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> x;
map<pair<int, int>, bool> visited;

void rainFunction(int xI, int yI, int my, int mx){
    if(xI >= mx || yI >= my || xI < 0 || yI < 0) return;
    if(visited[{xI, yI}]) return;
    visited[{xI, yI}] = true;
    if(x.at(yI).at(xI) == '#'){
        rainFunction(xI-1, yI-1, my, mx);
        rainFunction(xI+1, yI-1, my, mx);
        return;
    }
    x.at(yI).at(xI) = 'o';

    rainFunction(xI, yI+1, my, mx);
}

int main(){
    int n, m, xo, yo;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        vector<char> line;
        for(int j = 0; j<m; j++){
            char c; cin >> c;
            if(c == 'o'){
                xo = j;
                yo = i;
            }
            line.push_back(c);
        }
        x.push_back(line);
    }
    rainFunction(xo, yo ,n, m);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << x.at(i).at(j);
        }
        cout << endl;
    }
    
}