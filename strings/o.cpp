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
    string vogais = "aeiou";

    string palavra;
    int num = 0;

    getline(cin, palavra);

    for (auto c : palavra) {
        if (vogais.find(c) != string::npos) {
            num++;
        }
    }

    return 0;
}