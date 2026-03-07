```cpp
Consider the following code segment.

#include <iostream>
using namespace std;

class A {
public:
    virtual void f() {}
    virtual void g() {}
};

class B : public A {
public:
    void f() {}
    void g() {}
    virtual void j() {}
};

class C : public B {
public:
    void f() {}
    virtual void h() {}
};

What will be the virtual function table (VFT) for the class C?
a) C::f(C* const)
   B::g(B* const)
   C::h(C* const)
   B::j(B* const)

b) A::f(A* const)
   B::g(B* const)
   C::h(C* const)
   B::j(B* const)

c) C::f(C* const)
   A::g(A* const)
   C::h(C* const)
   C::j(C* const)

d) C::f(C* const)
   B::g(B* const)
   B::h(B* const)
   B::j(B* const)
```

```cpp
a) C::f(C* const)
   B::g(B* const)
   C::h(C* const)
   B::j(B* const)
```