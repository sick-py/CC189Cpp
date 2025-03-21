#include <string>
#include <vector>
#include <iostream>
#include <bitset>
#include <cstring>
#include <algorithm> // for sort() 

using namespace std;

//like many questions, we should first confirm the details, like case sensitvie, is whitespace considered? for this one both are yes

//solution1 by sorting If two strings are permutations, then we know they have the same characters, but in different orders. 
bool checkBySort(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    string sortStr1 = str1;
    string sortStr2 = str2;

    sort(sortStr1.begin(), sortStr1.end());
    sort(sortStr2.begin(), sortStr2.end());

    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }
    return true;

}

//check identical character counts 
bool checkCount(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    int charCount[128] = {0};

    for (char c : str1) {
        charCount[c]++;
    }

    for (char c : str2) {
        charCount[c]--;
        if (charCount[c] < 0) {
            return false;
        }
    }

    return true;
}

int main() {

}