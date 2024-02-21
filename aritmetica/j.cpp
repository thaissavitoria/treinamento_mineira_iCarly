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

    float valor_inicial, valor_recorrente;
    int quantidade;

    cin >> valor_inicial;
    cin >> valor_recorrente;
    cin >> quantidade;
    
    float resultado =0;
    
    resultado = valor_inicial + (valor_recorrente * (quantidade - 1));

    cout << fixed << setprecision(1);

    cout<< resultado << endl;

    return 0;
}