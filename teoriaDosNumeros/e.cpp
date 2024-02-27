#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
    int x, y, z;

    while (true) {
        cin >> x >> y >> z;

        if (x == 0 && y == 0 && z == 0)
            break;

        int ad = x + y;
        int sub = x - y;
        int mult = x * y;

        cout << x << " + " << y << " mod " << z << " = " << ad % z << endl;
        cout << x << " - " << y << " mod " << z << " = " << sub % z << endl;
        cout << x << " * " << y << " mod " << z << " = " << mult % z << endl;
    }

    return 0;
}