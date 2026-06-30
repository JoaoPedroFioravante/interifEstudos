#include <bits/stdc++.h>
using namespace std;

bool quebra = false;

pair<int, int> posHermione(vector<vector<char>>& m, int xh, int yh, int mx, int my){
    if(xh >= mx) return{-1,-1};
    if(yh >= my) return{-1,-1};
    if(xh < 0) return{-1,-1};
    if(yh < 0) return{-1,-1};
    if(m.at(yh).at(xh) == '.') return{-1,-1};
    m.at(yh).at(xh) = '.';
    pair<int, int> a1 = posHermione(m, xh+1, yh, mx, my);
    pair<int, int> a2 = posHermione(m, xh-1, yh, mx, my);
    pair<int, int> a3 = posHermione(m, xh, yh+1, mx, my);
    pair<int, int> a4 = posHermione(m, xh, yh-1, mx, my);
    if(a3.first != -1) return a3;
    else if(a1.first != -1) return a1;
    else if(a2.first != -1) return a2;
    else if(a4.first != -1) return a4;
    return {yh, xh};
}

int main(){
    
    int l, c;
    cin >> l >> c;
    vector<vector<char>> m(l);
    int px, py;
    for(int i = 0;  i<l; i++){
        for(int j =0; j<c; j++){
            char ch;
            cin >> ch;
            if(ch == 'o'){
                px = j;
                py = i;
            }
            m.at(i).push_back(ch);
        }
    }
    pair<int, int> r = posHermione(m, px, py, c, l );
    cout << r.first+1 << " " << r.second+1;

}