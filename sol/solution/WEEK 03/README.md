# WEEK 03: Assignment 03 - Problem 01 - 09

## **PROBLEM 01**
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

## **PROBLEM 02**
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
b) 0 1 2
```

## **PROBLEM 03**
```cpp
Consider the following code segment.

#include <iostream>
#include <string>
using namespace std;
class Test {
    const char *s2, *s3, *s1; // LINE-1
public:
    Test(const char* _s1, const char* _s2, const char* _s3) :
        s1(setS1(_s1)), s2(setS2(_s2)),
        s3(setS3(_s3)){}
    const char* setS1(const char* s) {
        cout << s << " ";
        return strdup(s);
    }
    const char* setS2(const char* s) {
        cout << s << " ";
        return strdup(s);
    }
    const char* setS3(const char* s) {
        cout << s << " ";
        return strdup(s);
    }
};

int main() {
    Test obj("Programming", "Modern", "C++");
    return 0;
}

What will be the output/error?
a) C++ Modern Programming
b) Modern C++ Programming
c) Programming Modern C++
d) Compilation Error
```
```cpp
b) Modern C++ Programming
```

## **PROBLEM 04**
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

## **PROBLEM 05**
```cpp
Observe the following class.

class acc_holder {
    int id;
    string email;
    string phone;
    double balance;

public:
    int getId() const { return id; }
    void setEmail(string e) { email = e; }
    string getPhone() const { return phone; }
};

Which data members are read-only, write-only, readable and writable, or invisible?
a) id is readonly
b) email is readonly
c) phone is writeonly
d) balance is invisible
```
```cpp
a) id is readonly
d) balance is invisible
```

## **PROBLEM 06**
```cpp
Consider the following code segment.

class const_pt {
    // code...
};

int main() {
    const const_pt m; // LINE-1
    return 0;
}

What is/are the type/s of this pointer associated with the object m?

a) const const_pt* this;
b) const_pt* const this;
c) const_pt const* const this;
d) const const_pt* const this;
```
```cpp
c) const_pt const* const this;
d) const const_pt* const this;
```

## **PROBLEM 07**
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

## **PROBLEM 08**
```cpp
Consider the following code segment.

#include<iostream>
using namespace std;
class CharClass {
    char x;
public:
    CharClass(char _x): x(_x) { }
    void display() { cout << ______ << " "; } //LINE-1
};

int main() {
    CharClass c('A');
    c.display();
    return 0;
}

Fill in the blank at LINE-1 such that the program will print B.
a) ++this->x
b) ++this.x
c) ++x
d) x++
```
```cpp
a) ++this->x
c) ++x
```

## **PROBLEM 09**
```cpp
Consider the following code segment.

#include <iostream>
using namespace std;
class TestClass {
    int x;
public:
    TestClass(int x_) : x(x_) { cout << "ctor " ; }
    TestClass(TestClass &d) { x = d.x; cout << "copy_ctor " ; }
    TestClass& operator=(TestClass d) { x = d.x; cout << "assign " ; return *this; }
};

int main() {
    TestClass d1(5);
    TestClass d2 = d1;
    TestClass d3(10);
    d3 = d2;
    return 0;
}

What will be the output?
a) ctor copy_ctor ctor copy_ctor assign
b) ctor copy_ctor ctor assign
c) ctor copy_ctor ctor
d) ctor assign copy_ctor
```
```cpp
a) ctor copy_ctor ctor copy_ctor assign
```