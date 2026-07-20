#include <bits/stdc++.h>
using namespace std;
unordered_map<string, vector<string>> x;

void inOrdem(string father){
    cout << father << endl;
    auto vet = x[father];
    sort(vet.begin(), vet.end());
    for(auto str : vet) inOrdem(str);
}

int main(){
    string str, str2;
    cin >> str;
    x[str];
    while(str != "fim" ){
        cin >> str >> str2;
        x[str2].push_back(str);
    }
    cin >> str2;
    inOrdem(str2);

}