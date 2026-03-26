```cpp
Consider the following program.

#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int * const p = &a;
    int c = 20;
    p = &c;   // LINE-1
    cout << *p;
    return 0;

}

What will be the output/error?
a) 10
b) 20
c) Compilation Error at LINE-1: assignment of read only variable ‘p’
d) Segmentation fault
```
```cpp
c) Compilation Error at LINE-1: assignment of read only variable ‘p’
```