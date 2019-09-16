#include <stdlib.h>
#include <iostream>

using namespace std;

class medico {
  private:
int numRegistro;
string nombre;
string turno;

  public:
medico(){}  // constructor de la clase, crea objeto vacio
  // ------- el siguiente metodo permite visualizar los datos de la clase
void verMedico(){
cout << "LOS DATOS DEL MEDICO: " << endl;
cout << "Numero de Registro Medico:  "<< numRegistro   << endl;
cout << "Nombre del médico: " << nombre<< endl;
cout << "Turno Actual : " << turno<< endl;
}
  // ------- los siguientes metodos permiten acceder a los datos de la clase que son privados
void setNumRegistro(int num){  numRegistro = num; }
int  getNumRegistro(){ return numRegistro; }
void setNombre(string nomb){  nombre=nomb; }
string  getNombre(){ return nombre; }
void setTurno(string turn){  turno=turn; }
string  getTurno(){ return turno; }


};


class espeClinica : public medico {
   private:
string especialidad;
bool cirugia;
   public:
       espeClinica(){}// constructor de la clase  vacio
  espeClinica(string nom ){
setNombre(nom);}    

 
  //  --------------  para visualizar los datos de la clase, usa el metodo de la clase padre para ver los datos que contiene
  void verEspClin(){
verMedico();
cout << " la especialidad del médico es :" << especialidad << endl;
if (cirugia == true)
cout << " Este médico SI puede hacer cirugia" << endl;
else
cout << " Este médico NO es cirujano" << endl;
}
//  -------------  parapermitir trabajar con los datos privados
void setEspecialidad(string esp){  especialidad = esp; }
string  getEspecialidad(){ return especialidad; }
void setCirugia(bool cirujano){cirugia=cirujano;}
bool getCirugia(){return cirugia;}

};

class  espeLab: public medico {
private:
string tipo;
string laboratorio;
public:
espeLab (){}   // constructor de la clase

//---------------para visualizar los datos de un medico con especialidad laboratorio
void verEspCli(){
verMedico();
cout << " el tipo de especialista médico es :  " << tipo << endl;
cout << " El laboratorio para el que trabaja es: " << laboratorio << endl;
}

// ---------  para acceder a los datos privados
void setTipo(string tip){  tipo = tip; }
string  getTipo(){ return tipo; }
void setLaboratorio(string lab){laboratorio=lab;}
string getLaboratorio(){return laboratorio;}
};




int main(){
int numero, opcion =0;
string nom,especial, turn,tip,lab ;
char c;
bool cirujano;
espeClinica medico1;
espeLab medico2;

while (opcion !=99)
{
    cout << " ----------  MENU PRINCIPAL ----------------" << endl;
cout << " Para registrar medico clinico Digite (1))" << endl;
cout << " Para registrar medico de laboratorio digite (2)" << endl;
cout << " Para consultar los datos del médico clínico digite (3)" << endl;
cout << " Para consultar los datos del medico de laboratorio digite (4)" << endl;
cout << endl;
cout << " Para salir digite (99)" << endl;

cout << " Digite la opcion: --> ";  cin >> opcion;
system("cls");
switch (opcion){
case 1: // si escoge crear un medico clinico:
{
            cout << "\n Digite el nombre del medico: --> ";  cin >> nom;
cout << "\n Digite el numero de registro medico: --> ";  cin >> numero;
cout << "\n Digite la especialidad del medico: --> ";  cin >> especial;
cout << "\n Digite el turno del medico: --> ";  cin >> turn;
cout << "\n El médico puede hacer cirugias? Digite( S / N): --> ";  cin >> c;
if (c=='s')
   cirujano=true;
else
cirujano= false;

//medico1=espeClinica(nom);
medico1.setNombre(nom);
medico1.setNumRegistro(numero);
medico1.setEspecialidad(especial);
medico1.setTurno(turn);
medico1.setCirugia(cirujano);
system("pause");
break;
}
case 2:
{}
case 3:
{
system("cls");
medico1.verEspClin();
system("pause");
break;
}
case 4:
{
}
}
 }

return 0;
}
