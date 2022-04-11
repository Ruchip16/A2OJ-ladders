class Solution {
public:
    int hammingWeight(uint32_t n) {
        // int count = 0;
        // if(n%10==1){
        //     count++;
        // }
        // return count;
        return __builtin_popcount(n);
    }
};


// Approach 1 : Iterate through the n and count the no of ones 
// Approach 2 : Using builtin function