/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 7
* File Name: main.cpp
*/

#include <iostream>
#include "node1.h"
#include "check_lists.h"

void list_print(main_savitch_5::node* head_ptr) {
	main_savitch_5::node* cur = head_ptr;
	if(cur == NULL) {
		std::cout << "[ ]" << std::endl;
	}
	else {
		std::cout << "[ ";
		while(cur->link() != NULL) {
			std::cout << cur->data() << ", ";
			cur = cur->link();
		}
		std::cout << cur->data() << " ]" << std::endl;
	}
}

int main() {
	//test one
	main_savitch_5::node* list_one_head = new main_savitch_5::node(23.5);
	main_savitch_5::list_head_insert(list_one_head, 45.6);
	main_savitch_5::list_head_insert(list_one_head, 67.7);
	main_savitch_5::list_head_insert(list_one_head, 89.8);
	main_savitch_5::list_head_insert(list_one_head, 12.9);
	list_print(list_one_head);
	check_list1(list_one_head);
	
	//test 2
	main_savitch_5::node* list_two_head = new main_savitch_5::node(23.5);
	main_savitch_5::node* list_two_tail = list_two_head;
	list_insert(list_two_tail, 45.6);
	list_two_tail = list_two_tail->link();
	
	list_insert(list_two_tail, 67.7);
	list_two_tail = list_two_tail->link();
	
	list_insert(list_two_tail, -123.5);
	list_two_tail = list_two_tail->link();
	
	list_insert(list_two_tail, 89.8);
	list_two_tail = list_two_tail->link();
	
	list_insert(list_two_tail, 12.9);
	list_two_tail = list_two_tail->link();
	list_print(list_two_head);
	check_list2(list_two_head);
	
	//test 3
	main_savitch_5::node* list_three_head = new main_savitch_5::node;
	main_savitch_5::node* list_three_tail = list_two_head;
	list_copy(list_one_head, list_three_head, list_three_tail);
	list_print(list_three_head);
	check_list1(list_three_head);
	std::cout << "item at tail: ";
	list_print(list_three_tail);
	
	//test 4
	list_head_remove(list_two_head);
	list_print(list_two_head);
	check_list2B(list_two_head);
	
	//test 5
	main_savitch_5::node* cur = list_two_head->link();
	list_remove(cur);
	list_print(list_two_head);
	check_list2C(list_two_head);
	return 0;
}