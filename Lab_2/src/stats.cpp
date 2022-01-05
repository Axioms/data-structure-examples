/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 2
* File Name: stats.cpp
*/ 
#include "stats.h"

statistician::statistician() 
// post-condition: sets up statistician object
{
	reset();
}

void statistician::next(double r) 
/*
 * pre-condition: A double "r" is required 
 * post-condition: added the double r as the next number
 */
{
	// Calculation
	if (count == 0) {
		// setting varables
		largest = r;
		tinyest = r;
	}
	// setting varables
	count++;

	total += r;
	
	// Calculation
	if (r > largest) {
		// setting varables
		largest = r;
	}
	else if (r < tinyest) {
		// setting varables
		tinyest = r;
	}
}

void statistician::reset() 
/*
 * post-condition: set all the values in statistician to zero
 */
{
	// setting varables
	count = 0;
	total = 0;
	largest = 0;
	tinyest = 0;
}

int statistician::length() const 
/*
 * post-condition: returns the length as an intager
 */
 {
	// Output
	return count;
}

double statistician::sum() const 
/*
 * post-condition: returns the total as a double
 */
{
	// Output
	return total;
}

double statistician::mean() const 
/*
 * post-condition: returns the mean as a double
 */
 {
	// Output/ Caclulation
	return total / count;
}

double statistician::minimum() const 
/*
 * post-condition: returns the smallest number as a double
 */
{
	// Output
	return tinyest;
}

double statistician::maximum() const 
/*
 * post-condition: returns the biggest number as a double
 */
 {
	// Output
	return largest;
}