#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int x; cin >> x;
    vector<int> v;
    for(int i = 0; i<x; i++){
        long long z; cin >> z;
        for(int j = z-1; j>1; j--){
            z*=j;
            cout << z << endl;
        }
        cout << endl << z;
        string c = to_string(z);
        string nc = "";
        for(int j = 0; j<n && j<c.size(); j++){
            nc += c[j];
        }
        z = stoi(nc);
        v.push_back(z);
    }
    cout << "INICIO" << endl;
    sort(v.begin(), v.end());
    for(int i = 0; i<v.size(); i++){
        cout << v.at(i) << endl;
    }
    cout << "FIM" << endl;
}