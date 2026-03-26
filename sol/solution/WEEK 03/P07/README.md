```cpp
Consider the following code segment.

#include <iostream>
using namespace std;
class Counter {
    int a, b, c;
public:
    Counter(int x = 1) : c(x++), b(x++), a(++x) {}
    void print() { cout << a << ", " << b << ", " << c << endl; }
};

int main() {
    Counter d(5);
    d.print();
    return 0;
}

What will be the output?
a) 6,6,7
b) 6,5,7
c) 6,6,5
d) 7,6,6
```
```cpp
a) 6,6,7
```