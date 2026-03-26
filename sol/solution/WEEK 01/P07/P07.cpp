/*
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
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string wordi = "CPP is ";
    string word2 = "fun";
    string final = _________________; // LINE-1
    cout << final;
    return 0;
}