/*
Consider the code segment given below.

#include <iostream>
using namespace std;

class B{
    public:
        void show(){ cout << "Base"; }
};

class D : public B{
    public:
        void print(){ cout << "Derived"; }
};

int main(){
    D d;
    B *b = &d;
    b->show();      // LINE-1
    b->print();     // LINE-2
    return 0;
}

What will be the output/error ?
a) BaseDerived
b) Base
c) Compilation error at LINE-1
d) Compilation error at LINE-2: class Base has no member named 'print'
*/

/**
 * option d). Compilation error at LINE-2: class Base has no member named 'print'
*/
#include <iostream>
using namespace std;
class B
{
public:
    void show() { cout << "Base"; }
};
class D : public B
{
public:
    void print() { cout << "Derived"; }
};
int main()
{
    D d;
    B *b = &d;
    b->show();  // LINE-1
    b->print(); // LINE-2
    return 0;
}