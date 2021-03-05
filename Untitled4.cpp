#include<iostream>


using namespace std;
struct Cons{
	int *codigo;
	string *nombre;
	int **pm_notas;
};

int main(){
int fila=0,columna=0;
Cons cons;


cout<<"Cuantos Estudiantes Desea Ingresar: ";
cin>>fila;	
cout<<"Cuantas Notas Desea Ingresar: ";
cin>>columna;	
cons.pm_notas = new  int *[fila];
cons.codigo =new int[fila];
cons.nombre = new string[fila];


for (int i=0;i<fila;i++){
cons.pm_notas[i] = new int[columna];
}
cout<<"--------------Ingrese Notas--------------"<<endl;
string nombre;
for (int i=0;i<fila;i++){
	cout<<"codigo:";
	cin>>cons.codigo[i];
	cin.ignore();
	cout<<"nombre:";
	getline(cin,cons.nombre[i]);

	
for (int ii=0;ii<columna;ii++){
	
	cout<<"ingrese Nota["<<ii+1<<"]: ";
	cin>>*(*(cons.pm_notas+i)+ii);
	}
	cout<<"__________________________________________"<<endl;
}
	cout<<"--------------Mostrar Notas--------------"<<endl;
for (int i=0;i<fila;i++){
	cout<<"codigo: "<<cons.codigo[i]<< " Estudiante: "<<cons.nombre[i]<<"."<<endl;
for (int ii=0;ii<columna;ii++){
	cout<<"Nota ["<<ii+1<<"] : "<<*(*(cons.pm_notas+i)+ii)<<endl;
	}
	cout<<"_________________________________"<<endl;
}
// Liberar el espacio reservado en memoria
for (int i=0;i<fila;i++){
	delete [] cons.pm_notas[i];
	
}

delete [] cons.pm_notas;
delete [] cons.codigo;
delete [] cons.nombre;
system("PAUSE");
	return 0;
	
	
}
