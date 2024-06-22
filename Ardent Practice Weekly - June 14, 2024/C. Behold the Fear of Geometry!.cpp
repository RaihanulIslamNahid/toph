#include <iostream>
using namespace std;
#define int unsigned long long
int32_t main() {
    int n;
    cin >> n;

    if (n < 4) {
        cout << 0 << endl; 
    } else {
        int fac1 = 1;
        int fac2 = 1;
        int fac3 = 1;

        for (int i = 2; i <= n; ++i) {
            fac1 *= i;
        }

        for (int i = 2; i <= 4; ++i) {
            fac2 *= i;
        }
        for (int i = 2; i <= (n-4); ++i) {
            fac3 *= i;
        }
        int ans = fac1 / (fac2 * fac3);
        cout << ans << endl;
    }

    return 0;
}
