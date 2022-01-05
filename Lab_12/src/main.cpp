/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 12
* File Name: main.cpp
*/
#include "priority_queue.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	priority_queue<int> pq1;
	std::cout << "is the priority queue empty? " << (pq1.empty() ? "yes" : "no") << std::endl;
	std::cout << "the priority queue's current size:  " << pq1.size() << std::endl;

	int numbers[] = { 50,60,10,50,541,156,925,28,21,6541,32,8,0,55,80,54,258,214,36,8,2, 75 };
	std::cout << "inserting 20 number into a priority_queue and displaying them as they go in... " << std::endl;
	
	
	for (int i = 0; i < 22; i++) {
		pq1.push(numbers[i]);
		std::cout << "number " << i << ": " << numbers[i]<< std::endl;
	}
	std::cout << "is the priority queue empty? " << (pq1.empty() ? "yes" : "no") << std::endl;
	std::cout << "the priority queue's current size:  " << pq1.size() << std::endl;
	std::cout << "popping all the elements in the queue they should be inorder from highest to lowest." << std::endl;
	while (!pq1.empty()) {
		std::cout << "current top: " << pq1.top() << std::endl;
		pq1.pop();
	}
	std::cout << "is the priority queue empty? " << (pq1.empty() ? "yes" : "no") << std::endl;
	std::cout << "the priority queue's current size:  " << pq1.size() << std::endl;
	return 0;
}