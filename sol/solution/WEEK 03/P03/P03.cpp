/*
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

hat will be the output/error?

a) C++ Modern Programming
b) Modern C++ Programming
c) Programming Modern C++
d) Compilation Error
*/

#include <iostream>
#include <string>
using namespace std;
class Test
{
    const char *s2, *s3, *s1; // LINE-1
public:
    Test(const char *_s1, const char *_s2, const char *_s3) : s1(setS1(_s1)), s2(setS2(_s2)), s3(setS3(_s3)) {}
    const char *setS1(const char *s)
    {
        cout << s << " ";
        return strdup(s);
    }
    const char *setS2(const char *s)
    {
        cout << s << " ";
        return strdup(s);
    }
    const char *setS3(const char *s)
    {
        cout << s << " ";
        return strdup(s);
    }
};

int main()
{
    Test obj("Programming", "Modern", "C++");
    return 0;
}