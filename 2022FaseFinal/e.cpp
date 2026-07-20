#include <bits/stdc++.h>
using namespace std;

bool ePrimo(int x){
    if(x < 2) return false;
    if(x == 2) return true;
    if(x%2==0) return false;
    for(int i = 3; i<x-1; i++){
        if(x%i==0)return false;
    }
    return true;
}

int main(){
    int x; cin >> x;
    cin.ignore();
    string v; getline(cin, v);
    stringstream m(v);
    set<int> z;
    int d;
    while(m >> d){
        if(d>x) {
            cout << "ERRO";
            return 0;
        }
        z.emplace(d);
    }
    for(auto f: z) cout << f << " ";
    cout << endl;
    for(auto f: z) if(ePrimo(f)) cout << f << " ";
}