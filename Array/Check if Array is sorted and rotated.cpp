Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/


# Brute-force approach:

- Create a duplicate array res same as nums res=nums= [3,4,5,1,2]
- Sort the original array 
// nums = [3,4,5,1,2] ---> a
// res = [3,4,5,1,2] ---> b

// sort nums array ---> [1,2,3,4,5] ----> a
- check if nums[i]==res[(i+x)%nums.length] where x = no of positions array is rotated by
- if nums[i]==res[i] return true else return false
  
  Code :

class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> res;
        res=nums;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        // [1,2,3,4,5] 
        auto first = find(res.begin(),res.end(),nums[0]);
//             finds 1 in result array
        auto x = res[first]-nums[first];
        for(int i=0; i<n; i++){
            if(nums[i]==res[(i+x)%n]){
                return true;
            }else{
                return false;
            }
        }
//         Optimal approach - Since the array is sorted and rotated there can only be one case where nums[i]>nums[i+1] and if array is only sorted then it would be 0
        int n=nums.size();
        int count=0;
        for(int i=0; i<n; i++){
            if(nums[i]>nums[(i+1)%n]){
                count++;
            }
        }
        return (count<=1);
         
        
    }
};
