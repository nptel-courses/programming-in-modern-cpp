/*
Consider the code segment (in C++11) given below.

#include <iostream>
using namespace std;

int main(){
    int x = 5;
    const int y = 7;
    int& r = x;

    auto p = x;
    auto q = r;
    auto s = y;

    r += 3;
    p += 2;
    q += 4;
    s += 5; // LINE-1

    cout << x << ", " << y << endl;
    cout << p << ", " << q << ", " << s << endl;
    return 0;
}

What will be the output/error?
a) 12, 7
7, 12, 12

b) 8, 7
7, 9, 12

c) Compiler error at LINE-1: assignment of read-only variable 's'

d) 8, 7
7, 7, 12
*/

#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    const int y = 7;
    int &r = x;

    auto p = x;
    auto q = r;
    auto s = y;

    r += 3;
    p += 2;
    q += 4;
    s += 5; // LINE-1

    cout << x << ", " << y << endl;
    cout << p << ", " << q << ", " << s << endl;
    return 0;
}