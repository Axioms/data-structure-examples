///////////////// Program 2.1
/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 3
* File Name: main.cpp
*/

#include <iostream>

using namespace std;
// added an = to the statement below

const int SIZE = 4;
void printArray(int list[], int arraySize);

void reverse(const int list[], int newList[], int size) {
	for (int i = 0, j = size - 1; i < size; i++, j--) {
		newList[j] = list[i];
  }
}
void p(int list[], int arraySize) // revomed const from int list[]
{
	list[0] = 100;
}
int main() {
	//commented out the following because SIZE is a const
	//SIZE = 4;
	int newList[SIZE];
  
	int numbers[] = {1,4,3,6,8};
  
	p(numbers, 5);
	printArray(numbers, 5);
	reverse(numbers, newList, SIZE); // changed the first parameter to numbers from list
	printArray(newList, SIZE);
	return 0;
}
void printArray(int list[], int arraySize)
{
	for (int i = 0; i < arraySize; i++) {
		cout << list[i] << " ";
	}
}