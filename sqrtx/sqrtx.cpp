class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        long long int low=2, end=x/2;
        while(low<=end){
            long long int mid = low+(end-low) / 2;
            if(mid*mid==x){
                return mid;
            }else if(mid*mid>x){
                end=mid-1;
            }else{
                low=mid+1;
            }
        }
        return end;
        
    }
};