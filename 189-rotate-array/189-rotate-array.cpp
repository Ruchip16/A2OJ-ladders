class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k); 
        reverse(nums.begin()+k, nums.end());
        
    }
};









// nums = [1,2,3,4,5,6,7], k = 3 ---> [7,6,5,4,3,2,1]  
    
//     p1 = [1,2,3,4] --> [4,3,2,1]
//     p2 = [5,6,7] --> [7,6,5]
//     p1+p2 -- > 
//  [4,3,2,1,7,6,5]  ---> [5,6,7,1,2,3,4]
 
