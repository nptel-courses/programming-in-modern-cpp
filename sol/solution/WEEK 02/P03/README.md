```cpp
Consider the following code segment and find the output.

#include <iostream>
using namespace std;
#define INCR(x) x++
int main() {
    int a = 2;
    cout << INCR(a++) << " " << INCR(a++) << endl;
    return 0;
}

What will be the output/error?
a) 3 4
b) 4 4
c) 3 5
d) Compilation Error: lvalue required as increment operand
```
```cpp
d) Compilation Error: lvalue required as increment operand
```