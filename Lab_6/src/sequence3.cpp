/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 6
* File Name: sequence3.cpp
*/

#include "sequence3.h"

// CONSTRUCTORS and DESTRUCTOR
main_savitch_5::sequence::sequence() {
	head_ptr = NULL;
	tail_ptr = head_ptr;
	cursor = NULL;
	precursor = NULL;
	many_nodes = 0;
}

main_savitch_5::sequence::sequence(const sequence& source) {
	list_copy(source.head_ptr, head_ptr, tail_ptr);

	node* trev = source.head_ptr;
	size_type node_index = 0;
	bool found_precursor = false;
	if (source.cursor != NULL && source.precursor != NULL) {
		while (trev != NULL && !found_precursor) {
			if (trev == source.precursor) {
				found_precursor = true;
			}
			node_index++;
			trev = trev->link();
		}
		precursor = list_locate(head_ptr, node_index);
		cursor = precursor->link();
	}
	else if (source.precursor == NULL) {
		precursor = NULL;
		cursor = head_ptr;
	}
	else {
		precursor = tail_ptr;
		cursor = NULL;
	}
	many_nodes = source.many_nodes;
}

main_savitch_5::sequence::~sequence() {
	list_clear(head_ptr);
}
// MODIFICATION MEMBER FUNCTIONS
void main_savitch_5::sequence::start() {
	if (many_nodes > 0) {
		cursor = head_ptr;
	}
	else {
		cursor = NULL;
	}
	precursor = NULL;
}

void main_savitch_5::sequence::advance() {
	if (is_item()) {
		precursor = cursor;
		cursor = cursor->link();
	}
}

void main_savitch_5::sequence::insert(const value_type& entry) {
	if (precursor != NULL && precursor != tail_ptr) {
		list_insert(precursor, entry);
		cursor = precursor->link();
	}
	else {
		list_head_insert(head_ptr, entry);
		cursor = head_ptr;
		precursor = NULL;
	}

	if (cursor->link() == NULL) {
		tail_ptr = cursor;
	}

	many_nodes++;
}

void main_savitch_5::sequence::attach(const value_type& entry) {
	if (is_item()) {
		list_insert(cursor, entry);
		precursor = cursor;
		cursor = cursor->link();
	}
	else if(head_ptr == NULL){
		list_head_insert(head_ptr, entry);
		cursor = head_ptr;
		precursor = NULL;
	}
	else {
		precursor = tail_ptr;
		node* temp = new node(entry, NULL);
		tail_ptr->set_link(temp);
		tail_ptr = temp;
		cursor = tail_ptr;
	}

	if (cursor->link() == NULL) {
		tail_ptr = cursor;
	}

	many_nodes++;
}


void main_savitch_5::sequence::operator =(const sequence& source) {
	if (this != &source) {
		list_copy(source.head_ptr, head_ptr, tail_ptr);

		node* trev = source.head_ptr;
		size_type node_index = 0;
		bool found_precursor = false;
		if (source.cursor != NULL && source.precursor != NULL) {
			while (trev != NULL && !found_precursor) {
				if (trev == source.precursor) {
					found_precursor = true;
				}
				node_index++;
				trev = trev->link();
			}
			precursor = list_locate(head_ptr, node_index);
			cursor = precursor->link();
		}
		else if (source.precursor == NULL) {
			precursor = NULL;
			cursor = head_ptr;
		}
		else {
			precursor = tail_ptr;
			cursor = NULL;
		}
		many_nodes = source.many_nodes;
	}
}

void main_savitch_5::sequence::remove_current() {

	if (is_item() && cursor != head_ptr && cursor != tail_ptr) {
		list_remove(precursor);
		if (precursor->link() != NULL && cursor->link() != NULL) {
			cursor = precursor->link();
		}
		else {
			cursor = NULL;
			tail_ptr = precursor;
		}
	}
	else if (cursor == tail_ptr && cursor != head_ptr) {
		delete tail_ptr;
		precursor->set_link(NULL);
		tail_ptr = precursor;
		cursor = NULL;
	}
	else {
		list_head_remove(head_ptr);
		cursor = head_ptr;
	}
	many_nodes--;
}

// CONSTANT MEMBER FUNCTIONS

main_savitch_5::sequence::value_type main_savitch_5::sequence::current() const {
	return cursor->data();
}