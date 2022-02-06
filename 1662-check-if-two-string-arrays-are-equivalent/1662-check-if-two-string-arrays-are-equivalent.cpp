class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans="";
        string res="";
        for(int i=0; i<word1.size(); i++){
            ans+=word1[i];
        }
        for(int j=0; j<word2.size(); j++){
            res+=word2[j];
        }
        if(ans == res){
            return true;
        }else return false;
        
    }
};