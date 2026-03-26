/*
Consider the following code segment.

#include<iostream>
using namespace std;
class CharClass {
    char x;
public:
    CharClass(char _x): x(_x) { }
    void display() { cout << ______ << " "; } //LINE-1
};

int main() {
    CharClass c('A');
    c.display();
    return 0;
}

Fill in the blank at LINE-1 such that the program will print B.
a) ++this->x
b) ++this.x
c) ++x
d) x++
*/

#include <iostream>
using namespace std;
class CharClass
{
    char x;

public:
    CharClass(char _x) : x(_x) {}
    void display() { cout << ______ << " "; } // LINE-1
};

int main()
{
    CharClass c('A');
    c.display();
    return 0;
}