#include <iostream>
//#pragma once
#include "Vector.h"

using namespace std;

Vector::Vector(int capacity) {
	_element = new int[capacity];
	_size = 0;
	_capacity = capacity;
}

Vector::empty() {
	if (_element == NULL){
		return TRUE;
	}
	else {
		return FALSE;
	}
}

Vector::size() {
	return _size;
}

Vector::capacity() {
	return _capacity;
}

Vector::push(int item) {
	if (_size == _capacity) {
		//look up const variables and how to set them according to user input
		_capacity = _capacity + 5
	}
	int* new_element = NULL;
	new_element = new int[_capacity]
	int i = 0;
	while(i < _size) {
		new_element[i] = _element[i];
	}
	new_element[i] = item;

	_size = _size + 1;
	
	delete[] _element;
	_element = new_element;
	delete[] new_element;
	new_element = NULL;
}

Vector::~Vector() {
	delete[] _element;
	_element = NULL;
}