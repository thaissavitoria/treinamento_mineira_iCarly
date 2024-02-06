#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

double distance(double x1, double y1, double x2, double y2) {
    double dx = abs(x2 - x1);
    double dy = abs(y2 - y1);
    return sqrt(dx * dx + dy * dy);
}

int main() {
    _;
    double num;

    vector<double>nums;

    while (cin >> num) {
        nums.push_back(num);
    }

    cout << fixed << setprecision(3) << distance(nums[0], nums[1], nums[2], nums[3]) << endl;

    return 0;
}