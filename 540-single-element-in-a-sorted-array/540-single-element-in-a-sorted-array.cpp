class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
//         Linear Search
        for(int i=0; i<n-1; i=i+2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
                break;
            }
        }
        return nums.back();
        
//         Binary Search
//         int s=0, e=n-1;
//         while(s<=e){
//             int mid = s+(e-s)/2;
//             if(nums[mid]!=nums[mid-1] && nums[mid+1]){
//                 return mid;
//             }
//             else{
//                 e=mid;
//             }
            
//         }
//         return -1;
    }
};