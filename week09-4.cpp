// week09-4.cpp 螺旋畫 Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int top = 0, bottom = m - 1, left = 0, right = n - 1;
        vector<int> ans;
        while (top <= bottom && left <= right) {
            // 1. 由左往右，遍歷 top 行
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[top][j]);
            }
            top++; // 收縮上邊界
            if (top > bottom) break;

            // 2. 由上往下，遍歷 right 列
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--; // 收縮右邊界
            if (left > right) break;

            // 3. 由右往左，遍歷 bottom 行
            for (int j = right; j >= left; j--) {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--; // 收縮下邊界
            if (top > bottom) break;

            // 4. 由下往上，遍歷 left 列
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
            if (left > right) break;
        }
        return ans;
    }
};
