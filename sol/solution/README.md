# **GRADED ASSIGNMENT: WEEK 01 - 12**

## **WEEK 01: Assignment 01 - Problem 01 - 09**

### **PROBLEM 01**
```cpp
Consider the following code segment.

#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
bool compare(char c1, char c2){
    return tolower(c1) < tolower(c2); //LINE-1
}
int main(){
    char arr1[20] = "C++ Course", arr2[20] = "C Course";
    cout << lexicographical_compare(arr1, arr1+strlen(arr1), arr2, arr2+strlen(arr2), compare);
    return 0;
}

What will be the output/error?
a) 1
b) 0
c) -1
d) Compilation Error: bad declaration
```
```cpp
b) 0
```

### **PROBLEM 02**
```cpp
Consider the following code segment.

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int array[] = {1,2,3,4,5};
    int key = 5;
    if(binary_search(__________________________))    //LINE-1
        cout << "found";
    else
        cout << "not found";
    return 0;
}

Fill in the blank at LINE-1 so that the program will print "not found"?
a) &array[0], &array[5], key
b) array, array+5, key
c) &array[0], &array[4], key
d) array, array+4, key
```
```cpp
c) &array[0], &array[4], key
d) array, array+4, key
```

### **PROBLEM 03**
```cpp
Consider the following code and find the correct output.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    rotate(arr.begin(), arr.begin()+2, arr.begin()+4);
    for(auto i : arr)
        cout << i << " ";
    return 0;
}

What is the output of the above code?
a) 3 1 2 4 5 6 7
b) 3 4 1 2 5 6 7
c) 4 1 2 3 5 6 7
d) 1 3 2 4 5 6 7
```
```cpp
b) 3 4 1 2 5 6 7
```

### **PROBLEM 04**
```cpp
Consider the following code segment.

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int data[] = {50, 30, 40, 10, 20};
    sort(&data[2], &data[4]);
    for (int i = 0; i < 5; i++)
        cout << data[i] << " ";
    return 0;
}

What will be the output?
a) 10 20 30 40 50
b) 50 30 10 40 20
c) 50 10 30 40 20
d) 50 10 20 30 40
```
```cpp
b) 50 30 10 40 20
```

### **PROBLEM 05**
```cpp
Consider the following code segment.

#include <iostream>
#include <vector>
using namespace std;
int main() {
    const int size = 3, c = 65;
    vector<char> vec(size, 'A');
    for (int i = 1; i <= 2; i++)
        vec.push_back(65 + i);
    vec.resize(10, 90);
    vec.resize(8);
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    return 0;
}

Choose the correct option to fill in the blank at LINE-1 so that
the program does not generate any compilation error.
a) A A A B C Z Z Z
b) A A B B C Z Z Z
c) A A A B C Z Z
d) A A A B C Z Z Z Z
```
```cpp
a) A A A B C Z Z Z
```

### **PROBLEM 06**
```cpp
Consider the following code and choose the correct output.

#include <iostream>
using namespace std;

int main(){
    bool a = false, b = true, c = true;
    cout << (a && b || c);
    return 0;
}

a) 0
b) 1
c) false
d) true
```
```cpp
b) 1
```

### **PROBLEM 07**
```cpp
Consider the following code segment.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string wordi = "CPP is ";
    string word2 = "fun";
    string final = _________________  // LINE-1
    cout << final;
    return 0;
}

Fill in the blank at LINE-1 so that the program generates output as CPP is fun.
a) wordi + word2;
b) strcat(wordi, word2);
c) wordi.insert(word2);
d) word1.append(word2);
```
```cpp
a) wordi + word2;
d) word1.append(word2);
```

### **PROBLEM 08**
```cpp
Consider the following cdoe segment.

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 1; i++) {
        int j = arr[i];
        replace(arr, arr + 5, j, *(________________));      //LINE-1
    }
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}

Fill in the blank at LINE-1 so that the program generates output as Found.
a) arr + 4 - i
b) arr + 5 - i
c) arr + i - 4
d) arr + i - 5
```
```cpp
a) arr + 4 - i
```

### **PROBLEM 09**
```cpp
Consider the following code segment.

#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main(){
    char str[10] = "123456789";
    stack<char> s1, s2;
    int i;
    for (i = 0; i < strlen(str) / 2; i++)
        s1.push(str[i]);
    for (i = i - 1; i < strlen(str); i++)
        s2.push(str[i]);

    while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }
    while (!s2.empty()) {
        cout << s2.top();
        s2.pop();
    }
    return 0;
}

What will be the output?
a 1234987654
b 123498765
c 1234897654
d 123459876
```
```cpp
a 1234987654
```

---

## **WEEK 02: Assignment 02 - Problem 01 - 09**

### **PROBLEM 01**
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

### **PROBLEM 02**
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

### **PROBLEM 03**
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

### **PROBLEM 04**
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

### **PROBLEM 05**
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

### **PROBLEM 06**
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

### **PROBLEM 07**
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

### **PROBLEM 08**
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

### **PROBLEM 09**
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

---

## **WEEK 03: Assignment 03 - Problem 01 - 09**

### **PROBLEM 01**
```cpp
Consider the following snippet:

class Complex {
private:
    int x, y;
public:
    void setX(int x_) { x = x_; }
    void setY(int y_) { y = y_; }
    void print() { cout << x << ", " << y; }
    void incr() { x++; y++; }
    int incrX() { return x + 1; }
    int incrY() { return ++y; }
};

Identify the set of all methods that change the state of Complex class objects?
a) setX(), setY(), print()
b) setX(), setY(), incrX(), incrY()
c) incr(), incrX(), incrY()
d) setX(), setY(), incr(), incrY()
```
```cpp
d) setX(), setY(), incr(), incrY()
```

### **PROBLEM 02**
```cpp
Consider the following code segment.

#include <iostream>
using namespace std;
class Integer {
    int n;
public:
    Integer() {
        cout << 0 << " ";
    }
    Integer(int i) : n(i) {
        cout << n << " ";
    }
};
int main() {
    int i = 1;
    Integer n1;               // LINE-1
    Integer *n2 = new Integer(i++);
    Integer *n3;
    new Integer(i++);
    return 0;
}

What will be the output?
a) 0 1 0 2
b) 0 1 2
c) 0 2 3
d) 1 2
```
```cpp
b) 0 1 2
```

### **PROBLEM 03**
```cpp
Consider the following code segment.

#include <iostream>
#include <string>
using namespace std;
class Test {
    const char *s2, *s3, *s1; // LINE-1
public:
    Test(const char* _s1, const char* _s2, const char* _s3) :
        s1(setS1(_s1)), s2(setS2(_s2)),
        s3(setS3(_s3)){}
    const char* setS1(const char* s) {
        cout << s << " ";
        return strdup(s);
    }
    const char* setS2(const char* s) {
        cout << s << " ";
        return strdup(s);
    }
    const char* setS3(const char* s) {
        cout << s << " ";
        return strdup(s);
    }
};

int main() {
    Test obj("Programming", "Modern", "C++");
    return 0;
}

What will be the output/error?
a) C++ Modern Programming
b) Modern C++ Programming
c) Programming Modern C++
d) Compilation Error
```
```cpp
b) Modern C++ Programming
```

### **PROBLEM 04**
```cpp
Consider the following code segment.

#include <iostream>
using namespace std;
class Point {
    int x, y;
public:
    Point(int _x, int _y) : x(_x), y(_y) { }
    void change(Point *new_P) { this = new_P; }
    void show() { cout << x << ", " << y << endl; }
};

int main() {
    Point p1(10, 20);
    Point p2(20, 50);
    p1.change(&p2);
    p1.show();
    return 0;
}

What will be the output/error?
a) 10, 20
b) 20, 50
c) Compiler Error: lvalue required as left operand of assignment
d) Compiler Error: private x, y are inaccessible
```
```cpp
c) Compiler Error: lvalue required as left operand of assignment
```

### **PROBLEM 05**
```cpp
Observe the following class.

class acc_holder {
    int id;
    string email;
    string phone;
    double balance;

public:
    int getId() const { return id; }
    void setEmail(string e) { email = e; }
    string getPhone() const { return phone; }
};

Which data members are read-only, write-only, readable and writable, or invisible?
a) id is readonly
b) email is readonly
c) phone is writeonly
d) balance is invisible
```
```cpp
a) id is readonly
d) balance is invisible
```

### **PROBLEM 06**
```cpp
Consider the following code segment.

class const_pt {
    // code...
};

int main() {
    const const_pt m; // LINE-1
    return 0;
}

What is/are the type/s of this pointer associated with the object m?

a) const const_pt* this;
b) const_pt* const this;
c) const_pt const* const this;
d) const const_pt* const this;
```
```cpp
c) const_pt const* const this;
d) const const_pt* const this;
```

### **PROBLEM 07**
```cpp
Consider the following code segment.

#include <iostream>
using namespace std;
class Counter {
    int a, b, c;
public:
    Counter(int x = 1) : c(x++), b(x++), a(++x) {}
    void print() { cout << a << ", " << b << ", " << c << endl; }
};

int main() {
    Counter d(5);
    d.print();
    return 0;
}

What will be the output?
a) 6,6,7
b) 6,5,7
c) 6,6,5
d) 7,6,6
```
```cpp
a) 6,6,7
```

### **PROBLEM 08**
```cpp
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
```
```cpp
a) ++this->x
c) ++x
```

### **PROBLEM 09**
```cpp
Consider the following code segment.

#include <iostream>
using namespace std;
class TestClass {
    int x;
public:
    TestClass(int x_) : x(x_) { cout << "ctor " ; }
    TestClass(TestClass &d) { x = d.x; cout << "copy_ctor " ; }
    TestClass& operator=(TestClass d) { x = d.x; cout << "assign " ; return *this; }
};

int main() {
    TestClass d1(5);
    TestClass d2 = d1;
    TestClass d3(10);
    d3 = d2;
    return 0;
}

What will be the output?
a) ctor copy_ctor ctor copy_ctor assign
b) ctor copy_ctor ctor assign
c) ctor copy_ctor ctor
d) ctor assign copy_ctor
```
```cpp
a) ctor copy_ctor ctor copy_ctor assign
```