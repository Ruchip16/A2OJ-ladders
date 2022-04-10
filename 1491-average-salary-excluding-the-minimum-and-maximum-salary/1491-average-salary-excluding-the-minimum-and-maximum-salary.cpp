class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        double avg = 0;
        int count=0;
        sort(salary.begin(), salary.end());
        for(int i=1; i<n-1; i++){
            avg+=salary[i];
            count++;
            
        }
        return avg/count;
        
    }
};