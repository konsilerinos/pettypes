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

struct queueObject {

	data data;
	queueObject* prev;
	queueObject* next;
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

	void PushFront(data);
	void PushBack(data);

	void Show();

	void PopFront();
	void PopBack();

	void Delete();

private:

	deqObject* head;
	deqObject* tail;

};

class Queue {

public:

	Queue();

	void Push(data);

	void Show();

	void Pop();

	void Delete();

private:

	queueObject* head;
	queueObject* tail;

};
