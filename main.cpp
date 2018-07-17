#include <iostream>
#include <string>
#include "List.h"


int main() {
	ListInterface<std::string>* ptr = new List<std::string>;
	std::string str = "";
	std::cout << "Enter a string: ";
	for (int ix = 0; ix < 4; ++ix) {
		std::cin >> str;
		std::cout << ptr->insert(1,str) << std::endl;
	}
	ptr->setElement(43, "axmax");
	for(int ix = 1; ix <= ptr->getSize(); ++ix) {
		std::cout << ptr->getElement(ix) << std::endl;
	}


}
