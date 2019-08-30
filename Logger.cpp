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
		Logger(string usuario, string nombrearchivo){
			this->usuario = usuario;
			this->nombrearchivo = nombrearchivo;
			cargarLogs();
		}
		
		~Logger(){
		for(int x = 0; x < logs.size(); x++)
			logs.at(x)->~Logs();
		}
		
		agregarVector(){
			
		}
		
		void setLogger(int numlog){
			this->numlog = numlog;
		}
		
		void setLogs(vector<Log*> logs){
			this->logs = logs;
		}
		
		void cargarLogs(){
			fstream Leer;
			Leer.open(nombrearchivo.c_str(), ios::in | ios::binary);
			if(!Leer){
				return ;
			} 
			while(!Leer.eof()){
				Log temporal;
				Leer.read(reinterpret_cast<char *>(&temporal), sizeof(temporal));
				logs.push_back(new Log(temporal.getUsuario(), temporal.getComando(), temporal.getNumlog()));	
			}
			//Leer.read(reinterpret_cast<char *>(&j), sizeof(j));
			numlog = logs.at(logs.size()-1)->getNumlog();
			Leer.close();
		}
		
		void escribirLogs(string comando){
			ofstream Escribir(nombrearchivo.c_str(),  ios::out | ios::binary | ios::app);
			if(Escribir){
				cout<<"Escribir"<<endl;
			} else {
				cout << nombrearchivo << endl;
			}
			numlog++;
			
			logs.push_back(new Log(usuario, comando, numlog));
			logs.at(logs.size()-1)->correrLog();
			
			Log temporal(usuario, comando, numlog);
			
			Escribir.write(reinterpret_cast<char *>(&temporal), sizeof(temporal));
			
			Escribir.close();
			
		}
		
		void listar(){
			cout<<logs.size()<<endl;
			for(int i = 0; i < logs.size(); i++ ){
				cout<<i<<" ";
				cout<<"Usuario: "<<logs.at(i)->getUsuario();
				cout<<setw(10)<<" Comando: "<<logs.at(i)->getComando();
				cout<<endl;
			}
		}
		
};
#endif 

