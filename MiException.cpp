#include <iostream>
#include <stdexcept>
#include <exception>

using namespace std;

#ifndef MIEXCEPTION_CPP
#define MIEXCEPTION_CPP
class MiException: public runtime_error{
	public:
		MiException(char* msg):runtime_error(msg){
			
		}
};
#endif
