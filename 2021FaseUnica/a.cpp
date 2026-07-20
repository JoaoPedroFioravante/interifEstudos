#include <bits/stdc++.h>
using namespace std;

int main(){
    char alf[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string frase = "";
    string x;
    getline(cin, x);
    string word;
    int i = 0;
    string number = "";
    while(true){
        if(number.size() == 8) {
                int value = 0;
                int elev = 0;
                for(int i = 7; i>=0; i--){
                    if(number[i] == '1'){ value += pow(2, elev);}
                    elev++;
                }
                frase += (char)value; 
            number = "";

        }
        if(i==x.size()) break;
        if(isalpha(x[i]))number += isupper(x[i])?'1':'0';
        i++;
    }
    cout << frase;
}