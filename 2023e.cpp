
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
    string x;
    cin >> x;
    int ln;
    while(true){
        if(x == "X") break;
        ln = stoi(x);
        cin >> x;
        
    }
    int fat = b/a;
    cout << ln*fat;
}
