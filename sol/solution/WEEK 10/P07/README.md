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