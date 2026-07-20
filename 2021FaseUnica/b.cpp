#include <bits/stdc++.h>
using namespace std;

int main(){
    string word; cin >> word;
    unordered_map<char, int> ch;
    for(int i = 0; i<word.size(); i++) ch[word[i]]++;
    int i = 0;
    for(auto v: ch) if(v.second%2!=0) i++;
    if(i<=1) cout << 1;
    else cout << 0;
}   