/*
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
*/

/**
 * option c). &array[0], &array[4], key
 */
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int key = 5;
    if (binary_search(&array[0], &array[4], key)) // LINE-1
        cout << "found";
    else
        cout << "not found";
    return 0;
}

/**
 * option d). array, array+4, key
 */
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int key = 5;
    if (binary_search(array, array + 4, key)) // LINE-1
        cout << "found";
    else
        cout << "not found";
    return 0;
}