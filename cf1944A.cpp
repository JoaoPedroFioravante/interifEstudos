//cf is codeForces
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n; 
    for(int i = 0; i<n; i++){
        int a, b; 
        cin >> a >> b; 
        int br = ((a*(a-1))/2); 
        int x = abs(br-b);
        if(b >= a-1){cout << 1 << endl;} 
        else cout<<a<<endl;
    }
}