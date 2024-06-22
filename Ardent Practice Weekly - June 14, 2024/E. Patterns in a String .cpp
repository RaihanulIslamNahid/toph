#include <bits/stdc++.h>

using namespace std;

int main() {
    int L;
    string s;
    cin >> L >> s;

    int n = s.size();
    vector<int> suffixArr(n), rank(n), temp(n), lcp(n);

    // Initialize suffix array and rank array
    for (int i = 0; i < n; i++) {
        suffixArr[i] = i;
        rank[i] = s[i];
    }

    // Sort the suffix array based on 2^k length prefixes
    for (int k = 1; k < n; k <<= 1) {
        auto cmp = [&](int i, int j) {
            if (rank[i] != rank[j]) return rank[i] < rank[j];
            int ri = (i + k < n) ? rank[i + k] : -1;
            int rj = (j + k < n) ? rank[j + k] : -1;
            return ri < rj;
        };
        sort(suffixArr.begin(), suffixArr.end(), cmp);
        temp[suffixArr[0]] = 0;
        for (int i = 1; i < n; i++)
            temp[suffixArr[i]] = temp[suffixArr[i - 1]] + cmp(suffixArr[i - 1], suffixArr[i]);
        rank = temp;
    }

    // Compute LCP array
    int h = 0;
    for (int i = 0; i < n; i++) {
        if (rank[i] > 0) {
            int j = suffixArr[rank[i] - 1];
            while (i + h < n && j + h < n && s[i + h] == s[j + h]) h++;
            lcp[rank[i]] = h;
            if (h > 0) h--;
        }
    }

    // Find the maximum element in the LCP array
    int result = *max_element(lcp.begin(), lcp.end());
    cout << result << endl;

    return 0;
}
