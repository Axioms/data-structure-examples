/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 9
* File Name: stack_pair.h
*/

#ifndef STACK_PAIR_H
#define STACK_PAIR_H
#include <cstddef>
template <class T>
class stack_pair {
public:
    static const int CAPACITY = 30;

    stack_pair();
    void push_a(T item);
    void push_b(T item);
    T pop_a();
    T pop_b();
    std::size_t size_a();
    std::size_t size_b();
    bool is_empty_a() const;
    bool is_empty_b() const;
    bool is_full_a() const;
    bool is_full_b() const;
    
private:
    T data[CAPACITY];
    int top_a;
    int top_b;
};

#include "stack_pair.template"

#endif // STACK_PAIR_H
