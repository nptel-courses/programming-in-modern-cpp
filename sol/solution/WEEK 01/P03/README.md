```cpp
Consider the following code and find the correct output.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    rotate(arr.begin(), arr.begin()+2, arr.begin()+4);
    for(auto i : arr)
        cout << i << " ";
    return 0;
}

What is the output of the above code?
a) 3 1 2 4 5 6 7
b) 3 4 1 2 5 6 7
c) 4 1 2 3 5 6 7
d) 1 3 2 4 5 6 7
```