#include "pettypes.h"

stack::stack() {

	
}

void stack::push(data newData) {

	obj* ptr = new obj;

	ptr->data = newData;
	ptr->next = top;

	top = ptr;
}
void stack::show() {

	obj* ptr = top;

	while (ptr != nullptr) {

		std::cout << "{" << ptr->data.name << ", " << ptr->data.old << "}" << std::endl;
		ptr = ptr->next;
	}

	std::cout << std::endl;
}
void stack::pop() {

	if (top == nullptr) {

		return;
	}

	std::cout << "Object {" << top->data.name << ", " << top->data.old << "} deleted" << std::endl;

	obj* ptr = top->next;

	delete top;
	top = ptr;
}

