#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> vet = {1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16};

void calc(int x){
    for(int i = vet.size(); i<x; i++){
        vet.push_back(vet.at(i-2) + vet.at(i-3));
    }
}

int main(){
    int x;
    while(cin >> x){
        if(x>vet.size()){
            calc(x);
            cout << vet.at(x-1) << endl;
        }
        else{
            cout << vet.at(x-1) << endl;
        }
    }
}