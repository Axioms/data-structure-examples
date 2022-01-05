/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 5
* File Name: sequence2.cpp
*/

#include "sequence2.h"
#include <algorithm>

// CONSTRUCTORS and DESTRUCTOR
main_savitch_4::sequence::sequence(size_type initial_capacity) {
	data = new value_type[initial_capacity];
	used = 0;
	current_index = 0;
	capacity = initial_capacity;
}

main_savitch_4::sequence::sequence(const sequence& source) {
	data = new value_type[source.capacity];
	capacity = source.capacity;
	used = source.size();
	current_index = source.current_index;
	std::copy(source.data, source.data + used, data);
}

main_savitch_4::sequence::~sequence() {
	delete[] data;
}

// MODIFICATION MEMBER FUNCTIONS

void main_savitch_4::sequence::resize(size_type new_capacity) {
	if (new_capacity > capacity) {
		value_type* new_data = new value_type[new_capacity];
		std::copy(data, data + used, new_data);
		capacity = new_capacity;
		delete[] data;
		data = new_data;
	}
}

void main_savitch_4::sequence::start() {
	current_index = 0;
}

void main_savitch_4::sequence::advance() {
	if (is_item()) {
		current_index++;
	}
}

void main_savitch_4::sequence::insert(const value_type& entry) {
	if (size() >= capacity) {
		resize(capacity + 1);
	}

	if (current_index >= used) {
		current_index = 0;
	}

	for (size_type i = used; i > current_index; i--) {
		data[i] = data[i - 1];
	}
	data[current_index] = entry;
	used++;
}

void main_savitch_4::sequence::attach(const value_type& entry) {
	if (size() >= capacity) {
		resize(capacity + 1);
	}

	if (used > 0 && current_index < used) {
		current_index++;
		for (size_type i = used; i > current_index; i--) {
			data[i] = data[i - 1];
		}
	}

	data[current_index] = entry;
	used++;
}

void main_savitch_4::sequence::remove_current() {
	if (is_item()) {
		for (sequence::size_type i = current_index; i < used; i++) {
			data[i] = data[i + 1];
		}
		used--;
	}
}

void main_savitch_4::sequence::operator=(const sequence& source) {
	if (this != &source) {
		data = new value_type[source.capacity];
		capacity = source.capacity;
		used = source.size();
		current_index = source.current_index;
		std::copy(source.data, source.data + used, data);
	}
}

// CONSTANT MEMBER FUNCTIONS

main_savitch_4::sequence::size_type main_savitch_4::sequence::size() const {
	return used;
}

bool main_savitch_4::sequence::is_item() const {
	return current_index < used;
}

main_savitch_4::sequence::value_type main_savitch_4::sequence::current() const {
	return data[current_index];
}