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
	/*Pre-increment (++it):
	This operator increments the iterator and then returns a reference to the incremented value. 
	Since it doesn't need to create a temporary copy, it's generally more efficient, especially for user-defined iterators.
	
	Post-increment (it++):
	This operator returns a copy of the iterator as it was before incrementing it, and then increments the original iterator. 
	This extra copy can incur a slight performance overhead, particularly with complex iterator types.
	Using ++it is preferred because it avoids the unnecessary temporary copy that would occur with it++. This is especially relevant for iterators, where efficiency matters.

	According to C++ best practices, when the returned value of the increment operation is not needed, the pre-increment version is usually the better choice.

	In the loop, the iterator is simply used to traverse the container, and the returned value of the increment operator isn’t being stored or used in any computation. 
	Both pre-increment (++it) and post-increment (it++) update the iterator so that it points to the next element
	*/
	vector<int> numbers2 = {10, 20, 30};

    // Using post-increment: *it++ returns the value at the current iterator,
    // then increments the iterator.
    auto it = numbers2.begin();
    cout << "Using post-increment (*it++): " << *it++ << endl; // prints 10

    // Reset the iterator to the beginning
    it = numbers2.begin();

    // Using pre-increment: *++it increments the iterator first,
    // then returns the value at the new position.
    cout << "Using pre-increment (*++it): " << *++it << endl; // prints 20
	


	return 0;
}