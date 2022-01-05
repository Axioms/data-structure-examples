/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 13
* File Name: Scource.cpp
*/

#include <iostream>
#include <string>
#include <ctime>
#include <limits.h>
#include "table1.h"
#include "table2.h"

struct record {
	int key = -1;
	unsigned char value = 0;
};

record build_record(int i=-1) {
	record temp;
	if (i >= 0) {
		temp.key = i;
	}
	else {
		temp.key = rand();
	}
	temp.value = (rand() % UCHAR_MAX) + 1;
	return temp;
}

void test_double_hash() {
	main_savitch_double_hash_table::table<record>t1;
	std::cout << "Inserting a few items into the table" << std::endl;
	for (int i = 0; i < 200; i++) {
		t1.insert(build_record(i));
	}
	std::cout << "Current size: " << t1.size() << std::endl;

	std::cout << "Is there an item in key 77? " << (t1.is_present(77) ? "Yes!" : "No!") << std::endl;

	std::cout << std::endl << "inserting a record with key 77 and value 'A'" << std::endl;
	t1.insert(record{ 77, 'A' });
	std::cout << "Is there an item in key 77? " << (t1.is_present(77) ? "Yes!" : "No!") << std::endl;
	record temp;
	bool found;
	t1.find(77, found, temp);
	std::cout << "That value with the key 77 is: " << temp.value << std::endl;
	
	std::cout << std::endl << "inserting a record with key 77 and value 'B'" << std::endl;
	t1.insert(record{ 77, 'B' });
	t1.find(77, found, temp);
	std::cout << "That value with the key 77 is: " << temp.value << std::endl;

	std::cout << "Removing item at key 77" << std::endl;
	t1.remove(77);
	std::cout << "Is there an item in key 77? " << (t1.is_present(77) ? "Yes!" : "No!") << std::endl;

	std::cout << std::endl << "Inserting 800 more items into the table" << std::endl;
	for (int i = t1.size(); i < 1000; i++) {
		t1.insert(build_record(i*10));
	}
	std::cout << "Current size: " << t1.size() << std::endl;

	std::cout << std::endl << "removing items with keys 0-9999" << std::endl;
	for (int i = 0; i <= 10000; i++) {
		t1.remove(i);
	}
	std::cout << "Current size: " << t1.size() << std::endl;
}

void test_quad_hash() {
	main_savitch_quadratic_hash_table::table<record>t1;
	std::cout << "Inserting a few items into the table" << std::endl;
	for (int i = 0; i < 1000; i++) {
		t1.insert(build_record(i));
	}
	std::cout << "Current size: " << t1.size() << std::endl;

	std::cout << "Is there an item in key 77? " << (t1.is_present(77) ? "Yes!" : "No!") << std::endl;

	std::cout << std::endl << "inserting a record with key 77 and value 'A'" << std::endl;
	t1.insert(record{ 77, 'A' });
	std::cout << "Is there an item in key 77? " << (t1.is_present(77) ? "Yes!" : "No!") << std::endl;
	record temp;
	bool found;
	t1.find(77, found, temp);
	std::cout << "That value with the key 77 is: " << temp.value << std::endl;

	std::cout << std::endl << "inserting a record with key 77 and value 'B'" << std::endl;
	t1.insert(record{ 77, 'B' });
	t1.find(77, found, temp);
	std::cout << "That value with the key 77 is: " << temp.value << std::endl;

	std::cout << "Removing item at key 77" << std::endl;
	t1.remove(77);
	std::cout << "Is there an item in key 77? " << (t1.is_present(77) ? "Yes!" : "No!") << std::endl;

	std::cout << std::endl << "Inserting 800 more items into the table" << std::endl;
	for (int i = t1.size(); i < 1100; i++) {
		t1.insert(build_record(i * 10));
	}
	std::cout << "Current size: " << t1.size() << std::endl;

	std::cout << std::endl << "removing items with keys 0-9999" << std::endl;
	for (int i = 0; i < 11000; i++) {
		t1.remove(i);
	}
	std::cout << "Current size: " << t1.size() << std::endl;
}

int main() {
	srand(time(NULL));
	std::cout << "TESTING double hash..." << std::endl << std::endl;
	test_double_hash();
	std::cout << std::endl << std::endl << "TESTING quadratic hash..." << std::endl << std::endl;
	test_quad_hash();
	return 0;
}