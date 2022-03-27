class Solution {
public:
    void reverseString(vector<char>& s) {
    
        // int left=0, end=s.size()-1;
        // while(left<=end)
        // {
        //     char temp=s[left];
        //     s[left]=s[end];
        //     s[end]=temp;
        //     left++;
        //     end--;
        // }
        reverse(s.begin(),s.end());
        
        // int l=0, r=s.size()-1;
        // while(l<=r)
        // {
        //     swap(s[l++], s[r--]);
        // }
   
        
    }
};