# WEEK 01: Assignment 01 - Problem 01 - 09

## **PROBLEM 01**
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

## **PROBLEM 02**
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

## **PROBLEM 03**
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

## **PROBLEM 04**
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

## **PROBLEM 05**
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

## **PROBLEM 06**
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

## **PROBLEM 07**
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

## **PROBLEM 08**
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

## **PROBLEM 09**
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