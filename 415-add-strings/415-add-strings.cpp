class Solution {
public:
    string addStrings(string num1, string num2) {
 
        int i = num1.size()-1;
        int j = num2.size()-1;
        string res = "";
        
        int carry = 0;
        
        while(i>=0 || j>=0 || carry){
            // value=carry;
            long value = 0;
            if(i>=0){
                value+=(num1[i]-'0');
                i--;
            }
            if(j>=0){
                value+=(num2[j]-'0');
                j--;
            }
            value+=carry;
            carry = value / 10;
            value = value % 10;
            res+=to_string(value);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};