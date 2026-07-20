#include <bits/stdc++.h>
using namespace std;
unordered_map<int, int> x;

int syra(int num){
    int i = 0;
    while(num != 1){
        if(x[num]!=0) {
            num = x[num];
            continue;
        }
        int ant = num;
        if(num%2 ==0) num/=2;
        else num = (num*3) + 1;
        x[ant] = num;
        i++;
    }
    return i;
}

int main(){
    int numero;
    while(cin >> numero){
        cout << endl <<syra(numero) << endl;
    }
}