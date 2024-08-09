//840. Magic Squares In Grid

class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;

        for (int i = 0; i < rows - 2; ++i) {
            for (int j = 0; j < cols - 2; ++j) {
                if (isMagicSquare(grid, i, j)) {
                    ++count;
                }
            }
        }

        return count;
    }

private:
    bool isMagicSquare(const vector<vector<int>>& grid, int row, int col) {
        // Check if all numbers are distinct and between 1 and 9
        vector<int> nums(9);
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                int val = grid[row + i][col + j];
                if (val < 1 || val > 9) return false;
                nums[val - 1]++;
            }
        }
        for (int n : nums) {
            if (n != 1) return false;
        }

        // Check rows, columns, and diagonals
        int sum = grid[row][col] + grid[row][col + 1] + grid[row][col + 2];
        return (grid[row + 1][col] + grid[row + 1][col + 1] + grid[row + 1][col + 2] == sum &&
                grid[row + 2][col] + grid[row + 2][col + 1] + grid[row + 2][col + 2] == sum &&
                grid[row][col] + grid[row + 1][col] + grid[row + 2][col] == sum &&
                grid[row][col + 1] + grid[row + 1][col + 1] + grid[row + 2][col + 1] == sum &&
                grid[row][col + 2] + grid[row + 1][col + 2] + grid[row + 2][col + 2] == sum &&
                grid[row][col] + grid[row + 1][col + 1] + grid[row + 2][col + 2] == sum &&
                grid[row][col + 2] + grid[row + 1][col + 1] + grid[row + 2][col] == sum);
    }
};
