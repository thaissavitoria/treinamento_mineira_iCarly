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

    int num;

    cin >> num;

    int eliminadosTestes = static_cast<int>(num * 0.63);

    int semPosse = static_cast<int>(eliminadosTestes * 0.8);



    cout << "[" << eliminadosTestes << ", " << semPosse << ", " << "]" << endl;

    return 0;
}