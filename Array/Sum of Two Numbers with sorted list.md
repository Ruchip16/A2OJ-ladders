https://binarysearch.com/problems/Sum-of-Two-Numbers-with-Sorted-List

**Two-Pointer approach:**

```cpp
bool solve(vector<int>& nums, int k) {
    // two-pointer
    int n=nums.size();
    int i=0, j=n-1;
    while(i<j){
        if(nums[i]+nums[j]==k){
            return true;
            break;
        }
        else if(nums[i]+nums[j]<k){
            i++;
        }
        else j--;
    }
    return false;
    
    // Brute-force
    // for(int i=0,j=i+1; i<n-1,j<n; i++,j++)
    // {
    //     if(nums[i]+nums[j]==k){
    //         return true;
    //         break;
    //     }
    // }
    
    
}
```
