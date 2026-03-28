# WEEK 10: Assignment 10 - Problem 01 - 09

## **PROBLEM 01**
```cpp
Consider the code segment (in C++11) given below.

#include <iostream>
using namespace std;

int main(){
    int x = 5;
    const int y = 7;
    int& r = x;

    auto p = x;
    auto q = r;
    auto s = y;

    r += 3;
    p += 2;
    q += 4;
    s += 5; // LINE-1

    cout << x << ", " << y << endl;
    cout << p << ", " << q << ", " << s << endl;
    return 0;
}

What will be the output/error?
a)  12, 7
    7, 12, 12

b)  8, 7
    7, 9, 12

c)  Compiler error at LINE-1: assignment of read-only variable 's'

d)  8, 7
    7, 7, 12
```
```cpp
b)  8, 7
    7, 9, 12
```

## **PROBLEM 02**
```cpp
Consider the code segment (in C++11) given below.

#include <iostream>
#include <vector>

int main(){
    std::vector<int> v { 1, 2, 3, 4 };
    int x = 0;

    for(________________________________________) // LINE-1
    it += 5;

    for(auto it = v.begin(); it != v.end(); ++it)
    std::cout << *it << " ";
    return 0;
}

Identify the appropriate option(s) to fill in the blank at LINE-1 such that the output of the program is: 6 7 8 9
a) auto it : v
b) auto& it : v
c) decltype(x) it : v
d) decltype((x)) it : v
```
```cpp
b) auto& it : v
d) decltype((x)) it : v
```

## **PROBLEM 03**
```cpp
Consider the code segment (in C++14) given below.
#include <iostream>

struct FunA {
    int x;
    FunA(int v) : x(v) {}
    int& operator()() { std::cout << "A "; return x; }
};

struct FunB {
    int x;
    FunB(int v) : x(v) {}
    int operator()() { std::cout << "B "; return x; }
};

template <typename T>
__________________ { // LINE-1
    return f();
}

int main(){
    FunA fa{5};
    FunB fb{5};

    wrapper(fa) = 10;
    wrapper(fb);
    return 0;
}

Identify the appropriate option(s) to fill in the blank at LINE-1 such that the output of the program is A B.
a) auto wrapper(T& f) -> decltype(f())
b) auto wrapper(T& f)
c) auto& wrapper(T& f)
d) decltype(auto) wrapper(T& f)
```
```cpp
a) auto wrapper(T& f) -> decltype(f())
d) decltype(auto) wrapper(T& f)
```

## **PROBLEM 04**
```cpp
Consider the following code segment (in C++11).

#include <iostream>

long double operator"" _HR(long double x){
    return x * 60;
}

long double operator"" _MIN(long double x){
    return x;
}

class Time {
public:
    Time(int t1, int t2) : t1_(t1), t2_(t2) {}
    int getTime() { return t1_ + t2_; }
private:
    int t1_, t2_;
};

int main(){
    Time t(_______________________); // LINE-1
    std::cout << t.getTime() << "MIN";
    return 0;
}

Choose the appropriate option(s) to fill in the blank at LINE-1 such that the output is 185MIN.
a) 3.0HR, 5.0MIN
b) 3.0_HR, 5.0_MIN
c) (HR)3.0, (MIN)5.0
d) 3_HR, 5_MIN
```
```cpp
b) 3.0_HR, 5.0_MIN
```

## **PROBLEM 05**
```cpp
Consider the code segment (C++11) given below.

#include <iostream>
using namespace std;

class Item{
    int v;
public:
    Item(int _v = 0) : v(_v) {}
    Item(const Item& rhs) { cout << "cp-ctor" << endl; }
    Item& operator=(const Item& rhs){
    cout << "cp-=-op" << endl; return *this;
    }
    Item(Item&& rhs) noexcept { cout << "mv-ctor" << endl; }
    Item& operator=(Item&& rhs) noexcept{
    cout << "mv-=-op" << endl; return *this;
    }
    friend Item makeVal(const Item& x){
    Item t;
    return t; // returns prvvalue
    }
    friend const Item& giveRef(Item& x){
    return x; // returns lvalue reference
    }
};

int main(){
    Item a(10);
    Item b = a;    // LINE-1
    Item c;    c = a;    // LINE-2
    Item d;    d = makeVal(a);  // LINE-3
    Item e;    e = giveRef(d);   // LINE-4
    Item f(std::move(e));    // LINE-5
    return 0;
}

What will be the output?

a)  cp-ctor
    cp-==op
    cp-==op
    cp-==op
    mv-ctor

b)  cp-ctor
    cp-=-op
    mv-=-op
    cp-=-op
    mv-ctor

c)  cp-ctor
    cp-ctor
    mv-ctor
    cp-ctor
    mv-ctor

d)  cp-=-op
    cp-=-op
    cp-=-op
    cp-=-op
    mv-ctor
```
```cpp
b)  cp-ctor
    cp-=-op
    mv-=-op
    cp-=-op
    mv-ctor
```

## **PROBLEM 06**
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

## **PROBLEM 07**
```cpp
Consider the following code segment.

#include <iostream>

void display(int* p){ // some code }

template<typename F, typename T>
void invoke(F f, T arg){
    f(arg);
}

int main(){
    int x = 10;
    int* px = &x;

    invoke(display, px);    // LINE-1
    invoke(display, x);     // LINE-2
    invoke(display, *px);   // LINE-3
    invoke(display, nullptr); // LINE-4
    return 0;
}

Which of the following lines generate/s compiler error?
a) LINE-1
b) LINE-2
c) LINE-3
d) LINE-4
```
```cpp
b) LINE-2
c) LINE-3
```

## **PROBLEM 08**
```cpp
Consider the code segment (C++11) given below.

#include <iostream>
using namespace std;

void compute(int x){
    constexpr int a = 10;
    constexpr int b = a * 2;    // LINE-1
    constexpr int c = b + a;    // LINE-2
    constexpr int d = x + b;    // LINE-3
    constexpr int e = b * c;    // LINE-4
}

int main(){
    compute(5);
    return 0;
}

Identify the line(s) that generate(s) compiler error.
a) LINE-1
b) LINE-2
c) LINE-3
d) LINE-4
```
```cpp
c) LINE-3
```

## **PROBLEM 09**
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