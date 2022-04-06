class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
    
        // int left=0, end=s.size()-1;
        // while(left<=end)
        // {
        //     char temp=s[left];
        //     s[left]=s[end];
        //     s[end]=temp;
        //     left++;
        //     end--;
        // }
        // reverse(s.begin(),s.end());
        
        // int l=0, r=s.size()-1;
        // while(l<=r)
        // {
        //     swap(s[l++], s[r--]);
        // }
        int i=0; 
        int j = n-1;
        while(i<=j){
            int temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
   
        
    }
};