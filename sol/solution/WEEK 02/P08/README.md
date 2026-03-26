```cpp
Consider the following code segment.

#include <iostream>
using namespace std;

enum class Colour { Red = 1, Green, Blue };

int main(){
    Colour c = Colour::Red;
    cout << static_cast<int>(c + 1); // LINE-1
    return 0;
}

What will be the output/error?
a) 2
b) Compilation Error at LINE-1: invalid operands to binary +
c) 1
d) 3
```
```cp
b) Compilation Error at LINE-1: invalid operands to binary +
```