#include<bits/stdc++.h>
using namespace std;

int main() {
    int l, n;
    cin >> l >> n;
    
    vector<pair<int, int>> sp(n);
    for (int i = 0; i < n; ++i) {
        int p, k;
        cin >> p >> k;
        sp[i] = {p, k};
    }

    int temp = 0, temp2 = 0;
    for (int i = 0; i < n; ++i) {
        int cnt = sp[i].second - sp[i].first + 1;
        if (cnt > temp) {
            temp = cnt;
            temp2 = i + 1;
        }
    }
    vector<bool> taken(l + 1, false);
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; ++i) {
        int p = sp[i].first;
        int k = sp[i].second;
        int actualChops = 0;

        for (int j = p; j <= k; ++j) {
            if (!taken[j]) {
                taken[j] = true;
                ++actualChops;
            }
        }

        if (actualChops > cnt1) {
            cnt1 = actualChops;
            cnt2 = i + 1;
        }
    }

    cout << temp2 << endl;
    cout << cnt2 << endl;

    return 0;
}
