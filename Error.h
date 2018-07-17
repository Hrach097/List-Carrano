#ifndef _ERROR
#define _ERROR
#include <stdexcept>
#include <string>

class Error: public std::logic_error {
	public :
		Error(const std::string& message = "") : logic_error(message) {} 

}; 
#endif
