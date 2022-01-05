/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 3
* File Name: TestThinker.cpp
*/

#include "thinker.h"
int main( )
{
	thinking_cap student;
	thinking_cap fan;
	student.slots( "Hello", "Goodbye");
	fan.slots( "Go Cougars!", "Boo!");
	student.push_green( );
	fan.push_green( );
	student.push_red( );
	return 0;
}