class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        int diff=arr[1]-arr[0]; //for checking diff between two numbers
        // int constDiff = 0; // for checking diff is constant or not
        int nextDiff = 0;
        if(n<=2){
            return true;
        }
        for(int i=2; i<n; i++){
            if(arr[i]-arr[i-1]!=diff){
                return false;
            }
            // diff=arr[i]-arr[i-1];
            // nextDiff = abs(arr[i]-arr[i+1]);
            // if(diff == nextDiff){
            //     return true;
            //     break;
            // }  
        }
       
        return true;
        
    }
};



// how to find if the diff between two consecutive elements is equal or not?
