/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 4
* File Name: set.cpp
*/

#include "set.h"
#include <algorithm>
#include <cmath>

set::set(size_type initial_capacity) {
	data = new value_type[initial_capacity];
	used = 0;
	capacity = initial_capacity;
}

set::set(const set& s) {
	data = new value_type[s.size()];
	capacity = s.size();
	used = s.size();
	std::copy(s.data, s.data + used, data);
}

set::~set() {
	delete[] data;
}

set& set::operator = (const set& s) {
	
	if (this == &s) {
		return *this;
	}

	capacity = s.size();
	used = s.size();
	std::copy(s.data, s.data + used, data);

	return *this;
}

bool set::erase(const value_type& target) {
	for (size_type i = 0; i < used; i++) {
		if (data[i] == target) {
			used--;
			data[i] = data[used];
			return true;
		}
	}
	return false;
}

bool set::insert(const value_type& target) {
	if (!contains(target)) {
		if (size() >= capacity) {
			reserve((size_type) ceil(used * 1.25));
		}
		data[used] = target;
		used++;
		return true;
	}

	return false;
}

void set::operator += (const set& addend) {

	if (used + addend.used > capacity) {
		reserve((size_type)(used + addend.used));
	}

	for (size_type i = 0; i < addend.used; i++) {
		insert(addend.data[i]);
	}
}

set::size_type set::size() const {
	return used;
}

bool set::contains(const value_type& target) const {
	for (size_type i = 0; i < used; i++) {
		if (target == data[i]) {
			return true;
		}
	}
	return false;
}

std::ostream& operator << (std::ostream& output, const set& s) {
	output << "[ ";
	for (set::size_type i = 0; i < s.used - 1; i++) {
		output << s.data[i] << ", ";
	}
	output << s.data[s.used - 1] << " ]";
	return output;
}

void set::reserve(size_type new_capacity) {
	value_type* new_data = new value_type[new_capacity];
	std::copy(data, data + used, new_data);
	delete[] data;
	data = new_data;
}