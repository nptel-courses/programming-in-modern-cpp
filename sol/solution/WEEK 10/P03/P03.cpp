/*
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
*/

/*
option: a) auto wrapper(T& f) -> decltype(f())
*/
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
auto wrapper(T& f) -> decltype(f()) { // LINE-1
    return f();
}

int main(){
    FunA fa{5};
    FunB fb{5};

    wrapper(fa) = 10;
    wrapper(fb);
    return 0;
}

/*
option: d) decltype(auto) wrapper(T& f)
*/
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
decltype(auto) wrapper(T& f) { // LINE-1
    return f();
}

int main(){
    FunA fa{5};
    FunB fb{5};

    wrapper(fa) = 10;
    wrapper(fb);
    return 0;
}