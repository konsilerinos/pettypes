#pragma once

#include <iostream>

struct data {

	std::string name;
	int old;
};

struct stackObject {

	data data;
	stackObject* next;
};

struct deqObject {

	data data;
	deqObject* prev;
	deqObject* next;
};

class Stack {

public:

	Stack();

	void Push(data);

	void Show();

	void Pop();

	void Delete();

private:

	stackObject* head;

};

class Deq {

public:

	Deq();

	void PushFront(data newData);
	void PushBack(data newData);

	void Show();

	void PopFront();
	void PopBack();

	void Delete();

private:

	deqObject* head;
	deqObject* tail;

};