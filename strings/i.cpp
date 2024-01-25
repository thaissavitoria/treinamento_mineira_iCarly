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
    
    int N;
    cin >> N;

    
    unordered_map<int, int> brincosDireita, brincosEsquerda;

    for (int i = 0; i < N; ++i) {
        int codigo;
        char lado;
        cin >> codigo >> lado;

        if (lado == 'D') {
            brincosDireita[codigo]++;
        } else if (lado == 'E') {
            brincosEsquerda[codigo]++;
        }
    }

    
    int pares = 0;
    for (const auto& it : brincosDireita) {
        pares += min(it.second, brincosEsquerda[it.first]);
    }

    cout << pares << endl;

    return 0;
    
}