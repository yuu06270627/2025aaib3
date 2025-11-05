class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // 第一步，先標記所有0，且記住它的位置
        int M = matrix.size(), N = matrix[0].size();
        vector<bool> markI(M, false), markJ(N, false); // 記錄行和列是否有0
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (matrix[i][j] == 0) { // 遇到0，記下
                    markI[i] = true; // 行記錄
                    markJ[j] = true; // 列記錄
                }
            }
        }

        // 第二步，把不應該顯示的地方，根據記錄的行列位置設為0
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (markI[i] == true || markJ[j] == true) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
