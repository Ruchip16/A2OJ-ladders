class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for(int i=0; i<32; i++){
            int count = 0; 
            int temp = 1<<i;
            for(int j=0; j<n; j++){
                if((nums[j] & temp)!=0) count++;
            }
            if(count%3!=0){
                res = res | temp;
            }
        }
        return res;
    }
};