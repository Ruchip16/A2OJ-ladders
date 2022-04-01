class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n<2){
            return 0;
        }
        int curr_max = INT_MIN;
        sort(nums.begin(), nums.end());
        for(int i=1; i<n; i++){
            if(nums[i]-nums[i-1] > curr_max){
                curr_max = nums[i]-nums[i-1];
            }
        }
        return curr_max;
    }
};

