class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t count=0, k=31;
        while(n!=0){
            if((n & 1)==1) count++;
            n = n >> 1;
        }
        return count;
        
    }
};