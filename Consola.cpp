#include "Logger.cpp"

using namespace std;

#ifndef CONSOLA_CPP
#define CONSOLA_CPP
class Consola{
	private:
		string usuario;
		Logger* logger;
	public: 
		Consola(string usuario, string loggername){
			this->usuario;
			logger = new Logger(usuario, loggername);
			logger->setNumlog();
		}
		
		cmd(){
			leerArchivo();
			while(true){
				string comando;
				cout<<usuario<<">";
				cin>>comando;
				
				l	
			}
		}
		
};
#endif
