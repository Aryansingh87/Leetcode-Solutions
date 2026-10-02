#include <vector>

class Solution {
public:
    void gameOfLife(std::vector<std::vector<int>>& board) {
        int rows = board.size();
        if (rows == 0) return;
        int cols = board[0].size();

        auto countNeighbors = [&](int r, int c) {
            int nei = 0;
            for (int i = r - 1; i <= r + 1; ++i) {
                for (int j = c - 1; j <= c + 1; ++j) {
                    if ((i == r && j == c) || i < 0 || j < 0 || i >= rows || j >= cols) {
                        continue;
                    }
                    if (board[i][j] == 1 || board[i][j] == 3) {
                        nei++;
                    }
                }
            }
            return nei;
        };

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                int nei = countNeighbors(r, c);
                if (board[r][c] == 1) {
                    if (nei == 2 || nei == 3) {
                        board[r][c] = 3; // Live to Live
                    }
                } else {
                    if (nei == 3) {
                        board[r][c] = 2; // Dead to Live
                    }
                }
            }
        }

        // Final pass to convert states 2 and 3 to final values 1, and others to 0
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (board[r][c] == 3 || board[r][c] == 2) {
                    board[r][c] = 1;
                } else {
                    board[r][c] = 0;
                }
            }
        }
    }
};

