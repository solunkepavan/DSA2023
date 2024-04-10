#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<vector<int>>& board, int val) {
    for (int i = 0; i < board.size(); i++) {
        // row check
        if (board[row][i] == val)
            return false;
        // col check
        if (board[i][col] == val)
            return false;
        // 3*3 matrix check
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == val)
            return false;
    }
    return true;
}

bool solve(vector<vector<int>>& board) {
    int n = board[0].size();
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            // check cell is empty or not
            if (board[row][col] == 0) {
                for (int val = 1; val <= 9; val++) {
                    if (isSafe(row, col, board, val)) {
                        board[row][col] = val;
                        // recursion call
                        bool agyeSolutionPossible = solve(board);
                        if (agyeSolutionPossible) {
                            return true;
                        } else {
                            // backtrack
                            board[row][col] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void solveSudoku(vector<vector<int>>& sudoku) {
    solve(sudoku);
}

void printSudoku(const vector<vector<int>>& sudoku) {
    for (const auto& row : sudoku) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> sudoku = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    cout << "Sudoku before solving:" << endl;
    printSudoku(sudoku);

    solveSudoku(sudoku);

    cout << "\nSudoku after solving:" << endl;
    printSudoku(sudoku);

    return 0;
}
