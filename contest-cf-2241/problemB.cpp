#include <bits/stdc++.h>
using namespace std;

bool isGood(int num){
    if(num < 100)return true;
    set<int> conjunto;
    while(num > 10){
        conjunto.insert(num%10);
        num = num/10;
    }
    conjunto.insert(num);
    if(conjunto.size() > 2) return false;
    return true;
}

int main(){
    int t, n, x;
    cin >> t;
    vector<int> goods;
    vector<int> newGoods;
    int indexGoods = 0;
    int indexNewGoods = 0;
    for(int  i = 2; i<100; i++){
        goods.push_back(i);
    }
    int sizeGoods = goods.size();
    for(int i = 0; i<t; i++){
        cin >> x;
        int goodsTemp = 0;
        int multiplicationA = 0;
        int multiplicationB = 0;
        int newGoodSize = -1;
        while(true){
            if(goodsTemp == sizeGoods){
                cout << "teste";
                if(newGoodSize == -1) newGoodSize = newGoods.size();
                n = newGoods.at(indexNewGoods++);
            }
            else if(indexNewGoods == newGoodSize){
                n = goods.at(multiplicationA++)*newGoods.at(multiplicationB);
                if(multiplicationA == sizeGoods){
                    multiplicationA = 0;
                    multiplicationB++;
                }
            }
            else{
                n = goods.at(goodsTemp++);
                for(int i = goods.at(goodsTemp); i<sizeGoods; i++){
                    if(n*i > 99){
                        newGoods.push_back(n);
                    }
                }
            }
            if(isGood(n)){
                if(isGood(n*x))
                break;
            }
        }
        cout << n << endl;
    }
}