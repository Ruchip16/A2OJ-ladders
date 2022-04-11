class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size(); 
        while(k-- > 0){
            int ans = grid[m-1][n-1];
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    int temp = grid[i][j];
                    grid[i][j] = ans;
                    ans = temp;
                    // grid[i][j] = grid[i][j+1];
                    // grid.push_back(ans);
                }
            }   
        }
        return grid;
        
        
    }
};





// grid = [[1,2,3],
//         [4,5,6],
//         [7,8,9]], k = 1

