#include "Consola.cpp"
#include "MiException.cpp"

using namespace std;

int main(){
	string usuario;
	cout<<"Ingrese Usuario: ";
	cin>>usuario;
	Consola* consola = new Consola(usuario, "logs.bin");
	
	try{
		consola->cmd();
	}catch(MiException& e){
		cout<<"Mi ex: "<<e.what()<<endl;
	}
	
	delete consola;
	return 0;
}

