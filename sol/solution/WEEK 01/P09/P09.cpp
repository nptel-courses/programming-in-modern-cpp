/*
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
*/

#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main()
{
    char str[10] = "123456789";
    stack<char> s1, s2;
    int i;
    for (i = 0; i < strlen(str) / 2; i++)
        s1.push(str[i]);
    for (i = i - 1; i < strlen(str); i++)
        s2.push(str[i]);

    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    while (!s2.empty())
    {
        cout << s2.top();
        s2.pop();
    }
    return 0;
}