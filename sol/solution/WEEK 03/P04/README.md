```cpp
Consider the following code segment.

#include <iostream>
using namespace std;
class Point {
    int x, y;
public:
    Point(int _x, int _y) : x(_x), y(_y) { }
    void change(Point *new_P) { this = new_P; }
    void show() { cout << x << ", " << y << endl; }
};

int main() {
    Point p1(10, 20);
    Point p2(20, 50);
    p1.change(&p2);
    p1.show();
    return 0;
}

What will be the output/error?
a) 10, 20
b) 20, 50
c) Compiler Error: lvalue required as left operand of assignment
d) Compiler Error: private x, y are inaccessible
```
```cpp
c) Compiler Error: lvalue required as left operand of assignment
```