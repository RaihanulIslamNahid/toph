#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int pos = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == m) {
            pos = i;
            break;
        }
    }

    unordered_map<int, int> P_cnt;
    unordered_map<int, int> S_cnt;

    int balance = 0;
    P_cnt[0] = 1;

    for (int i = pos - 1; i >= 0; --i) {
        if (arr[i] < m) balance--;
        else balance++;
        P_cnt[balance]++;
    }

    balance = 0;
    S_cnt[0] = 1;
    int result = 0;

    for (int i = pos + 1; i < n; ++i) {
        if (arr[i] < m) balance--;
        else balance++;
        S_cnt[balance]++;
    }

    for (const auto& entry : P_cnt) {
        result += entry.second * S_cnt[-entry.first];
    }

    cout << result << endl;
    return 0;
}
