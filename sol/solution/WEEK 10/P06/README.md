```cpp
Consider the following program (in C++11).

#include <iostream>

class Parent {
public:
    Parent(int x) { std::cout << "P1 "; }
    Parent(const Parent& p) { std::cout << "P2 "; }
    Parent(Parent&& p) noexcept { std::cout << "P3 "; }
};

class Child : public Parent {
public:
    Child(int x, int y) : Parent(x) { std::cout << "C1 "; }
    Child(const Child& c) : Parent(c) { std::cout << "C2 "; }
    Child(Child&& c) noexcept : Parent(c) { std::cout << "C3 "; }
};

int main() {
    Child c1(10, 20);
    Child c2(c1);
    Child c3(std::move(c1));
    return 0;
}

What will be the output?
a) P1 C1 P2 C2 P3 C3
b) P1 C1 P2 C2 P2 C3
c) P1 C1 P3 C2 P3 C3
d) P1 C1 P2 C3 P2 C3
```
```cpp
b) P1 C1 P2 C2 P2 C3
```