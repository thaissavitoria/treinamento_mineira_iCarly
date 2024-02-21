#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll fatorial(int n) {
    ll resultado = 1;
    for (int i = 2; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    _;

    int num1, num2, result;

    do {
        cin >> num1 >> num2;

        if (num1 == 0 && num2 == 0)
            break;

        result = num1;

        for (int i = num1 - 1;i != num1 - num2;i--) {
            result *= i;
        }

        ll resultFinal = result / fatorial(num2);
        cout << resultFinal << endl;
    } while (true);

    return 0;
}