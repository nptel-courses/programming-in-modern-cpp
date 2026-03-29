/*
Consider the program given below.

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int x = 97;
    cout << setbase(16) << x << " ";
    cout << setbase(8) << x << " ";
    cout << setbase(10) << x << " ";
    cout << static_cast<char>(x) << endl;
    return 0;
}

What will be the output?
a) 97 97 97 97
b) 61 141 97 a
c) 141 61 97 a
d) 61 141 97 97
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x = 97;
    cout << setbase(16) << x << " ";
    cout << setbase(8) << x << " ";
    cout << setbase(10) << x << " ";
    cout << static_cast<char>(x) << endl;
    return 0;
}