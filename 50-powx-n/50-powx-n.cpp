class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        // else if(n>0)
        //     return (x*myPow(x,n-1));  // satisfies for +ve n 
        
        return myPow(x*x,n/2)*((n%2==0)?1:n>0?x:1/x);
        
//         int p = x * myPow(x,n-1);
//         return p;
        
    }
};