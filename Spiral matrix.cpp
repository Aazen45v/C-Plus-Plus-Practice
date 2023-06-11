class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();    // number of rows
        int n = matrix[0].size(); // number of columns
        int totalElements = m * n;

        int startingRow = 0;
        int endingRow = m - 1;
        int startingCol = 0;
        int endingCol = n - 1;

        while (ans.size() < totalElements) {
            // Traverse top row from left to right
            for (int i = startingCol; i <= endingCol; i++) {
                ans.push_back(matrix[startingRow][i]);
            }
            startingRow++;

            // Traverse right column from top to bottom
            for (int i = startingRow; i <= endingRow; i++) {
                ans.push_back(matrix[i][endingCol]);
            }
            endingCol--;

            // Traverse bottom row from right to left
            if (startingRow <= endingRow) {
                for (int i = endingCol; i >= startingCol; i--) {
                    ans.push_back(matrix[endingRow][i]);
                }
                endingRow--;
            }

            // Traverse left column from bottom to top
            if (startingCol <= endingCol) {
                for (int i = endingRow; i >= startingRow; i--) {
                    ans.push_back(matrix[i][startingCol]);
                }
                startingCol++;
            }
        }

        return ans;
    }
};
