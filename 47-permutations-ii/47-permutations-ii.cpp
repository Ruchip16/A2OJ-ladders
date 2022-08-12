class Solution {
public:
    vector<vector<int>> ans;
    
    bool should_swap(vector<int>& nums, int pos, int curr){
        for(int i=pos; i<curr; i++){
            if(nums[i]==nums[curr]){
                return false;
            }
        }
        return true;
    }
    
    void make_permutations(vector<int>& nums, int pos){
        int n=nums.size();
        // nums.unique();
        if(pos>=n-1){
            ans.push_back(nums);
            return;
        }else{
            for(int i=pos; i<n; i++){
                if(should_swap(nums, pos, i)){
                    swap(nums[pos], nums[i]);
                    make_permutations(nums, pos+1);
                    swap(nums[pos], nums[i]);
                }
                
            }
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        make_permutations(nums, 0);
        return ans;
    }
};