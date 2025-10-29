class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {0};  // Initialize the board with 0 (empty cells)
        int now = -1;  // -1: Player 1 (A), 1: Player 2 (B)

        for (int moveIndex = 0; moveIndex < moves.size(); moveIndex++) {
            int i = moves[moveIndex][0], j = moves[moveIndex][1];
            a[i][j] = now;  // Place the current player's mark on the board

            // Check if there's a winner
            if (a[i][0] == now && a[i][1] == now && a[i][2] == now) return now == -1 ? "A" : "B"; // Check row
            if (a[0][j] == now && a[1][j] == now && a[2][j] == now) return now == -1 ? "A" : "B"; // Check column
            if (a[0][0] == now && a[1][1] == now && a[2][2] == now) return now == -1 ? "A" : "B"; // Check diagonal (left to right)
            if (a[0][2] == now && a[1][1] == now && a[2][0] == now) return now == -1 ? "A" : "B"; // Check diagonal (right to left)

            // Switch players
            now = (now == -1) ? 1 : -1;
        }

        // If no winner, check if the game is a draw or still pending
        if (moves.size() == 9) return "Draw";  // All spots are filled, it's a draw
        return "Pending";  // There are still moves to be played
    }
};
