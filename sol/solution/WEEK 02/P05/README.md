```cpp
Consider the following code segment.

#include <iostream>
using namespace std;

void modify(int x1, int &x2, int *x3) { //Line-1
    x2 = x1 * 2;
    *x3 = x1 + 5;
}

int main() {
    int x = 2, y, z;
    modify(x, y, &z);
    cout << x << " " << y << " " << z;
    return 0;
}

Choose the correct option for parameter list at LINE-1 such that the output is 2 4 7.
a) int &x2, int *x3
b) int *x2, int *x3
c) int &x2, int &x3
d) int *x2, int &x3
```
```cpp
a) int &x2, int *x3
```