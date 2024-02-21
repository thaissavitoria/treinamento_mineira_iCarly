#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    _;

    int num;

    cin >> num;

    for (int i = 0; i < num; ++i) {
        int num1, num2;
        
        cin >> num1 >> num2;
        int result = mdc(num1, num2);

        cout << result << endl;
    }

    return 0;   
}