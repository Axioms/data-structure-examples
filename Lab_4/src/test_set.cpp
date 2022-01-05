/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 4
* File Name: set.cpp
*/


#include <iostream>
#include "set.h"

int main(int argc, char **argv)
{
    set s(5);
    s.insert (7);
    std::cout << s << std::endl;
    s.insert (8);
    std::cout << s << std::endl;
    s.insert(3);
    std::cout << s << std::endl;
    s.insert (2);
    s.insert (1);
    s.insert (22);
    std::cout << s << std::endl;
    set s1(s);
    std::cout << s1 << std::endl;
    set s2 (78);
    s2 = s;
    std::cout << s2 << std::endl;
 }