class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        int product=1;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                return 0;
            }
            if(nums[i]<0){
                nums[i]=-1;
                product*=nums[i];
            }
            if(nums[i]>0){
                nums[i]=1;
                product*=nums[i];
            }
            // product*=nums[i];
            
            // nums[i]>0 ? nums[i]=1 : nums[i]=-1;
        // return -1;
        }
        if(product<0){
            return -1;
                // break;
        }
        return 1;
        
        
        
    }
};