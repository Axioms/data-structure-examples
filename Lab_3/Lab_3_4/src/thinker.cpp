//////// thinker.cpp /////////////////////////////
/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 3
* File Name: thinker.cpp
*/

#include <iostream>
#include <stdlib.h>
#include <assert.h> // included assert
#include <string.h> // included string
#include "thinker.h"

using namespace std; // added namespace

void thinking_cap::slots(char new_green[ ], char new_red[ ])
{
	assert(strlen(new_green) < 50);
	assert(strlen(new_red) < 50);
	strcpy(green_string, new_green);
	strcpy(red_string, new_red);
}
void thinking_cap::push_green() const //added () and const
{
	cout << green_string << endl;
}
void thinking_cap::push_red() const //added () and const
{
	cout << red_string << endl;
}