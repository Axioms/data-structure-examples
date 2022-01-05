/*
* Class: CS 3305L Section 05
* Term: Spring 2020
* Name: Karan Munday
* Instructor: Deepa Muralidhar
* Assignment: 10
* File Name: main_lab11.cpp
*/

#include "bintree.h"
#include "build_tree.h"
#include <iostream>
#include <assert.h>
using namespace std;

template <class T>
int depth(binary_tree_node<T> *root)
{
	if(root == NULL) {
		return -1;
	}
	else {
		int leftDepth = depth(root->left()) + 1;
		int rightDepth = depth(root->right()) + 1;
		if(leftDepth > rightDepth) {
			return leftDepth;
		}
		else {
			return rightDepth;
		}
	}
}

template <class T>
T max(binary_tree_node<T> *root)
{
	assert(root != NULL);
	if(root->left() == NULL && root->right() == NULL) {
		return root->data();
	}
	else if(root->left() != NULL && root->right() == NULL) {
		T leftMax = max(root->left());
		if(leftMax > root->data()) {
			return leftMax;
		}
		else {
			return root->data();
		}
	}
	else if(root->left() == NULL && root->right() != NULL) {
		T rightMax = max(root->right());
		if(rightMax > root->data()) {
			return rightMax;
		}
		else {
			return root->data();
		}
	}
	else {
		T leftMax= max(root->left());
		T rightMax= max(root->right());
		if(leftMax > rightMax) {
			return leftMax;
		}
		else {
			return rightMax;
		}
	}
}

double tree_sum(binary_tree_node<double> *root)
{
	if(root == NULL) {
		return 0;
	}
	else {
		return tree_sum(root->left()) + tree_sum(root->right()) + root->data();
	}
}

double tree_average(binary_tree_node<double> *root)
{
	return tree_sum(root) / tree_size(root);
}

template <class T>
bool tree_is_balanced(binary_tree_node<T> *root)
{
	if (root == NULL) {
		return true;
	}
	else if ( abs((depth(root->left()) - depth(root->right())))  < 2) {
		return true;
	}
	else {
		return false;
	}
}


template <class T>
void printItem(T item)
{
    cout<<item<<" ";
}

int main() {
    binary_tree_node<int> *s1 = sample1();
    cout<< "size of s1: " << tree_size(s1) <<endl;
    cout<< "depth of s1: " << depth(s1) <<endl;
    cout<< "max of s1: " << max(s1) <<endl;

    binary_tree_node<int> *s2 = sample2();
    cout<< "size of s2: " << tree_size(s2) <<endl;
    cout<< "depth of s2: " << depth(s2) <<endl;
    cout<< "max of s2: " << max(s2) <<endl;

   
    binary_tree_node<double> *s3 =sample3();
    cout<< "size of s3: " << tree_size(s3) <<endl;
    cout<< "depth of s3: " << depth(s3) <<endl;
    cout<< "max of s3: " << max(s3) <<endl;

    binary_tree_node<double> *s4 =sample4();
    cout<< "size of s4: " << tree_size(s4) <<endl;
    cout<< "depth of s4: " << depth(s4) <<endl;
    cout<< "max of s4: " << max(s4) <<endl;

    cout << endl;

    cout<< "sum of s3: " << tree_sum(s3) <<endl;
    cout<< "average of s3: " << tree_average(s3) <<endl;
    cout<< "size of s3: " << tree_size(s3) <<endl;

    binary_tree_node<string> *s5 = sample5();
    binary_tree_node<double> *b1 =sample_bal1();

    cout<< "sum of b1: " << tree_sum(b1) <<endl;
    cout<< "average of b1: " << tree_average(b1) <<endl;
    cout<< "size of b1: " << tree_size(b1) <<endl;
    
    binary_tree_node<double> *b2 =sample_bal2();

    cout<< "sum of b2: " << tree_sum(b2) <<endl;
    cout<< "average of b2: " << tree_average(b2) <<endl;
    cout<< "size of b2: " <<tree_size(b2) <<endl;

    cout << endl;
    cout << "s1 is balanced? " << tree_is_balanced(s1) << endl;
    cout << "s2 is balanced? " << tree_is_balanced(s2) << endl;
    cout << "s3 is balanced? " << tree_is_balanced(s3) << endl;
    cout << "s4 is balanced? " << tree_is_balanced(s4) << endl;
    cout << "s5 is balanced? " << tree_is_balanced(s5) << endl;
    cout << "b1 is balanced? " << tree_is_balanced(b1) << endl;
    cout << "b2 is balanced? " << tree_is_balanced(b2) << endl;
}
