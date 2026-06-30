#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    unordered_map<string,bool> r;
    vector<int> res;
    for( int i = 0; i<m; i++){
        pair<int, int> p;
        int t, c1, c2;
        cin >> t >> c1 >> c2;
        if(t == 0){
            p.first = c1-1;
            p.second = c2-1;
            bool s = false;
            if(r[to_string(p.first)+"-"+ to_string(p.second)] == true){
                s = true;
            }
            if(!s){
                res.push_back( 0 );
            }
            else{
                res.push_back(1);
            }
        }
        else{
            r[to_string(c1-1)+"-"+ to_string(c2-1)] = true;
            r[to_string(c2-1)+"-"+to_string(c1-1)] = true;
        }
    }
    for(int i:res){
        cout << i << endl;
    }
}