#include <iostream>
#include "pettypes.h"

int main() {

	stack s;

	s.push({ "Nikki Konsilerin", 21 });
	s.push({ "Array Matrix", 20 });
	s.push({ "Notepad Plusplus", 19 });

	s.show();

	s.pop();
	s.pop();
	s.pop();

	return 0;
}