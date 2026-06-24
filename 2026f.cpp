#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, vector<string>> rel;
    bool conectam;
    int geracoes;
    int qtd;
    cin >> qtd;
    for (int i = 0; i < qtd; i++)
    {
        string asc, des;
        cin >> asc >> des;
        rel[asc].push_back(des);
    }
    string nub1, nub2;
    cin >> nub1 >> nub2;
    cin >> geracoes;
    queue<string> q;
    map<string, bool> p;
    map<string, int> d;
    for (int i = 0; i < 2; i++)
    {
        conectam = false;
        d.clear();
        p.clear();
        string cas, nub;
        if (i == 0)
        {
            cas = nub1;
            nub = nub2;
        }
        else
        {
            cas = nub2;
            nub = nub1;
        }
        q.push(cas);
        p[cas] = true;
        d[cas] = 0;
        while (!q.empty())
        {
            string s = q.front();
            q.pop();
            if (s == nub)
            {
                conectam = true;
                break;
            }
            for (auto v : rel[s])
            {
                if (p[v] == true)
                    continue;
                p[v] = true;
                d[v] = d[s] + 1;
                q.push(v);
            }
        }
        if (conectam)
        {
            if (d[nub] > geracoes)
            {
                cout << "PODEM CASAR";
                return 0;
            }
            else
            {
                cout << "NAO PODEM CASAR";
                return 0;
            }
        }
    }
    cout << "PODEM CASAR"; // caso não conecta -> a) e a b) do exercicio, no loop so vejo se a c existe
}