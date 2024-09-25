#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }

private:
    bool solve(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == '.') { // Find an empty cell
                    for (char num = '1'; num <= '9'; num++) { // Try numbers 1-9
                        if (isValid(board, row, col, num)) { // Check if valid
                            board[row][col] = num; // Place the number
                            if (solve(board)) { // Recursively solve
                                return true; // If solved, return true
                            }
                            board[row][col] = '.'; // Backtrack
                        }
                    }
                    return false; // No valid number found, backtrack
                }
            }
        }
        return true; // Solved the board
    }

    bool isValid(vector<vector<char>>& board, int row, int col, char num) {
        for (int i = 0; i < 9; i++) {
            // Check row, column, and 3x3 subgrid
            if (board[row][i] == num || board[i][col] == num || 
                board[row - row % 3 + i / 3][col - col % 3 + i % 3] == num) {
                return false; // Invalid placement
            }
        }
        return true; // Valid placement
    }
};
int main() {
    Solution solution;
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };
    
    solution.solveSudoku(board);
    
    // Print the solved board
    for (const auto& row : board) {
        for (char c : row) {
            cout << c << " ";
        }
        cout << endl;
    }
    
    return 0;
}
