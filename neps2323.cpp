#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    unordered_map<int, unordered_map<int, bool>> adj;
    for( int i = 0; i<m; i++){
        int x, y;
        cin >> x >> y;
        adj[x][y] = true;
        adj[y][x] = true;
    }
    int c;
    cin >> c;
    int lp = 0;
    for(int i = 0; i<c; i++){
       vector<int> v;
       int l; cin>>l;
       for(int j =0; j<l; j++){
            int a; cin >> a;
            v.push_back(a);
       }
        int fi = v.at(0), se;
        for(int j = 1; j<l; j++){
            se = v.at(j);
            if(adj[fi][se]){
                fi = se;
            }
            else{
                break;
            }
            if(j == l-1){
                lp++;
            }
        }
    }
    cout << lp;
}