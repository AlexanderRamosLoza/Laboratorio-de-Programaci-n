//Programa que calcula los valores de x y y de un sistema
//de ecuaciones con dos incognitas
#include<iostream>
#include<stdio.h>
#include<windows.h>

using namespace std;

int main(){
	
	//Variables para los datos
	float a,b,c,d,e,f,A,B,C,D,E,F,x,y;
	
	cout<<"\n\t\t***** CALCULADORA DE ECUACIONES 2X2 *****"<<endl;
	cout<<"\n DOS ECUACIONES CON DOS INCOGNITAS FORMAN UN SISTEMA DE ECUACIONES Y LO"<<endl;
cout<<"  QUE PRETENDEMOS DE ELLAS ES ENCONTRAR SU SOLUCION DE AMBAS VARIABLES"<<endl;
	cout<<"\n Ingrese un sistema de dos ecuaciones con dos incognitas, de la forma:"<<endl<<endl;
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	    SetConsoleTextAttribute(hConsole,2);
		cout<<"\t\t\t     Ax + By = C"<<endl;
	   	SetConsoleTextAttribute(hConsole,4);
		cout<<"\t\t\t     Dx + Ey = F"<<endl;
		SetConsoleTextAttribute(hConsole,7);
	cout<<"\n Digitando los coeficiones tenemos:"<<endl;
	 	 
     SetConsoleTextAttribute(hConsole,2); 
	cout<<"\n INSERTAR PRIMERA ECUACION"<<endl;
	cout<<"\t Inserta el valor de A= ";cin>>a;
	cout<<"\t Inserta el valor de B= ";cin>>b;
	cout<<"\t Inserta la igualdad C= ";cin>>c;
	
     	SetConsoleTextAttribute(hConsole,4);
		cout<<"\n INSERTAR SEGUNDA ECUACION"<<endl;
		cout<<"\t Inserta el valor de D= ";cin>>d;
		cout<<"\t Inserta el valor de E= ";cin>>e;
		cout<<"\t Inserta la igualdad F= ";cin>>f;
	
		//Por el metodo de sustitucion:
      A=-d*a+a*d;
      B=-d*b+a*e;
      C=-d*c+a*f;
      y=C/B;
      x=(c-b*y)/a;
    SetConsoleTextAttribute(hConsole,9);  
      if(B!=0) {
      	cout<<"\n Su solucion o punto de interseccion es:";
			cout<<"\n\t   x= "<<x<<"   y  y= "<<y;
      }else if(B==0 and C==0){
      	cout<<"\n El sistema tiene infinitas soluciones, es decir, se intersecctan"<<endl;
      	cout<<" en varios o en todos los puntos en el plano cartesiano."<<endl;
		}else if(B==0 and C!=0){
			cout<<"\n El sistema no tiene solucion, es decir, que no intersecctan en "<<endl;
      	cout<<" ningun punto en el plano cartesiano. Son rectas paralelas."<<endl;
		}
		SetConsoleTextAttribute(hConsole,7);
		
}
