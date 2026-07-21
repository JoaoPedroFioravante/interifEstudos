#include <bits/stdc++.h>
using namespace std;

int main(){
    string c; cin>>c;
    long impares = 0;
    long soma = 0;
    for(int i = 0;  i<c.size(); i++) {if((c[i] - '0')%2!=0)impares += c[i]-'0';else soma += c[i]-'0';}
    if(soma%3==0) cout << 'S';
    else cout << 'N';
    cout << endl;
    if(impares%3==0) cout<<'S';
    else cout << 'N';

}