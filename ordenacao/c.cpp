#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<int> tokenizar(string &text) {
    char del = ' ';

    stringstream sstream(text);
    string token;

    vector<int> tokens;

    while (getline(sstream, token, del)) {
        tokens.push_back(stoi(token));
    }
    return tokens;
}

int main() {
    _;

    int t;

    cin >> t;
    cin.ignore();

    string str;
    getline(cin, str);

    auto tokens = tokenizar(str);

    vector<int> impar;
    vector<int> par;

    for (auto token : tokens) {
        if (token % 2 == 0)
            par.push_back(token);
        else
            impar.push_back(token);
    }
    sort(impar.begin(), impar.end());
    sort(par.begin(), par.end());

    for (auto i : impar)
        cout << i << " ";
    for (auto i : par)
        cout << i << " ";
    cout << endl;

    return 0;
}