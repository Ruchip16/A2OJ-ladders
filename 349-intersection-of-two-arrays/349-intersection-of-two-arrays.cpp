class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> res;
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(nums1[i]==nums2[j]){
                    res.insert(nums1[i]);
                    break;
                }
            }
        }
       
        vector<int> mres;
        for(auto x : res){
            mres.push_back(x);
        }
        return mres;
    }
};




// nums1 = [1,2,2,1] 
// nums2 = [2,2]

// brute-force:
// Traverse the nums1 array & nums2 array and find the largest one
// n1 = 4 
// n2 = 2
// i=0, j=0--> 1,2 
// i=1  ---> 2,2
// i=2 ---> 2

// // nums1 = [4,9,5], nums2 = [9,4,9,8,4,5]
//     n1 = 3
//     n2 = 6
//     i=0 --> 4,9
//     i=1 ---> 9,4 
//     i=2 ---> 5,9
//     i=3 ---> 