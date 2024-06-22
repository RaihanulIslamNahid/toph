#include<bits/stdc++.h>
using namespace std;

int main() {
    int R, C, A, B;
    cin >> R >> C;
    cin >> A >> B;
    
    int totalRows = R * A;
    int totalCols = C * B;

    vector<vector<char>> board(totalRows, vector<char>(totalCols));

    for (int i = 0; i < totalRows; ++i) {
        for (int j = 0; j < totalCols; ++j) {
            int cellRow = i / A;
            int cellCol = j / B;
            if ((cellRow + cellCol) % 2 == 0) {
                board[i][j] = 'X';
            } else {
                board[i][j] = '.';
            }
        }
    }

    for (const auto& row : board) {
        for (char c : row) {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}
