/*
Consider the following code segment.

#include <iostream>
using namespace std;

class B {
    char *p;
public:
    B(const char *s) : p(const_cast<char*>(s)) { }
    const char* show() const { return p; }
    void change(const char *q) { p = const_cast<char*>(q); }
};

int main() {
    const char *lit = "Hello";
    char *y = const_cast<char*>(lit);      // LINE-1
    const B u(lit);
    u.change(lit);                         // LINE-2
    cout << u.show();                      // LINE-3
    const_cast<B&>(u).change(y);           // LINE-4
    return 0;
}

Which line/s will give error?
a) LINE-1
b) LINE-2
c) LINE-3
d) LINE-4
*/

#include <iostream>
using namespace std;

class B
{
    char *p;

public:
    B(const char *s) : p(const_cast<char *>(s)) {}
    const char *show() const { return p; }
    void change(const char *q) { p = const_cast<char *>(q); }
};

int main()
{
    const char *lit = "Hello";
    char *y = const_cast<char *>(lit);  // LINE-1
    const B u(lit);
    u.change(lit);                      // LINE-2
    cout << u.show();                   // LINE-3
    const_cast<B &>(u).change(y);       // LINE-4
    return 0;
}