#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool ehAnagrama(string p1, string p2) {
    if (p1.length() != p2.length())
        return false;

    map<char, int>ana;

    for (auto c : p1) {
        ana[c]++;
    }
    for (auto c : p2) {
        ana[c]--;
    }

    for (auto it : ana) {
        if (it.second != 0)
            return false;
    }

    return true;
}

int main() {
    _;

    int num;

    cin >> num;

    cin.ignore();

    string l1, l2;

    while (num--) {
        getline(cin, l1);
        getline(cin, l2);

        if (ehAnagrama(l1, l2)) {
            cout << "sim" << endl;
        } else
            cout << "nao" << endl;
    }

    return 0;
}