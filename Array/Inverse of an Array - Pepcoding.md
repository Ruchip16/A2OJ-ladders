# [Inverse of an array](https://pepcoding.com/resources/online-java-foundation/function-and-arrays/inverse-of-an-array-official/ojquestion)

Approach: 

1. Create a new array inverse of size = n
2. swap index = value with value = index


Code:

```cpp
#include<iostream>
using namespace std;

int* inverse(int* arr, int n){
    // create a new array called inverse of length same as arr
    int *inv = new int[n];
    for(int i=0; i<n; i++){
        // just swap index = value with value=index
        
        int value = arr[i];
        inv[value]=i;
    }
    return inv;
    
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    
    int* inv = inverse(arr,n);
    display(inv,n);
    
}
```
