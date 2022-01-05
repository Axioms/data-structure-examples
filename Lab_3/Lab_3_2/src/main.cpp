/////////////////// Program 2.2
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
void m(int, int[]);


void p(int list[], int arraySize) // revomed const from int list[]
{
	list[0] = 100;
}

int main() {
	int x = 1;
	int y[10];
	y[0] = 1;
	m(x, y);
	cout << "x is " << x << endl;
	cout << "y[0] is " << y[0] << endl;
	return 0;
}
void m(int number, int numbers[]) {
	number = 1001;
	numbers[0] = 5555;
}