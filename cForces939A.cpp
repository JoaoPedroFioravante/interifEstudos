#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i<n; i++){
        int m;
        cin >> m;
        m--;
        v.push_back(m);
    }
    for(int i =0; i<n; i++){
        int f = i, s = v.at(f), t = v.at(s), q = v.at(t);
        if(q == f){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}   