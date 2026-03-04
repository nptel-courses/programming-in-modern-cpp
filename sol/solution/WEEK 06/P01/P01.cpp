/*
Consider the code segment given below.

#include <iostream>
using namespace std;

int main()
{
    const int *pt;
    int x = 100;
    int y;
    pt = &x;   // LINE-1
    y = *pt;   // LINE-2
    *pt = 200; // LINE-3
    &x = pt;   // LINE-4
    return 0;
}

Which line/s will give error ?
a) LINE-1
b) LINE-2
c) LINE-3
d) LINE-4
*/

/**
 * option c). LINE-3
 * option d). LINE-4
*/
#include <iostream>
using namespace std;
int main()
{
    const int *pt;
    int x = 100;
    int y;
    pt = &x;   // LINE-1
    y = *pt;   // LINE-2
    *pt = 200; // LINE-3
    &x = pt;   // LINE-4
    return 0;
}