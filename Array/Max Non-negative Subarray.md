https://www.interviewbit.com/problems/max-non-negative-subarray/

**Brute-force Approach : A tweak of maximum  sum subarray (kadane's algo) but not the exact one**

*not correct approach revise once*

```cpp
<!--Brute-Force  -->
vector<int> Solution::maxset(vector<int> &A) {
    int n=A.size();
    vector<int> res;
    int current_max=INT_MIN;
    int prev_max=0;
    for(int i=0; i<n; i++){
        prev_max=A[i];
        if(current_max < prev_max){
            current_max = prev_max;
            res.push_back(current_max);
        }
        if(prev_max < 0){
            prev_max = 0;
        }
    }
    return res;
}
```
