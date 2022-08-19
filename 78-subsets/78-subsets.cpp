class Solution {
public:
    
    void present_subsets(vector<int>& nums, int pos, vector<int>& curr, vector<vector<int>>& ans){
        int n = nums.size();
        ans.push_back(curr);
        for(int i=pos; i<n; i++){
            curr.push_back(nums[i]);
            present_subsets(nums, i+1, curr, ans);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        // int n=nums.size();
        vector<vector<int>> ans;
        vector<int> curr;
        present_subsets(nums, 0, curr, ans);
        return ans;
        
    }
};