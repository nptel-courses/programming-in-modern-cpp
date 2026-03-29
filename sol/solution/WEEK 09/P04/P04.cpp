/*
Consider the file data.txt containing a single line as follows:
file handling in cpp is important

Consider the following code segment.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data.txt");
    char ch;
    int count = 1;

    if(fin.is_open()) {
        while(!fin.eof()) {    
            --------------------;    //LINE-1
            if(ch == ' ')
                count++;
        }
        fin.close();
        cout << count;
    }
    else
        cout << "Unable to open file";
    return 0;
}

Identify the appropriate option(s) to fill in the blank at LINE-1 such that the program prints
the number of words in the file data.txt if the file exists. Assume each word is separated by
exactly one space.
a) fin >> ch
b) fin.get(ch)
c) ch = fin.get()
d) getline(fin, ch)
*/

/*
option b) fin.get(ch)
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("data.txt");
    char ch;
    int count = 1;

    if (fin.is_open())
    {
        while (!fin.eof())
        {
            fin.get(ch);
            if (ch == ' ')
                count++;
        }
        fin.close();
        cout << count;
    }
    else
        cout << "Unable to open file";
    return 0;
}

/*
option c) ch = fin.get()
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("data.txt");
    char ch;
    int count = 1;

    if (fin.is_open())
    {
        while (!fin.eof())
        {
            ch = fin.get();
            if (ch == ' ')
                count++;
        }
        fin.close();
        cout << count;
    }
    else
        cout << "Unable to open file";
    return 0;
}