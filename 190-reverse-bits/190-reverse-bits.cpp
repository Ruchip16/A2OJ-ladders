class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=0, k=31;  
        // res --> to store result & k=31 coz we need to return a binary string of length 32 
        
        while(n!=0){
            res+=(n & 1) << k;  
            // n & 1 --> to get right-most bit and then shift that bit till the 32 position
            n = n >> 1; 
            // move the pointer to the next bit
            k--; // decrement the length
        }
        return res;
    }
};






// Dry run eg n = 10101010
// res=0, k=31
//     10101010
//   &        1
//     --------
//            0
// res+=0<<31
// n = n >> 1 
// 10101010 = 10101010 >> 1 
//         n = 1010101
// k=30