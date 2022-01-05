/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 8
* File Name: main.cpp
*/


#include "bag5.h"
#include <iostream>

int main() {
	bag<int> b1;
	b1.insert(7);
	b1.insert(6);
	b1.insert(5);
	b1.insert(4);
	b1.insert(3);
	b1.insert(2);
	b1.insert(1);
	b1.print_value_range(2,5);
	b1.print_value_range(2,18);
	b1.print_value_range(2,1);
	b1.print_value_range(8,5);
	
	bag<int> b2;
	b2.insert(1);
	b2.insert(16);
	b2.insert(32);
	b2.insert(32);
	b2.insert(16);
	b2.insert(81);
	b2.insert(1);
	b2.insert(75);
	b2.remove_repetitions();
	return 0;
}
