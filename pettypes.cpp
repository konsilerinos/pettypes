#include "pettypes.h"

Stack::Stack() {

	head = nullptr;
}

void Stack::Push(data newData) {

	stackObject* ptr = new stackObject;
	ptr->data = newData;

	std::cout << "Object {" << ptr->data.name << ", " << ptr->data.old << "} added" << std::endl;

	if (head == nullptr) {

		head = ptr;
		head->next = nullptr;
	}
	else {

		ptr->next = head;
		head = ptr;
	}
}
void Stack::Show() {

	stackObject* ptr = head;

	while (ptr != nullptr) {

		std::cout << "{" << ptr->data.name << ", " << ptr->data.old << "}" << std::endl;
		ptr = ptr->next;
	}

	std::cout << std::endl;
}
void Stack::Pop() {

	if (head == nullptr) {

		return;
	}

	if (head->next == nullptr) {

		std::cout << "Object {" << head->data.name << ", " << head->data.old << "} deleted" << std::endl;

		delete head;
		head = nullptr;
	}
	else {

		stackObject* ptr = head;

		std::cout << "Object {" << head->data.name << ", " << head->data.old << "} deleted" << std::endl;

		head = head->next;

		delete ptr;
	}
}
void Stack::Delete() {

	while (head != nullptr) {

		this->Pop();
	}

	std::cout << std::endl;
}

Deq::Deq() {

	head = nullptr;
	tail = nullptr;
}

void Deq::PushFront(data newData) {

	deqObject* ptr = new deqObject;
	ptr->data = newData;

	std::cout << "Object {" << ptr->data.name << ", " << ptr->data.old << "} added" << std::endl;

	if (head == nullptr) {

		ptr->prev = nullptr;
		ptr->next = nullptr;

		head = ptr;
		tail = ptr;
	}
	else {

		ptr->prev = nullptr;
		ptr->next = head;

		head->prev = ptr;
		head = ptr;
	}
}
void Deq::PushBack(data newData) {

	deqObject* ptr = new deqObject;
	ptr->data = newData;

	std::cout << "Object {" << ptr->data.name << ", " << ptr->data.old << "} added" << std::endl;

	if (head == nullptr) {

		ptr->prev = nullptr;
		ptr->next = nullptr;

		head = ptr;
		tail = ptr;
	}
	else {

		ptr->prev = tail;
		ptr->next = nullptr;

		tail->next = ptr;
		tail = ptr;
	}
}
void Deq::Show() {

	deqObject* ptr = head;

	while (ptr != nullptr) {

		std::cout << "{" << ptr->data.name << ", " << ptr->data.old << "}" << std::endl;
		ptr = ptr->next;
	}

	std::cout << std::endl;
}
void Deq::PopFront() {

	if (head == nullptr) {

		return;
	}

	if (head == tail) {

		std::cout << "Object {" << head->data.name << ", " << head->data.old << "} deleted" << std::endl;

		delete head;
		head = nullptr;
	}
	else {

		deqObject* ptr = head;

		std::cout << "Object {" << head->data.name << ", " << head->data.old << "} deleted" << std::endl;

		head = head->next;
		head->prev = nullptr;

		delete ptr;
	}
}
void Deq::PopBack() {

	if (tail == nullptr) {

		return;
	}

	if (head == tail) {

		std::cout << "Object {" << tail->data.name << ", " << tail->data.old << "} deleted" << std::endl;

		delete tail;

		tail = nullptr;
		head = nullptr;
	}
	else {

		deqObject* ptr = tail;

		std::cout << "Object {" << ptr->data.name << ", " << ptr->data.old << "} deleted" << std::endl;

		tail = tail->prev;
		tail->next = nullptr;

		delete ptr;
	}
}
void Deq::Delete() {

	while (head != nullptr) {

		this->PopFront();
	}

	std::cout << std::endl;
}

Queue::Queue() {

	head = nullptr;
	tail = nullptr;
}

void Queue::Push(data newData) {

	queueObject* ptr = new queueObject;
	ptr->data = newData;

	std::cout << "Object {" << ptr->data.name << ", " << ptr->data.old << "} added" << std::endl;

	if (head == nullptr) {

		ptr->prev = nullptr;
		ptr->next = nullptr;

		head = ptr;
		tail = ptr;
	}
	else {

		ptr->prev = tail;
		ptr->next = nullptr;

		tail->next = ptr;
		tail = ptr;
	}
}

void Queue::Show() {

	queueObject* ptr = head;

	while (ptr != nullptr) {

		std::cout << "{" << ptr->data.name << ", " << ptr->data.old << "}" << std::endl;
		ptr = ptr->next;
	}

	std::cout << std::endl;
}

void Queue::Pop() {

	if (head == nullptr) {

		return;
	}

	if (head == tail) {

		std::cout << "Object {" << head->data.name << ", " << head->data.old << "} deleted" << std::endl;

		delete head;
		head = nullptr;
	}
	else {

		queueObject* ptr = head;

		std::cout << "Object {" << head->data.name << ", " << head->data.old << "} deleted" << std::endl;

		head = head->next;
		head->prev = nullptr;

		delete ptr;
	}
}

void Queue::Delete() {

	while (head != nullptr) {

		this->Pop();
	}
}