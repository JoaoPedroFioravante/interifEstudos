#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b; 
    cin >> n >> a >> b;
    unordered_map<int, int> pa, pb;
    set<int> sa, sb;
    for(int i = 0; i<a; i++){
        int x; cin>>x;
        pa[x]++;
        sa.emplace(x);
    }
    for(int i = 0; i<b; i++){
        int x; cin >> x; 
        pb[x]++;
        sb.emplace(x);
    }
    int fa = n-sa.size(), fb = n-sb.size();
    for(int i = 0; i<n; i++){
        if(pa[i] == 0 && pb[i] > 1){
            for(int j = 0; j<n; j++){
                if(pb[j] == 0 && pa[j] > 1){
                    pa[i]++;
                    pb[i]--;
                    pa[j]--;
                    pb[j]++;
                    fa--;
                    fb--;
                }
            }
        }
    }
    cout << fa << endl; 
    cout << fb << endl;
}