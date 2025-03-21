#include <string>
#include <vector>
#include <iostream>
#include <bitset>
#include <cstring>
#include <algorithm> // for sort() 

using namespace std;

//A common approach in string manipulation problems is to edit the string starting from the end and working 
//backwards. This is useful because we have an extra buffer at the end, which allows us to change characters 
//without worrying about what we're overwriting.

// In the first scan, we count the number of spaces. By tripling this number, we can compute how many extra characters we will 
//have in the final string. In the second pass, which is done in reverse order, we actually edit the string. When 
//we see a space, we replace it with %20. If there is no space, then we copy the original character. 

void replaceSpace(char *str, int len) {
    int i = 0, j = 0;
    int numOfSpace = 0;
    for (i = 0; i < len; ++i) {
        if (str[i] == ' ') {
            ++numOfSpace;
        }
    }

    int extendLen = len + 2 * numOfSpace;
    i = extendLen - 1;
    for (j = len - 1; j >= 0; --j) {
        if (str[j] != ' ') {
            str[i--] = str[j];
        } else {
            str[i--] = '0';
            str[i--] = '2';
            str[i--] = '%';
        }
    }
}