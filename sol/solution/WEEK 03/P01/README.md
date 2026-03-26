```cpp
Consider the following snippet:

class Complex {
private:
    int x, y;
public:
    void setX(int x_) { x = x_; }
    void setY(int y_) { y = y_; }
    void print() { cout << x << ", " << y; }
    void incr() { x++; y++; }
    int incrX() { return x + 1; }
    int incrY() { return ++y; }
};

Identify the set of all methods that change the state of Complex class objects?
a) setX(), setY(), print()
b) setX(), setY(), incrX(), incrY()
c) incr(), incrX(), incrY()
d) setX(), setY(), incr(), incrY()
```
```cpp
d) setX(), setY(), incr(), incrY()
```