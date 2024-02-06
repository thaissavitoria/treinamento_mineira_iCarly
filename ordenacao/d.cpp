#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
    _;

    string nome;
    int num;

    cin >> num;
    cin.ignore();

    unordered_map<string, int>votos;
    unordered_set<string>cof;
    vector<string>entrada;

    while (num--) {
        getline(cin, nome);
        entrada.push_back(nome);
        cof.insert(nome);
    }

    for (auto n : cof) {
        votos.insert({ n,0 });
    }

    for (auto v : entrada) {
        auto it = votos.find(v);
        it->second++;
    }

    vector<pair<string, int>> ordenado;

    for (auto par : votos) {
        ordenado.push_back(par);
    }

    sort(ordenado.begin(), ordenado.end(),
        [](const pair<string, int> &c1, const pair<string, int> &c2) {
        if (c1.second == c2.second) {
            return false;
        }
        return c1.second > c2.second;
    });

    for (auto voto : ordenado) {
        cout << voto.first << endl;
    }

    return 0;
}