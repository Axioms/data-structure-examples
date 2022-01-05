/////////////////// Program 2.3
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

/*
 * This method takes in two valuse n1 and n2 by value and swaps them
 * */
void swap1(int n1, int n2) {
	// declaring a temp variable to hold n1 during the swap
	int temp = n1;
	// sets n1 equal to n2
	n1 = n2;
	// sets n2 equal to temp which is equal to the old n1
	n2 = temp;
}

/*
 * This method takes in two valuse n1 and n2 by reference and swaps them
 * */
void swap2(int& n1, int& n2) {
	// declaring a temp variable to hold n1 during the swap
	int temp = n1;
	// sets n1 equal to n2
	n1 = n2;
	// sets n2 equal to temp which is equal to the old n1
	n2 = temp;
}

/*
 * This method takes in two pointers p1 and p2 by value and swaps them
 * */
void swap3(int* p1, int* p2) {
	// declaring a temp variable to hold the pointer n1 during the swap
	int temp = *p1;
	// sets the pointer n1 equal to the pointer n2
	*p1 = *p2;
	// sets the pointer n2 equal to temp which is equal to the old pointer of n1
	*p2 = temp;
}


/*
 * This method takes in two pointer references p1 and p2 by value and swaps them
 * */
void swap4(int*& p1, int*& p2) {
	// declaring a temp pointer to hold the pointer n1 during the swap
	int* temp = p1;
	// sets the pointer n1 equal to the pointer n2
	p1 = p2;
	// sets the pointer n2 equal to the pointer temp which is equal to the old pointer of n1
	p2 = temp;
}


/*
 * Main method where code execution is strted
 * */
int main() {
	// declares num1 and num2 which is used in the functions swap1, swap2, and swap 3
	int num1 = 1;
	int num2 = 2;
	
	// displays the values of num1 and num2 before invoking the function swap1
	cout << "Before invoking the swap1 function, num1 is " << num1 << " and num2 is " << num2 << endl;

	// invoking swap1
	swap1(num1, num2);
	
	// displays the values of num1 and num2 after invoking the function swap1
	cout << "After invoking the swap1 function, num1 is " << num1 << " and num2 is " << num2 << endl << endl;
	
	// displays the values of num1 and num2 before invoking the function swap2
	cout << "Before invoking the swap2 function, num1 is " << num1 << " and num2 is " << num2 << endl;

	// invoking swap2
	swap2(num1, num2);
	
	// displays the values of num1 and num2 after invoking the function swap2
	cout << "After invoking the swap2 function, num1 is " << num1 << " and num2 is " << num2 << endl << endl;
	
	// displays the values of num1 and num2 before invoking the function swap3
	cout << "Before invoking the swap3 function, num1 is " << num1 << " and num2 is " << num2 << endl;

	// invoking swap3
	swap3(&num1, &num2);
	
	// displays the values of num1 and num2 after invoking the function swap3
	cout << "After invoking the swap3 function, num1 is " << num1 << " and num2 is " << num2 << endl << endl;
	
	//declares ints p1 and p2 as pointers of num1 and num2 for uses in the method of swap4
	int* p1 = &num1;
	int* p2 = &num2;
	
	// displays the values of p1 and p2 before invoking the function swap4
	cout << "Before invoking the swap4 function, p1 is " <<	p1 << " and p2 is " << p2 << endl;

	// invoking swap4
	swap4(p1, p2);
	
	// displays the values of p1 and p2 after invoking the function swap4
	cout << "After invoking the swap4 function, p1 is " << p1 << " and p2 is " << p2 << endl << endl;
	//return 0 to signal successful code execution
	return 0;
}