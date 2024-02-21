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
    double a1, b1, c1, a2, b2, c2;

    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    double determinante = a1 * b2 - a2 * b1;

    if (determinante != 0) {
        
        double x = (c1 * b2 - c2 * b1) / determinante;
        double y = (a1 * c2 - a2 * c1) / determinante;


        cout << fixed << setprecision(2);
        cout << x;
        cout<<" "<<y<< endl;

    } else {
        cout << "sistema indeterminado\n";
    }

    
    return 0;
}