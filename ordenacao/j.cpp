#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

pair<int, int> tokenizar(string &text) {
    char del = ' ';

    stringstream sstream(text);
    string token;

    vector<int> tokens;

    while (getline(sstream, token, del)) {
        tokens.push_back(stoi(token));
    }
    return make_pair(tokens[0], tokens[1]);
}

// remocao de n-1 elementos a cada k-esimo elemento
int josephus(int n, int k) {
    if (n == 1)
        return 1;
    else
        return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main() {
    _;

    string line;
    vector<string> tokens;

    while (getline(cin, line)) {
        auto token = tokenizar(line);
        cout << josephus(token.first, token.second) << endl;
    }

    return 0;
}