#include <iostream>
#include <iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include <typeinfo>
#include <string>
#include <fstream>

using namespace std;

#ifndef LOG_CPP
#define LOG_CPP
class Log{
	private:
		string usuario;
		string comando;
		string numlog;
	public:
		Log(string usuario, string comando, string numlog){
			this->usuario = usuario;
			system(comando.c_str());
			this->comando = comando;
			this->numlog = numlog;
		}
		
		~Log(){}
};
#endif
