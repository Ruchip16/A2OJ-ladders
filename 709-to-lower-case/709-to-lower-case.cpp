class Solution {
public:
    string toLowerCase(string s) {
        string res="";
        for(int i=0; i<s.size(); i++){
            char ch = s[i];
            if(ch >= 'A' && ch <= 'Z'){
                char lc = (char)(ch-'A'+'a');
                res+=lc;
            }else{
                res+=ch;
            }
        }
        return res;
        
    }
};