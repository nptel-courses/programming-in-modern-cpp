```cpp
Consider the following code segment.

#include <iostream>
using namespace std;
int main(){
    int a = 2, b = 7;
    const int &p = ++a + ++b; //LINE-1
    cout << p;
    return 0;
}

Fill in the blank at LINE-1 with appropriate option/s such that the output is: 11
a) const
b) volatile
c) static
d) inline
```
```cpp
a) const
```