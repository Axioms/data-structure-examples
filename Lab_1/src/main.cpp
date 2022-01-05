/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 1
* File Name: main.cpp
*/

#include <cstdlib>
#include <iostream>

void ex1();
void ex2();
void ex3(int number);


int main()
{
	ex1();
	ex2();
	ex3(8);
    return 0;
}

void ex1() 
// Post-condition: prints out data
{
	// Output
	std::cout << std::endl << "Exercise 1" << std::endl << std::endl;

	std::cout << "Name: Karan Munday" << std::endl;
	std::cout << "Phones: 404-821-5467" << std::endl;
	std::cout << "email: kmunday@students.kennesaw.edu" << std::endl;
	std::cout << "High School(s): Berkmar High School" << std::endl;
	std::cout << "Previous colleges: N/A" << std::endl;
	std::cout << "List college math/CS courses: data structure and Calc 2" << std::endl;
	std::cout << "What, when, and where was your last math and cs course: Spring 2020" << std::endl;
	std::cout << "Extracurricular activities: Personal Projects" << std::endl;
	std::cout << "Favorite books, movies, music: John Wick" << std::endl;
	std::cout << "What you plan to do after graduation: Work as a software developer" << std::endl;
}

void ex2() 
// Post-condition: prints out data
{
	
	// Declaration
	int number;
	//  Reading Input
	std::cout << std::endl << "Exercise 2" << std::endl << std::endl;
	std::cout << "Insert Positve Number: ";
	std::cin >> number;
	
	while(number < 0) {
		std::cout << "Insert Positve Number: ";
		std::cin >> number;
	}
	
	// Calculation
	int total = 0;
	for (int i = 1 ; i <= number; i++) {
		total += i;
	}
	//  Output
	std::cout << std::endl << "total: " << total << std::endl;
}

void ex3(int number) 
/*
	pre-condition: a positve number is required
	Post-condition: prints out data
*/
{
	//  Output
	std::cout << std::endl << "Exercise 3" << std::endl << std::endl;
	// Calculation
	for(int i=number; i >= 0; i-=2) {
		for(int j=i; j >= 0; j-=2) {
			//  Output
			std::cout << j << " ";
		}
		//  Output
		std::cout << std::endl;
	}
}