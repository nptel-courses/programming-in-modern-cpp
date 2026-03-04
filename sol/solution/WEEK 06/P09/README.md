```cpp
Consider the following code segment.

#include<iostream>
using namespace std;
class base{
    int a;
    public:
        base(int i) : a(i) {}
        virtual void test(base *) { cout << a << endl; }
};
class derived : public base{
    int b;
    public:
        derived(int i=0, int j=0) : base(i), b(j) { }
        void test(derived *) { cout << b << endl; }
};
int main(){
    base *t1 = new derived(5,9);
    t1->test(new derived);  //Line-1
    return 0;
}

What will be the output?
a) 0  
b) 5  
c) 9  
d) garbage
```