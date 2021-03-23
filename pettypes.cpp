#include "pettypes.h"

Stack::Stack() {

	start = nullptr;
}

void Stack::Push(data newData) {

	stackObject* ptr = new stackObject;
	ptr->data = newData;

	std::cout << "Object {" << ptr->data.name << ", " << ptr->data.old << "} added" << std::endl;

	if (start == nullptr) {

		start = ptr;
		start->next = nullptr;
	}
	else {

		ptr->next = start;
		start = ptr;
	}
}
void Stack::Show() {

	stackObject* ptr = start;

	while (ptr != nullptr) {

		std::cout << "{" << ptr->data.name << ", " << ptr->data.old << "}" << std::endl;
		ptr = ptr->next;
	}

	std::cout << std::endl;
}
void Stack::Pop() {

	if (start == nullptr) {

		return;
	}

	if (start->next == nullptr) {

		std::cout << "Object {" << start->data.name << ", " << start->data.old << "} deleted" << std::endl;

		delete start;
		start = nullptr;
	}
	else {

		stackObject* ptr = start;

		std::cout << "Object {" << start->data.name << ", " << start->data.old << "} deleted" << std::endl;

		start = start->next;

		delete ptr;
	}
}
void Stack::Delete() {

	while (start != nullptr) {

		this->Pop();
	}

	std::cout << std::endl;
}

Deq::Deq() {

	start = nullptr;
	end = nullptr;
}

void Deq::PushFront(data newData) {

	deqObject* ptr = new deqObject;
	ptr->data = newData;

	std::cout << "Object {" << ptr->data.name << ", " << ptr->data.old << "} added" << std::endl;

	if (start == nullptr) {

		ptr->prev = nullptr;
		ptr->next = nullptr;

		start = ptr;
		end = ptr;
	}
	else {

		ptr->prev = nullptr;
		ptr->next = start;

		start->prev = ptr;
		start = ptr;
	}
}
void Deq::PushBack(data newData) {

	deqObject* ptr = new deqObject;
	ptr->data = newData;

	std::cout << "Object {" << ptr->data.name << ", " << ptr->data.old << "} added" << std::endl;

	if (start == nullptr) {

		ptr->prev = nullptr;
		ptr->next = nullptr;

		start = ptr;
		end = ptr;
	}
	else {

		ptr->prev = end;
		ptr->next = nullptr;

		end->next = ptr;
		end = ptr;
	}
}
void Deq::Show() {

	deqObject* ptr = start;

	while (ptr != nullptr) {

		std::cout << "{" << ptr->data.name << ", " << ptr->data.old << "}" << std::endl;
		ptr = ptr->next;
	}

	std::cout << std::endl;
}
void Deq::PopFront() {

	if (start == nullptr) {

		return;
	}

	if (start == end) {

		std::cout << "Object {" << start->data.name << ", " << start->data.old << "} deleted" << std::endl;

		delete start;
		start = nullptr;
	}
	else {

		deqObject* ptr = start;

		std::cout << "Object {" << start->data.name << ", " << start->data.old << "} deleted" << std::endl;

		start = start->next;
		start->prev = nullptr;

		delete ptr;
	}
}
void Deq::PopBack() {

	if (end == nullptr) {

		return;
	}

	if (start == end) {

		std::cout << "Object {" << end->data.name << ", " << end->data.old << "} deleted" << std::endl;

		delete end;

		end = nullptr;
		start = nullptr;
	}
	else {

		deqObject* ptr = end;

		std::cout << "Object {" << ptr->data.name << ", " << ptr->data.old << "} deleted" << std::endl;

		end = end->prev;
		end->next = nullptr;

		delete ptr;
	}
}
void Deq::Delete() {

	while (start != nullptr) {

		this->PopFront();
	}

	std::cout << std::endl;
}