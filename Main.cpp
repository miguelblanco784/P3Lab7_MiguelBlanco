#include "Consola.cpp"
#include "MiException.cpp"

using namespace std;

int main(){
	string usuario;
	cout<<"Ingrese Usuario: ";
	cin>>usuario;
	Consola* consola = new Consola(usuario, "logs.bin");
	//consola->cmd();
	
	try{
		consola->cmd();
	}catch(MiException& e){
		cout<<e.what()<<endl;
	}
	
	delete consola;
	return 0;
}

