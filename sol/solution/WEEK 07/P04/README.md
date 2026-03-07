```cpp
Consider the code segment given below.

#include <iostream>
using namespace std;
class X { public: virtual ~X() {} };
class Y : public X {};
class Z : public X {};
int main(){
    X objX;
    Y objY;
    X* p1 = dynamic_cast<X*>(&objY); //LINE-1
    p1 == NULL ? cout << "10 " : cout << "11 ";
    Y* p2 = dynamic_cast<Y*>(p1); //LINE-2
    p2 == NULL ? cout << "20 " : cout << "21 ";
    Z* p3 = dynamic_cast<Z*>(new X); //LINE-3
    p3 == NULL ? cout << "30 " : cout << "31 ";
    Z* p4 = dynamic_cast<Z*>(&objY); //LINE-4
    p4 == NULL ? cout << "40 " : cout << "41 ";
    return 0;
}

What will be the output?
a) 11 21 31 40  
b) 11 21 30 40  
c) 11 20 31 40  
d) 11 21 31 41
```

```cpp
b) 11 21 30 40
```