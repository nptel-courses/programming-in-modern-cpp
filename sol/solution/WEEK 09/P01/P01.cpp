/*
Match the appropriate descriptions about the following fseek function calls.
Here, filePtr is a valid file pointer.

Function call                           Description 
1. fseek(filePtr, 0, SEEK_SET)          A. Move the file pointer backwards from the end of the file by 15 positions
2. fseek(filePtr, 20, SEEK_CUR)         B. Move the file pointer forward from the current position by 20 positions
3. fseek(filePtr, -15, SEEK_END)        C. Move the file pointer to the end of the file
4. fseek(filePtr, 0, SEEK_END)          D. Move the file pointer to the beginning of the file

a) 1-B, 2-A, 3-D, 4-C
b) 1-A, 2-B, 3-C, 4-D
c) 1-D, 2-B, 3-A, 4-C
d) 1-A, 2-D, 3-C, 4-B
*/

c) 1-D, 2-B, 3-A, 4-C

Function call                           Description 
1. fseek(filePtr, 0, SEEK_SET)          D. Move the file pointer to the beginning of the file
2. fseek(filePtr, 20, SEEK_CUR)         B. Move the file pointer forward from the current position by 20 positions
3. fseek(filePtr, -15, SEEK_END)        A. Move the file pointer backwards from the end of the file by 15 positions
4. fseek(filePtr, 0, SEEK_END)          C. Move the file pointer to the end of the file