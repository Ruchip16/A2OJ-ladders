class Solution {
public:
    // create a new ans array to store output
    vector<vector<int>> ans;
    
    void makePermutations(vector<int>& nums, int pos){
        
        int n=nums.size();
        
        if(pos>=n-1){
            ans.push_back(nums);
            return;
        }
        else{
            for(int i=pos; i<n; i++){
                swap(nums[pos],nums[i]);
                makePermutations(nums, pos+1);
                swap(nums[pos],nums[i]);
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        makePermutations(nums, 0);
        return ans;
        
    }
};