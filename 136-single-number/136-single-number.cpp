class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        // sort(nums.begin(), nums.end());
        int ans=nums[0];
        for(int i=1; i<n; i++){
           ans = nums[i]^ans;
        }
        return ans;
        
    }
};











