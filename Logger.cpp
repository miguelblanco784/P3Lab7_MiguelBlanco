#include "Log.cpp"

using namespace std;

#ifndef LOGGER_CPP
#define LOGGER_CPP
class Logger{
	private:
		string usuario;
		//dado
		string nombrearchivo;
		int numlog;
		vector<Log*> logs;
	public:
		Logger(string usuario, string stringnombrearchivo){
			this->usuario = usuario;
			this->nombrearchivo = nombrearchivo;
		}
		
		~Logger(){}
		
		agregarVector(){
			
		}
		
		void setLogger(int numlog){
			this->numlog = numlog;
		}
		
		void setLogs(vector<Log*> logs){
			this->logs = logs;
		}
};
#endif 

