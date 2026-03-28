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