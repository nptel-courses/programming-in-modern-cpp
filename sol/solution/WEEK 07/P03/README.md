```cpp
Consider the following code segment.

#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() {
        cout << "Parent ";
    }
};

class Child : public Parent {
public:
    virtual void show(){
        cout << "Child";
    }
};

int main() {
    Parent p;
    Child c;
    try {
        Parent &r1 = static_cast<Parent &>(c);  // LINE-1
        r1.show();
        Parent &r2 = dynamic_cast<Parent &>(c); // LINE-2
        r2.show();
        Child &r3 = static_cast<Child &>(p);    // LINE-3
        r3.show();
        Child &r4 = dynamic_cast<Child &>(p);   // LINE-4
        r4.show();
    }
    catch (exception &e) {
        cout << e.what();
    }
    return 0;
}

What will be the output?
a) Child Child Parent
b) Child Child Parent Parent
c) Child Child Parent std::bad_cast
d) Child Parent Child Parent
```

```cpp
c) Child Child Parent std::bad_cast
```