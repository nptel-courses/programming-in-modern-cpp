/*
Consider the following code segment.

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    float f = 5.25f;
    int *px = &x;
    float *pf;
    x = static_cast<int>(f);      // LINE-1
    f = static_cast<float>(x);    // LINE-2
    pf = static_cast<float*>(px); // LINE-3
    x = static_cast<int>(&x);     // LINE-4
    return 0;
}

Which line/s will give compilation error?
a) LINE-1
b) LINE-2
c) LINE-3
d) LINE-4
*/

#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    float f = 5.25f;
    int *px = &x;
    float *pf;
    x = static_cast<int>(f);       // LINE-1
    f = static_cast<float>(x);     // LINE-2
    pf = static_cast<float *>(px); // LINE-3
    x = static_cast<int>(&x);      // LINE-4
    return 0;
}