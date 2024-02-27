#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool ehPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return false;
    return true;
}

bool goldbach_com_multiplicacao(int num) {
    for (int i = 2; i <= num / 2; ++i) {
        if (ehPrimo(i) && ehPrimo(num / i) && (i * (num / i) == num)) {
            return true;
        }
    }
    return false;
}

int main() {
    int num;
    cin >> num;
    cout << goldbach_com_multiplicacao(num) << endl;
    return 0;
}