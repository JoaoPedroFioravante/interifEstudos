#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, x, z; cin >> a;
    for(int i = 0; i<a; i++){
        cin >> x >> z;
        if(x%z == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}