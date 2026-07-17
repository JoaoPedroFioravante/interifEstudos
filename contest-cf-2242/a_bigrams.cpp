#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        int s; cin >> s;
        bool p1 = false, p2 = false, p3 = false;
        int cost = 0;
        for(int j = 0; j<s; j++){
            int num; cin >> num;
            if(!p1){
                if(num == 1){
                    cost++;
                    if(cost == 2){
                        p1 = true;
                        cost = 1;
                    }
                }
                else if(cost == 0 && num == 2){
                    cost--;
                }
                
            }
        }
    }
}