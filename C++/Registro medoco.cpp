#include<iostream>
#include<stdlib.h>

using namespace std;

class medico{
	private:
	int registromedico;
	string nombre;
	string turno;
public:
	 medico(){}
	 
	void verMedic(){
	cout<<"nombre ->"<<nombre<<endl;
	cout<<"registro medico ->"<<registromedico<<endl;
	}
	
	int getregistro(){
		return registromedico;
	}
	
	void setregistro(int reg){
		registromedico=reg;
	}
//-------------------------------------------------	
	string getnombre(){
		return nombre; 
	}
	void setnombre(string name){
		nombre=name;
	}
//------------------------------------------------	
	string getturno(){
		return turno;
	}
	void setturno(string tur){
		turno=tur;
	}
//------------------------------------------------
};


class espClinica:public medico{
//-------------------------------
private:
string especialidad;
bool cirugia;
//-------------------------------
public:
	espClinica(){	}
	
	
	void VerEspClinico(){
		verMedic();
		cout<<"especialidad medico"<<especialidad<<endl;
		if(cirugia==true){
			cout<<"si puede hacer la cirugia"<<endl;
		}
		else{
			cout<<"no es un cirujano"<<endl;
		} 
	}
//------------------------------	
string getespecialidad(){
return especialidad;
}
void setespecialidad(string esp){
	especialidad=esp;
}	
//-------------------------------
bool getcirugia(){
	return cirugia;
}
void setcirugia(bool ciru){
	cirugia=ciru;
}
};

class espLaboratorio:public medico{
	private:
		string laboratorio;
		string tipo;
	public:
		espLaboratorio(){}
    	void VerEspLaboratorio(){
		 verMedic();
		cout<<"tipo -->"<<tipo<<endl;
	    cout << "laboratorio del medico-->" << laboratorio<<endl;
		}
		
	string getlaboratorio(){
			return laboratorio;
		}
		void setlaboratorio( string lab){
			laboratorio=lab;
		}
//----------------------------
		string gettipo(){
			return tipo;
		}
		void settipo(string ti){
			tipo=ti;
		}
};


int main(){

espLaboratorio invocacion;
espClinica invocar;
int num=0;


while ( num != 99){
	cout<<"----------Este es su menu------------"<<endl;
	cout<<"digite el numero que quiere para contnuar"<<endl;
	cout<<" 1. registrar Medico clinico"<<endl;
	cout<<" 2. registrar Medico de labortorio"<<endl;
	cout<<" 3. Consultar datos medicos"<<endl;
	cout<<" 4. Consultar datos medicos"<<endl;
    cout<<"Digite la opcion -->";
    cin>>num;

  switch(num){
	case 1: 
	      {
		  cout<<"registrar medico clinico"<<endl;
	      cout<<"Digite el nombre del medico"<<endl;
	      string name;
	      cin>>name;
	      invocar.setnombre(name);
	      cout<<"digite el numero de registro medico"<<endl;
	      int reg;
	      cin>>reg;
	      invocar.setregistro(reg);
	      cout<<"digite la especialidad del medico"<<endl;
	      string esp;
	      cin>>esp;
	      invocar.setespecialidad(esp);
	      cout<<"digite el turno"<<endl;
	      string tur;
	      cin>>tur;
	      invocar.setturno(tur);
	      cout<<" El medico puede hacer cirugias: V o F"<<endl;
	      char dax;
	      cin>>dax;
	      	bool cirujano;
	      if(dax=='v' )
	      cirujano=true;
		  else
		  cirujano=false;
		  invocar.setcirugia(cirujano); 
	      break;
		  }
	case 2:
	     {cout<<"registrar medico de laboratorio"<<endl;
	      cout<<"Digite el laboratorio"<<endl;
	      string lab;
	      cin>>lab;
	      invocacion.setlaboratorio(lab);
	      cout<<"digite el tipo"<<endl;
	      string ti;
	      cin>>ti;
		  invocacion.settipo(ti);
		  break;
		 }
		 
	case 3:	{
		  system("cls");
	      cout<<"consultar medico clinico"<<endl;
	      invocar.VerEspClinico();
	      system("pause");
	      break;
		
	}
	case 4:  {cout<<"consultar medico laboratorio"<<endl;
	      system("cls");
	      invocacion.VerEspLaboratorio();
	      system("pause");
	      break;
		
	}	
	default: cout<<"error"<<endl;
}
}

	
}
