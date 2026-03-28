/*
Consider the code segment (C++11) given below.

#include <iostream>
using namespace std;

class Item{
    int v;
public:
    Item(int _v = 0) : v(_v) {}
    Item(const Item& rhs) { cout << "cp-ctor" << endl; }
    Item& operator=(const Item& rhs){
    cout << "cp-=-op" << endl; return *this;
    }
    Item(Item&& rhs) noexcept { cout << "mv-ctor" << endl; }
    Item& operator=(Item&& rhs) noexcept{
    cout << "mv-=-op" << endl; return *this;
    }
    friend Item makeVal(const Item& x){
    Item t;
    return t; // returns prvvalue
    }
    friend const Item& giveRef(Item& x){
    return x; // returns lvalue reference
    }
};

int main(){
    Item a(10);
    Item b = a;    // LINE-1
    Item c;    c = a;    // LINE-2
    Item d;    d = makeVal(a);  // LINE-3
    Item e;    e = giveRef(d);   // LINE-4
    Item f(std::move(e));    // LINE-5
    return 0;
}

What will be the output?

a)  cp-ctor
    cp-=-op
    cp-=-op
    cp-=-op
    mv-ctor

b)  cp-ctor
    cp-=-op
    mv-=-op
    cp-=-op
    mv-ctor

c)  cp-ctor
    cp-ctor
    mv-ctor
    cp-ctor
    mv-ctor

d)  cp-=-op
    cp-=-op
    cp-=-op
    cp-=-op
    mv-ctor
*/

#include <iostream>
using namespace std;

class Item
{
    int v;

public:
    Item(int _v = 0) : v(_v) {}
    Item(const Item &rhs) { cout << "cp-ctor" << endl; }
    Item &operator=(const Item &rhs)
    {
        cout << "cp-=-op" << endl;
        return *this;
    }
    Item(Item &&rhs) noexcept { cout << "mv-ctor" << endl; }
    Item &operator=(Item &&rhs) noexcept
    {
        cout << "mv-=-op" << endl;
        return *this;
    }
    friend Item makeVal(const Item &x)
    {
        Item t;
        return t; // returns prvvalue
    }
    friend const Item &giveRef(Item &x)
    {
        return x; // returns lvalue reference
    }
};

int main()
{
    Item a(10);
    Item b = a; // LINE-1
    Item c;
    c = a; // LINE-2
    Item d;
    d = makeVal(a); // LINE-3
    Item e;
    e = giveRef(d);       // LINE-4
    Item f(std::move(e)); // LINE-5
    return 0;
}