/*
Consider the following code segment.

#include <iostream>
using namespace std;
int add(int a = 0) { return a; }
int add(int a = 0, int b = 0) { return a + b - 1; }
int add(int a = 0, char c = 'a'){ return a + c - 1; }
int add(char c = 'z', int a = 0) { return a + c ; }
int main() {
    int c = add(10, 50);
    cout << c << endl;
    return 0;
}

What will be the output /error?
a) 60
b) 59
c) 62
d) Compilation error: call of overloaded ‘add(int, int)’ is ambiguous
*/

#include <iostream>
using namespace std;
int add(int a = 0) { return a; }
int add(int a = 0, int b = 0) { return a + b - 1; }
int add(int a = 0, char c = 'a') { return a + c - 1; }
int add(char c = 'z', int a = 0) { return a + c; }
int main()
{
    int c = add(10, 50);
    cout << c << endl;
    return 0;
}