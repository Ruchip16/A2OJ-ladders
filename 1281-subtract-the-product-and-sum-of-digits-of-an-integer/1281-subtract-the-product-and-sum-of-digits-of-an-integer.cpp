class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while(n > 0){
            int number = int(n%10);
            product*=number;
            sum+=number;
            n/=10;
        }
        return (product-sum);
        
    }
};