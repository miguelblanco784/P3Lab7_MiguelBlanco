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
			this->usuario = usuario;
			logger = new Logger(usuario, loggername);
		}
		
		cmd(){
			while(true){
				string comando;
				cout<<usuario<<">";
				cin>>comando;
				if(comando == "listar"){
					logger->listar();
					cout<<endl;
				}else if(comando == "exit"){
					logger->~Logger();
					break;
				}else{
					logger->escribirLogs(comando);
				}
				
			}
		}
		
};
#endif
