class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // int perimeter = 0;
        for(int i=nums.size()-3 ; i>=0; i--){
            if(nums[i] + nums[i+1]> nums[i+2]){
                return (nums[i]+nums[i+1]+nums[i+2]);
            }
        }
        // for(int side : nums){
        //     perimeter+= nums[side];
        // }
        // return perimeter;
        return 0;
    }
};






// Perimeter of triangle = a+b+c = 2+2+1 = 5
// how to know the largest perimeter of a triangle with a non-zero area?
// Area of triangle with given sides = squareroot()

 
