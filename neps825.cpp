#include <bits/stdc++.h>
using namespace std;
int f, m;


void dfs(vector<string> &v, int x, int y, map<pair<int,int>, bool> &acessed ){
    if(y>=m || x >= m || x<0 || y<0) return;
    if(acessed[{x,y}]) return;
    acessed[{x,y}] = true;
    if((v.at(y).at(x) - '0') <= f) v.at(y).at(x) = '*';
    else return;
    dfs(v, x+1, y, acessed);
    dfs(v, x-1, y, acessed);
    dfs(v, x, y+1, acessed);
    dfs(v, x, y-1, acessed);
}

int main(){
    cin >> m >> f;
    string str;
    vector<string> v;
    map<pair<int,int>, bool> acessed;
    getchar();
    for(int i =0; i<m; i++){
        str = "";
        getline(cin, str);
        v.push_back(str);
    }
    dfs(v, 0, 0, acessed);
    for(int i = 0; i<m; i++){
        for(int j = 0; j<m; j++){
            
                cout << v.at(i)[j];
        }
        cout << endl;
    }
}