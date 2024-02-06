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

    float valorConta;
    int idade;

    cin >> valorConta;
    cin >> idade;

    if (idade <= 5) {
        // Crianças até 5 anos têm desconto de 50%
        valorConta *= 0.5;
    } else if (idade < 18) {
        // Menores de 18 anos (que não são crianças) têm desconto de 5%
        valorConta *= 0.95;
    } else if (idade >= 18 && idade <= 59) {
        // Adultos com 18 anos até 59 pagam taxa de serviço de 10%
        valorConta *= 1.10;
    } else if (idade >= 60) {
        // Idosos com 60 anos ou mais têm desconto de 15%
        valorConta *= 0.85;
    }

    cout << fixed << setprecision(2);
    cout << valorConta << endl;

    return 0;
}