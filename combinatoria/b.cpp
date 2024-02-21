#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll calcularCombinacoes(int n) {
    ll opcoes = 7290;

    if (n > 4) {
        for (int i = 0;i < (n - 4);i++) {
            opcoes = opcoes * 9;
        }

        return opcoes;

    } else {
        return opcoes;
    }

}
int main() {

    int numDígitos;
    cin >> numDígitos;

    ll combinacoes = calcularCombinacoes(numDígitos);
    cout << combinacoes << endl;

    return 0;
}