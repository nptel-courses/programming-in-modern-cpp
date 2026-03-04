```cpp
Consider the following code segment.

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int data[] = {50, 30, 40, 10, 20};
    sort(&data[2], &data[4]);
    for (int i = 0; i < 5; i++)
        cout << data[i] << " ";
    return 0;
}

What will be the output?
a) 10 20 30 40 50
b) 50 30 10 40 20
c) 50 10 30 40 20
d) 50 10 20 30 40
```