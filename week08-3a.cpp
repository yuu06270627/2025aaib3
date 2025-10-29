class Solution {
public:
    // Check if the current board has a winner
    bool checkWinner(int a[3][3], int player) {
        // Check rows, columns and diagonals
        for (int i = 0; i < 3; i++) {
            if (a[i][0] == player && a[i][1] == player && a[i][2] == player) return true;
            if (a[0][i] == player && a[1][i] == player && a[2][i] == player) return true;
        }
        if (a[0][0] == player && a[1][1] == player && a[2][2] == player) return true;
        if (a[0][2] == player && a[1][1] == player && a[2][0] == player) return true;
        return false;
    }

    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {0};  // Initialize the board to 0 (empty)
        int currentPlayer = 1;  // 1 for player 'A', -1 for player 'B'

        for (vector<int>& move : moves) {
            int row = move[0], col = move[1];
            a[row][col] = currentPlayer;  // Make the move

            // Check if this move caused a win
            if (checkWinner(a, currentPlayer)) {
                return currentPlayer == 1 ? "A" : "B";
            }

            // Switch player for next turn
            currentPlayer = -currentPlayer;
        }

        // If all moves are used up and there's no winner, check if it's a draw or pending
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (a[i][j] == 0) {
                    return "Pending";  // There's still an empty spot
                }
            }
        }

        return "Draw";  // All spots filled and no winner
    }
};
