#include <iostream>
#include <vector>
using namespace std;

int main() {
    int X, N;
    cin >> X >> N;

    vector<int> usage(N);
    for (int i = 0; i < N; ++i) {
        cin >> usage[i];
    }

    int remaining = 0;

    for (int i = 0; i < N; ++i) {
        remaining += X - usage[i];
    }

    remaining += X;  // Add the monthly quota for the N+1 month.

    cout << remaining << endl;

    return 0;
}
