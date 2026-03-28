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
#include <iostream>
using namespace std;

void compute(int x)
{
    constexpr int a = 10;
    constexpr int b = a * 2; // LINE-1
    constexpr int c = b + a; // LINE-2
    constexpr int d = x + b; // LINE-3
    constexpr int e = b * c; // LINE-4
}

int main()
{
    compute(5);
    return 0;
}
```