#include <iostream>
#include <iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include <typeinfo>
#include <string>
#include <fstream>
#include "MiException.cpp"

using namespace std;

#ifndef LOG_CPP
#define LOG_CPP
class Log{
	private:
		char usuario [50];
		char comando [50];
		int numlog;
	public:
		Log(){
		}
		Log(string usuario, string comando, int numlog){
			const char *pusuario = usuario.data();
          	int sizeusuario = usuario.size();
          	sizeusuario = 
            sizeusuario < 50 ? sizeusuario:49;
          	strncpy(this->usuario, pusuario, sizeusuario);
          	this->usuario[sizeusuario] = '\0';
          	
          	const char *pcomando = comando.data();
          	int sizecomando = comando.size();
          	sizecomando = 
            sizecomando < 50 ? sizecomando:49;
          	strncpy(this->comando, pcomando, sizecomando);
          	this->comando[sizecomando] = '\0';
			this->numlog = numlog;
		}
		
		~Log(){}
		
		
		void correrLog(){
			int i  = system(comando);
			validar(i);
		}
		
		int getNumlog(){
			return numlog;
		}
		
		string getUsuario(){
			string temp = usuario;
			return temp;
		}
		
		string getComando(){
			string temp = comando;
			return temp;
		}
		
		void validar(int x){
			if(x){
				throw MiException("C masmut el programa!");
			}
		}
};
#endif
