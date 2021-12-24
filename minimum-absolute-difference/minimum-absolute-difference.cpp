class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        vector<vector<int>> res;
        int n = arr.size();
        int min_diff = INT_MAX;
        int curr_pair_diff = INT_MIN;
        
        for(int i=0; i<n-1; i++){
            curr_pair_diff = arr[i+1]-arr[i];
            min_diff = min(min_diff, curr_pair_diff);
        }
        for(int j=0; j<n-1; j++){
            int check_diff = arr[j+1]-arr[j];
            if(check_diff == min_diff){
                res.push_back({arr[j],arr[j+1]});
            }
        }
        return res;
        
    }
};


// In the crypto space focus primarily on what probelms you want to solve, and not just basically on selling NFT's

// If you dont know a problem and you are actually in the middle of the interview

// -- If you have no hope you gotta do something coz you cant just fail or lose the job, prolly you dont know the stuff or you are not thinking in the right direction so try to work on that aspect and give yor best no matter what , coz solving a problem is not the main target here solving it with correct approach and intuition and optimizing it is the key, showcase your skill in such a way that even if you are not able to think properly you can prolly say like This is what I am thinking about it I am not sure... think out loud share your thought process and either you can pass or fail like you can judge if you gonna make it or break it , so if you dont know anything it is tramanic (thats a Nick's word) and it literally hurts my soul to do that thing like you dont wanna go through a tramanic experience and get rejected right so just think out loudddd

// -- Communicate loud and keep talking

// // Are Mock interviews helpful?
// -- Since programmers are intrvert sometimes they can be awkward but mock interviews really helps in improving your social skills - pramp.com 



// // How to share our thought process during best way is Write block comments while you are saying so that you both are in the same page coz structured approach always helpss write the plan first so that you can refer to it later as well

// // ALso if you dont know the question say it loud that this is what I dont know but I would love to learn it and dont feel discouraged the strategies to solve a problem 
// -- draw a rough diagram of the problem 
// -- discuss things =, test cases with the interviewer 
// -- Learn the strategy to solve aproblem and start first from the brute force approach and then go to the optimized one

