# Bubble Sort

- It is the simplest algorithm, also called as sinking sort
- It is a sorting algorithm which compares two adjacent elements and then swaps them if they are not in the correct order
- If there are n numbers in an array , no of total iterations would be n-1

### Bubble Sort Algorithm 

```cpp
bubbleSort(array)
  bool swapped = false;
  for(int i=0; i<n-1; i++)
    if(array[i]>array[i+1])
      swap(i,i+1)
      swapped = true
end bubbleSort
```

Time Complexity : Best case: O(N)
                  Worst Case: O(N^2)
Space Complexity: O(1)
