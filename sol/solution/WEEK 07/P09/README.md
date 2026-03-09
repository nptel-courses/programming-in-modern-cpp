```cpp
Consider the code snippet below.

#include <iostream>
using namespace std;

class Course{
    string _name;
    int _credits;
public:
    Course(string name, int credits)
        : _name(name), _credits(credits) {}

    void updateCredits(int c) const {
        (_______________)-> _credits = c;   // LINE-1
    }

    void show() const {
        cout << _name << ":" << _credits;
    }
};

int main(){
    const Course c("OOP in C++", 3);
    c.updateCredits(4);
    c.show();
    return 0;
}

Fill in the blank at LINE-1 so that the output becomes: OOP in C++:4
a) (Course*)this
b) const_cast<Course*>(this)
c) static_cast<Course*>(this)
d) dynamic_cast<Course*>(this)
```
```cpp
b) const_cast<Course*>(this)
```