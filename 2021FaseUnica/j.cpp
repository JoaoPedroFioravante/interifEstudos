#include <bits/stdc++.h>
using namespace std;

int main(){
    long players[] = {0,0,0};
    int player; 
    int round = 0;
    do{
    stack<pair<int, int>> w;
    cin >> player;
    if(player == -1) return 0;
    player--;
    int stick; 
    while(true){
        cin >> stick;
        if(stick == -1) break;
        if(stick == 1) players[player] += 5;
        else if(stick == 2) players[player] += 10;
        else if(stick == 3) players[player] += 15;
        else if(stick == 4) players[player] += 20;
        else if(stick == 5) players[player] += 50;
        else if(stick == 0) {
            player++;
            if(player>2)player = 0;
        }
    }
    round++;
    for(int i = 0; i<3; i++){
        if(i == 0) w.emplace(players[0], 0);
        else if(w.top().first < players[i]) { while(!w.empty()) w.pop(); w.emplace(players[i], i);}
        else if(w.top().first == players[i]) w.emplace(players[i], i);
    }
    cout << "RODADA " << round;
    cout << endl << "Ganhador com " << w.top().first << " pontos" << endl;
    while(true){
        printf("Jogador ");
        cout <<(w.top().second+1) ;
        w.pop();
        if(!w.empty()){
            cout << ", ";
        }
        else{ cout << endl; break;}
    }
    for(int i = 0; i<3; i++) players[i] = 0;

    }
    while(true);
}