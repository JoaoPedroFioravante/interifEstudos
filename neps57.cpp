#include <bits/stdc++.h>
using namespace std;

pair<int, bool> f(vector<vector<int>> &v, int x, int y, int mx, int my, int acc){
    if(mx <= x) return{0, false};
    if(my <= y) return{0, false};
    if(x < 0) return{0, false};
    if(y < 0) return{0, false};
    if(v.at(y).at(x) == 0) return {0, false};
    if(v.at(y).at(x) == 2) return {acc+1, true};
    int min  = 1000001;
    v.at(y).at(x) = 0;
    pair<int, bool> m[4];
    pair<int, int> p[] = {{x, y-1},{x, y+1}, {x-1, y}, {x+1, y}};
    for(int i = 0; i<4; i++){
        m[i] = f(v, p[i].first, p[i].second, mx, my, acc+1);
        if(m[i].second && m[i].first < min){
            min = m[i].first;
            } 
        }
    return {min, true};
}

int main(){
    int n,m; cin >> n >> m;
    int x3, y3, x2, y2;
    vector<vector<int>> v;
    for(int i = 0; i<n; i++){
        vector<int> line;
        for(int j = 0; j<m; j++){
            int e; cin >> e;
            if(e == 3){
                x3 = j;
                y3 = i;
            }
            if(e == 2){
                x2 = j;
                y2 = i;
            }
            line.push_back(e);
        }
        v.push_back(line);
    }
    pair<int, bool> k[4];
    for(int i = 0; i<4; i++) k[i] = {0, false};
    pair<int, int> pV[] = {{x3, y3-1},{x3, y3+1}, {x3-1, y3}, {x3+1, y3}};
    for(int i = 0; i<4; i++){
        if(pV[i].first >= 0 && pV[i].first < m && pV[i].second >=0 && pV[i].second < n){
            k[i] = f(v, pV[i].first, pV[i].second, m,n, 1);
        }
    }
    int min = 1000001;
    for(int i = 0; i<4; i++){
        if(k[i].second && min > k[i].first ){
            min = k[i].first;
        }
    }
    cout << min;
}