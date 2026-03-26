```cpp
Consider the following code segment.

#include <iostream>
using namespace std;
class Integer {
    int n;
public:
    Integer() {
        cout << 0 << " ";
    }
    Integer(int i) : n(i) {
        cout << n << " ";
    }
};
int main() {
    int i = 1;
    Integer n1;               // LINE-1
    Integer *n2 = new Integer(i++);
    Integer *n3;
    new Integer(i++);
    return 0;
}

What will be the output?
a) 0 1 0 2
b) 0 1 2
c) 0 2 3
d) 1 2
```
```cpp

```