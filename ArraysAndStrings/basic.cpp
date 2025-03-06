#include <string>
#include <vector>
#include <iostream>
#include <bitset>
#include <cstring>
#include <algorithm> // for sort() 

using namespace std;



int main(){

	//basic arrays is static 
	int numbers[5] = {1, 2, 3, 4, 5};
	
	for (int i = 0; i < 5; i++) {
		cout<<"element"<<i<<" : "<<numbers[i]<<endl;
	}

	//in C++11 array is a container that encapsulates fixed-sized arrays 

	//c style strings are arrays of characters terminated by a null character ('\0').
	char greetings[] = "hello!";
	cout<<greetings<<endl;
	cout<<"length of greetings is "<<strlen(greetings)<<endl;

	//std::string
	string greetings1 = "hello!";
	cout<<"length of greetings1 is "<<greetings1.length()<<endl;

	//Concatenate strings
	string name = "Alice";
	string concatenateString = greetings1 + name + "good";

	//using pointers and dynamic memory allocation to make dynamic arrays
	int size;
	cout << "enter the number of elements: ";
	cin >> size;

	int* array = new int[size];

	for (int i = 0; i < size; i++) {
		array[i] = i * 2;
	}

	//to resize the array
	int* newArray = new int[size * 2];
	//copy over the old elements
	for (int i = 0; i < size; i++) {
		newArray[i] = array[i];
	}

	delete[] array;
	delete[] newArray;

	//using vector
	vector<int> arrayV(size);

	for (int i = 0; i < size; i++) {
		arrayV[i] =  i * 2;
	}

	// Add a new element to the end of the vector
	arrayV.push_back(99);

	// Resize the vector to a larger size
    arrayV.resize(10, 0); // Adds 0-initialized elements to increase size to 10

	for (int i : arrayV) {
		cout<<i<<" ";
	}

	for (int i = 0; i < arrayV.size(); i++){
		i = i;
	}

	for (auto it = arrayV.begin(); it != arrayV.end(); ++it){
		cout<<*it<<" ";
	}
	


	return 0;
}