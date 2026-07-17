#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, r;
    cin >> n >> r;
    for(int i = 0; i<r; i++){
        int x, y;  
        cin >> x >> y;
    }
    int relNec = 0;
    for(int i = n-1; i>0; i--) relNec +=i;
    cout << relNec - r << endl;
} 