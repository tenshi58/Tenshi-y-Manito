#inclide<iostream>
#include<stdlib.h>


using namespace std;
 
class pedido {
	private:
		int numPedido;
		string FechaPedido;
		int idCliente;
	public:
	pedido(){	}	 
	
	int getpedido(){return numPedido;}
	void setpedido(int ped){ped=pedido;}
	
	string getfecha(){return FechaPedido;}
	void setfecha(string fecha){fecha= FechaPedido;}
	
	int getcliente(){return idCliente;}
	void setcliente(cliente){cliente=idCliente;}
	
	void quitarproducto(int num){
		switch(num){
		 case 1:{
		 	cout<<"Numero de pedido ->"<<numPedido=0<<endl;
		 	cout<<"Fecha pedido ->"FechaPedido=nada<<endl; 
		 	cout<<"indentificacion del cliente ->"idCliente<<endl;
			break;
		 }
		 case 2:{
		 	cout<<"No se borro nada"<<endl;
			break;
		 }
		}
	}
	void consultarproducto(){
        cout<<"Numero de pedido -> "<<numPedido<<endl;
		cout<<"Fecha pedido -> "<<FechaPedido<<endl;
		cout<<" identificacion del cliente -> "<<idCliente<<endl;
	}	
	};

}

int main(){
	pedido invocar;
	int ped,cliente;
	cout<<"--------------MENU DEL SISTEMa----------------"<<endl;
	cout<<"digite el"
	
	}
	
	
} 
