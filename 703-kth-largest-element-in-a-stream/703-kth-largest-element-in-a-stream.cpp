class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int mk;
    KthLargest(int k, vector<int>& nums) {
        mk = k;
        // while(minHeap!=k){
        //     minHeap.pop();
        // }
        for(int i=0; i<nums.size(); i++){
            add(nums[i]);
        }
        
    }
    
    int add(int val) {
        minHeap.push(val);
        if(minHeap.size()>mk){
            minHeap.pop();
        }
        return minHeap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */



// ["KthLargest", "add", "add", "add", "add", "add"]
// [[3, [4, 5, 8, 2]], [3], [5], [10], [9], [4]]

// k = 3 
// [4,5,8,2] 
// 1) sort the given array --> [2,4,5,8]
// add(3) --> [4,5,8,2,3] // sort [2,3,4,5,8] // kth largest ele i.e 3rd largest ele = 4
// add(5) --> [4,5,8,2,3,5] // sort [2,3,4,5,5,8] // Klargestele = 5
// add(10) --> [4,5,8,2,3,5,10] // sort [2,3,4,5,5,8,10] // kthlargestele = 5
// add(9) --> [4,5,8,2,3,5,10,9] // sort [2,3,4,5,5,8,9,10] // kthlargestele = 8
// add(4) --> [4,5,8,2,3,5,10,9,4] // sort [2,3,4,4,5,5,8,9,10] // kthlargestele = 8