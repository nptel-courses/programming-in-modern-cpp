```cpp
Consider the code segment (C++11) given below.

#include <iostream>
#include <initializer_list>
using namespace std;

template<typename T>
class Container {
public:
    Container() { cout << "ctor-A" << endl; }
    Container(int x) { cout << "ctor-B" << endl; }
    Container(initializer_list<int> il) { cout << "ctor-C" << endl; }
    Container(int x, initializer_list<int> il) {
        cout << "ctor-D" << endl;
    }
};

int main(){
    Container<int> c1(5);
    Container<int> c2({1, 2});
    Container<int> c3{1, 2};
    Container<int> c4 = {1, 2};
    Container<int> c5(5, {1, 2});
    return 0;
}

What will be the output?

a)  ctor-B
    ctor-C
    ctor-C
    ctor-C
    ctor-D

b)  ctor-B
    ctor-C
    ctor-C
    ctor-A
    ctor-D

c)  ctor-B
    ctor-C
    ctor-B
    ctor-A
    ctor-C

d)  ctor-B
    ctor-C
    ctor-C
    ctor-C
    ctor-C
```
```cpp
a)  ctor-B
    ctor-C
    ctor-C
    ctor-C
    ctor-D
```