/*
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
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int *p = new int[5]; // LINE-1
    p[0] = 42;
    cout << *p;
    delete[] p;
    return 0;
}