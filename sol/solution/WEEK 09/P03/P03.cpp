/*
Consider the following code segment.

#include <cstdio>
using namespace std;

int main(){
    FILE *src, *dest;
    src = fopen("input.txt", "r");
    dest = fopen("output.txt", "w");
    if(src == NULL || dest == NULL)
    return -1;

    int ch;
    while((ch = fgetc(src)) != EOF)
    if(ch == '\t' || ch == '\n')  //LINE-1
    else
    fputc(ch, dest);

    fclose(src);
    fclose(dest);
    return 0;
}

Choose the correct option regarding the program.
a) It copies all characters from input.txt to output.txt including tabs and newlines.
b) It copies the contents of input.txt to output.txt excluding tab and newline characters.
c) It copies only tab and newline characters from input.txt to output.txt.
d) The program results in a compilation error due to an incorrect if statement.
*/

#include <cstdio>
using namespace std;

int main()
{
    FILE *src, *dest;
    src = fopen("input.txt", "r");
    dest = fopen("output.txt", "w");
    if (src == NULL || dest == NULL)
        return -1;

    int ch;
    while ((ch = fgetc(src)) != EOF)
        if (ch == '\t' || ch == '\n') // LINE-1
            else fputc(ch, dest);

    fclose(src);
    fclose(dest);
    return 0;
}