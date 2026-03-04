```cpp
Consider the following code segment.

#include <iostream>
#include <vector>
using namespace std;
int main() {
    const int size = 3, c = 65;
    vector<char> vec(size, 'A');
    for (int i = 1; i <= 2; i++)
        vec.push_back(65 + i);
    vec.resize(10, 90);
    vec.resize(8);
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    return 0;
}

Choose the correct option to fill in the blank at LINE-1 so that
the program does not generate any compilation error.
a) A A A B C Z Z Z
b) A A B B C Z Z Z
c) A A A B C Z Z
d) A A A B C Z Z Z Z
```