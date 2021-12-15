# [Rotate Array](https://leetcode.com/problems/rotate-array/) 

Approach : Divide the array into two parts p1 & p2 and then reverse p1, reverse p2 and then reverse the entire array

 k = k % n ---> for +ve numbers i.e k > 0
 k = k+n -----> for -ve numbers i.e k < 0

**Code** :

```cpp
class Solution {
public:
    void reverse(vector<int>& nums, int i, int j){
        int p1 = i;
        int p2 = j;
        
        while(p1 < p2){
            int temp = nums[p1];
            nums[p1]=nums[p2];
            nums[p2] = temp;
            
            p1++;
            p2--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        k = k % n;
        if(k < 0){
            k = k + n;
        }
//         reverse part 1 
        reverse(nums, 0, n-k-1);
//         reverse part 2
        reverse(nums, n-k, n-1);
//         reverse all
        reverse(nums, 0 , n-1); 
    }
};

```
**Algorithm** : 

k = k%n ----> for k>0 i.e +ve no's
k = k+n -----> for k<0 i.e -ve no's
1. Divide the array into 2 parts, p1 & p2
p1 = 0 to n-k-1
p2 = n-k to n-1
2. Reverse p1
3. Reverse p2 
4. Reverse entire array after reversing p1 & P2

**Time Complexity** : O(N)
**Space Complexity**: O(1)
