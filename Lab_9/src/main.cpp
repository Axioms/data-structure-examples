/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 9
* File Name: main.cpp
*/

#include "stack_pair.h"
#include <iostream>

bool test1() {
	stack_pair<int> test_stack;
	int i = 100;
	for (int i = 0; i < 101; i += 10) {
		test_stack.push_a(i);
		test_stack.push_b(i / 10);
	}
	
	while (!test_stack.is_empty_a()) {
		
		if (test_stack.pop_a() != i) {
			return false;
		}
		i -= 10;
	}

	i = 10;
	while (!test_stack.is_empty_b()) {
		if (test_stack.pop_b() != i) {
			return false;
		}
		i -= 1;
	}

	return true;
}

bool test2() {
	stack_pair<int> test_stack;
	int i = 140;
	for (int i = 0; i < 141; i += 10) {
		test_stack.push_a(i);
		test_stack.push_b(i / 10);
	}

	while (!test_stack.is_empty_a()) {

		if (test_stack.pop_a() != i) {
			return false;
		}
		i -= 10;
	}

	i = 14;
	while (!test_stack.is_empty_b()) {
		if (test_stack.pop_b() != i) {
			return false;
		}
		i -= 1;
	}

	return true;
}

int main() {
	std::cout << "Testing push and pop from a partially filled array." << std::endl;
	std::cout << "Test 1: " << (test1() ? "passed!" : "failed!") << std::endl;
	std::cout << "Testing push and pop from a filled array." << std::endl;
	std::cout << "Test 2: " << (test2() ? "passed!" : "failed!") << std::endl;
	return 0;
}