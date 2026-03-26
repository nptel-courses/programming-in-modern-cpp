/*
Consider the following code segment.

#include <iostream>
using namespace std;
int& func(int& x) {    //LINE-1
    return x = x*5;
}
int main() {
    int a = 3, b = 4;
    int& c = func(a);
    cout << a << " " << c << " ";
    func(a) = b;
    cout << a << " " << c;
    return 0;
}

What will be the output?
a) 15 15 2 2
b) 15 20 4 2
c) 15 15 4 4
d) 20 15 4 4
*/

#include <iostream>
using namespace std;
int &func(int &x)
{ // LINE-1
    return x = x * 5;
}
int main()
{
    int a = 3, b = 4;
    int &c = func(a);
    cout << a << " " << c << " ";
    func(a) = b;
    cout << a << " " << c;
    return 0;
}