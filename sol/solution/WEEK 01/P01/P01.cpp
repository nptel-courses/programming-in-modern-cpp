/*
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
*/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
bool compare(char c1, char c2)
{
    return tolower(c1) < tolower(c2);
}
int main()
{
    char arr1[20] = "C++ Course";
    char arr2[20] = "C Course";
    cout << lexicographical_compare(
        arr1, arr1 + strlen(arr1),
        arr2, arr2 + strlen(arr2),
        compare);
    return 0;
}