/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 3
* File Name: thinker.h
*/

class thinking_cap
{
	public:
		void slots(char new_green[ ], char new_red[ ]);
		void push_green() const;
		void push_red() const;
	private:
		char green_string[50];
		char red_string[50];
};
