/*
Consider the following code segment.

#include <iostream>
#include <typeinfo>
using namespace std;

class B {
public:
    virtual ~B() {}
};

class D : public B {};

int main() {
    B bobj;
    D dobj;
    B *bp1 = &dobj;
    B *bp2 = &bobj;
    D *dp = &dobj;

    cout << (typeid(bp1) == typeid(bp2));
    cout << (typeid(*bp1) == typeid(*dp));
    cout << (typeid(*bp2) == typeid(*dp));
    cout << (typeid(dp) == typeid(bp1));

    return 0;
}

What will be the output?
a) 1001
b) 1100
c) 0101
d) 0110
*/

#include <iostream>
#include <typeinfo>
using namespace std;

class B
{
public:
    virtual ~B() {}
};

class D : public B
{
};

int main()
{
    B bobj;
    D dobj;
    B *bp1 = &dobj;
    B *bp2 = &bobj;
    D *dp = &dobj;
    cout << (typeid(bp1) == typeid(bp2));
    cout << (typeid(*bp1) == typeid(*dp));
    cout << (typeid(*bp2) == typeid(*dp));
    cout << (typeid(dp) == typeid(bp1));
    return 0;
}