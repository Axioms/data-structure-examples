/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 9
* File Name: test_overflow.cpp
*/

#include "stack_pair.h"
#include <iostream>

void test3() {
	stack_pair<int> test_stack;
	for (int i = 0; i < 141; i += 10) {
		test_stack.push_a(i);
		test_stack.push_b(i / 10);
	}
	test_stack.push_a(100);
}

int main() {
	std::cout << "Testing overflow." << std::endl;
	test3();
	return 0;
}