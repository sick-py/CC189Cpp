#include <string>
#include <vector>
#include <iostream>
#include <bitset>
#include <cstring>
#include <algorithm> // for sort() 

using namespace std;

bool isUnique(string str){
    //It's also okay to assume 256 characters. This would be the case in extended ASCII. You should  clarify your assumptions with your interviewer. 
    if (str.length() > 128) {
        return false;
    }

    bool table[128] = {false};

    for (int i = 0; i < str.length(); i++) {
        int val = str[i];

        if (table[val]) {
            return false;
        }
        table[val] = true;
    }


    return true;
}

int main(){
    string input1;
    cout<<"input the string you want to test:";
    cin>>input1;
    if(isUnique(input1)){
        cout<<"is unique"<<endl;
    }



    return 0;
}