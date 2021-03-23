#pragma once

#include <iostream>

struct data {

	std::string name;
	int old;
};

struct obj {

	data data;
	obj* next;
};

class stack {

public:

	stack();

	void push(data newData);

	void show();

	void pop();

private:

	obj* top;

};