class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();


        vector<pair<int,int>> zeros;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 0) {
                    zeros.push_back({i, j});
                }
            }
        }


        for(auto &p : zeros) {
            int ri = p.first;
            int cj = p.second;

  
            for(int col = 0; col < n; col++) {
                matrix[ri][col] = 0;
            }

            for(int row = 0; row < m; row++) {
                matrix[row][cj] = 0;
            }
        }
    }
};
