# WEEK 02: Assignment 01 - Problem 01 - 09

## **PROBLEM 01**
```cpp
Consider the following program.
#include <iostream>
using namespace std;

int main(){
    const int a = 10;   // LINE-1
    a = 50;             // LINE-2
    cout << a;
    return 0;
}

What will be the output/error?
a) 10
b) 50
c) Compilation Error at LINE-1:     const must be initialized
d) Compilation Error at LINE-2:     assignment of read only variable ‘a’
```
```cpp
d) Compilation Error at LINE-2:     assignment of read only variable ‘a’
```

## **PROBLEM 02**
```cpp
Consider the following program.

#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int * const p = &a;
    int c = 20;
    p = &c;   // LINE-1
    cout << *p;
    return 0;

}

What will be the output/error?
a) 10
b) 20
c) Compilation Error at LINE-1: assignment of read only variable ‘p’
d) Segmentation fault
```
```cpp
c) Compilation Error at LINE-1: assignment of read only variable ‘p’
```

## **PROBLEM 03**
```cpp
Consider the following code segment and find the output.

#include <iostream>
using namespace std;
#define INCR(x) x++
int main() {
    int a = 2;
    cout << INCR(a++) << " " << INCR(a++) << endl;
    return 0;
}

What will be the output/error?
a) 3 4
b) 4 4
c) 3 5
d) Compilation Error: lvalue required as increment operand
```
```cpp
d) Compilation Error: lvalue required as increment operand
```

## **PROBLEM 04**
```cpp
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
```
```cpp
b) 59
```

## **PROBLEM 05**
```cpp
Consider the following code segment.

#include <iostream>
using namespace std;

void modify(int x1, int &x2, int *x3) { //Line-1
    x2 = x1 * 2;
    *x3 = x1 + 5;
}

int main() {
    int x = 2, y, z;
    modify(x, y, &z);
    cout << x << " " << y << " " << z;
    return 0;
}

Choose the correct option for parameter list at LINE-1 such that the output is 2 4 7.
a) int &x2, int *x3
b) int *x2, int *x3
c) int &x2, int &x3
d) int *x2, int &x3
```
```cpp
a) int &x2, int *x3
```

## **PROBLEM 06**
```cpp
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
```
```cpp
c) 15 15 4 4
```

## **PROBLEM 07**
```cpp
Consider the following code segment.

#include <iostream>
using namespace std;
int main(){
    int a = 2, b = 7;
    const int &p = ++a + ++b; //LINE-1
    cout << p;
    return 0;
}

Fill in the blank at LINE-1 with appropriate option/s such that the output is: 11
a) const
b) volatile
c) static
d) inline
```
```cpp
a) const
```

## **PROBLEM 08**
```cpp
Consider the following code segment.

#include <iostream>
using namespace std;

enum class Colour { Red = 1, Green, Blue };

int main(){
    Colour c = Colour::Red;
    cout << static_cast<int>(c + 1); // LINE-1
    return 0;
}

What will be the output/error?
a) 2
b) Compilation Error at LINE-1: invalid operands to binary +
c) 1
d) 3
```
```cp
b) Compilation Error at LINE-1: invalid operands to binary +
```

## **PROBLEM 09**
```cpp
Consider the following code segment.

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int *p = new int[5];  // LINE-1
    p[0] = 42;
    cout << *p;
    delete[] p;
    return 0;
}

What will be the output?
a) 0
b) 42
c) Compilation Error
d) Segmentation fault
```
```
b) 42
```