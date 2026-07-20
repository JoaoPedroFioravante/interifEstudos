#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> m;
unordered_map<string, int> qtd;


void acharPalavra(string palavra, int l, int c){
    char fc = palavra[0];
    for(int i = 0; i<l; i++){
        for(int j = 0; j<c; j++){
            if(m.at(i).at(j) == fc){
                int p = 1;
                for(int z = j+1; z<c; z++){
                    if(m.at(i).at(z) != palavra[p++]){
                        break;
                    }
                    if(p == palavra.size()){
                        qtd[palavra]++;
                        break;
                    }
                }
                p =1;
                for(int z = i+1; z<l; z++){
                    if(m.at(z).at(j) != palavra[p++]){
                        break;
                    }
                    if(p == palavra.size()){
                        qtd[palavra]++;
                        break;
                    }
                }
            }
        }
    }
}

int main(){
    int l, c; cin >> l >> c;
    for(int i = 0;  i<l; i++){
        vector<char> linha;
        for(int j = 0; j<c; j++){
            char ch; cin >> ch;
            linha.push_back(ch);
        }
        m.push_back(linha);
    }
    cin.ignore();
    string linha;
    getline(cin, linha);
    stringstream palavras(linha);
    string palavra;
    vector<string> pl;
    while(palavras >> palavra){
        qtd[palavra] = 0;
        pl.push_back(palavra);
        cout << palavra << endl;
        acharPalavra(palavra, l, c);
    }
    for(int i  = 0; i<pl.size(); i++){
        cout << pl.at(i) << ": " << qtd[pl.at(i)] << endl;
    }

}