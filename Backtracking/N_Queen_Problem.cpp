#include <bits/stdc++.h> 
#include<vector>
using namespace std;

void addSolution(vector<vector<int>> &ans, vector<vector<int>> &board, int n) {
    vector<int> temp;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}

bool isSafe(int row, int col, vector<vector<int>> &board, int n) {
    int x = row;
    int y = col;

    // Check for same row
    while(y >= 0) {
        if(board[x][y] == 1) {
            return false;
        }
        y--;
    }

    x = row;
    y = col;
    // Check for diagonal
    while(x >= 0 && y >= 0) {
        if(board[x][y] == 1)
            return false;
        y--;
        x--;
    }

    x = row;
    y = col;
    // Check for diagonal
    while(x < n && y >= 0) {
        if(board[x][y] == 1)
            return false;
        y--;
        x++;
    }

    return true;
}

void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board, int n) {
    // Base case
    if(col == n) {
        addSolution(ans, board, n);
        return;
    } 

    // Solve 1 case and rest Recursion will take care
    for(int row = 0; row < n; row++) {
        if(isSafe(row, col, board, n)) {
            // If placing queen is safe
            board[row][col] = 1;
            solve(col + 1, ans, board, n);

            // Backtracking 
            board[row][col] = 0;
        }
    }
}

vector<vector<int>> nQueens(int n) {
    vector<vector<int>> board(n, vector<int>(n, 0));
    vector<vector<int>> ans;
    solve(0, ans, board, n);
    return ans;
}

int main() {
    int n;
    cout << "Enter the size of the chessboard (n x n): ";
    cin >> n;

    vector<vector<int>> solutions = nQueens(n);

    cout << "Number of solutions: " << solutions.size() << endl;
    cout << "Solutions:\n";
    for(auto sol : solutions) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << sol[i * n + j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
