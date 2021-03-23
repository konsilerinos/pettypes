#include <iostream>
#include "pettypes.h"

int main() {

	Stack stack;

	std::cout << "===| Stack using" << std::endl << std::endl;

	stack.Push({ "qwerty", 1 });
	stack.Push({ "Konsilerin", 2 });
	stack.Push({ "Fortses", 3 });
	stack.Push({ "Konsilerinos", 4 });

	std::cout << std::endl;

	stack.Show();

	stack.Delete();

	Deq deq;

	std::cout << "===| Deq using" << std::endl << std::endl;

	deq.PushBack({ "qwerty", 1 });
	deq.PushBack({ "Konsilerin", 2 });
	deq.PushBack({ "Fortses", 3 });
	deq.PushBack({ "Konsilerinos", 4 });

	std::cout << std::endl;

	deq.Show();

	deq.Delete();

	return 0;
}