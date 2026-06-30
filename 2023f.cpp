#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int g[a];
    for(int i = 0;  i<a; i++){
        int e;
        cin >> e;
        g[i] = e;
    }
    int gi = 0;
    for(int i = 0; i<d; i+=b){
        gi++;
        if(gi == a) gi = 0;
    }
    if(g[gi] >= c) cout << "O vilarejo de Faz-de-contIF foi alertado";
    else cout << "O vilarejo de Faz-de-contIF foi devorado";
}