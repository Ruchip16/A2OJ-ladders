class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=0, max_count=0;
        // string ans="";
        for(int i=0; i<sentences.size(); i++){
            int k = sentences[i].length();
            count=1;
            // string ans = sentences[i];
            for(int j=0; j<k; j++){
                if(sentences[i][j] ==' ') count++;
            }
            // for( str: ans){
            //     count++;
            // }
            if(max_count < count){
                max_count = count;
            }
        }
        return max_count;
        
    }
};