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

    int quantidade;
    cin >> quantidade;

    vector<int> numeros;

    for (int i = 0; i < quantidade; ++i) {
        int numero;
        cin >> numero;
        numeros.push_back(numero);
    }

    sort(numeros.begin(), numeros.end());

    
    int maiorDiferenca = numeros[quantidade - 1] - numeros[0];

    cout  << maiorDiferenca << endl;

    return 0;
}