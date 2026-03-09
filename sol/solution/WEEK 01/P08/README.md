```cpp
Consider the following cdoe segment.

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 1; i++) {
        int j = arr[i];
        replace(arr, arr + 5, j, *(________________));      //LINE-1
    }
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}

Fill in the blank at LINE-1 so that the program generates output as Found.
a) arr + 4 - i
b) arr + 5 - i
c) arr + i - 4
d) arr + i - 5
```
```cpp
a) arr + 4 - i
```