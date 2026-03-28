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