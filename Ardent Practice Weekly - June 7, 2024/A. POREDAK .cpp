#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> v(n);
    vector<string> V(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> V[i];
    }

    unordered_map<string, int> um;
    for (int i = 0; i < n; ++i) {
        um[v[i]] = i;
    }

    vector<int> tmo(n);
    for (int i = 0; i < n; ++i) {
        tmo[i] = um[V[i]];
    }

    int cp = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (tmo[i] < tmo[j]) {
                ++cp;
            }
        }
    }
    int mp = n * (n - 1) / 2;
    cout << cp << "/" << mp << endl;

    return 0;
}
