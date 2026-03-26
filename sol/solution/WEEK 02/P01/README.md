```cpp
Consider the following program.
#include <iostream>
using namespace std;

int main(){
    const int a = 10;       // LINE-1
    a = 50;                 // LINE-2
    cout << a;
    return 0;
}

What will be the output/error?
a) 10
b) 50
c) Compilation Error at LINE-1:     const must be initialized
d) Compilation Error at LINE-2:     assignment of read only variable ‘a’
```
```cpp
d) Compilation Error at LINE-2:     assignment of read only variable ‘a’
```