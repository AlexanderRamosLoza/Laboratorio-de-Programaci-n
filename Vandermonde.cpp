#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cmath>

using namespace std;

float determinante(float V[30][30],int n);


int main(){
	
	int k;
      char var;
	
	do{
	   cout<<"\n ************ CALCULADORA DE VANDERMONDE ************"<<endl;
	   cout<<"\t\t 1. Matriz enesima de Vandermonde."<<endl;
	   cout<<"\t\t 2. Determinante de la matriz de Vandermonde."<<endl;
      cout<<"\t\t 3. Salir"<<endl;
      cout<<" Digite un numero de acuerdo a las premisas anteriores: ";
      cin>>k;
      
		system("cls");
      
      switch(k) {
      	
      	case 2: //Pedir datos
      	   float V[30][30], D[30],det;
      	   int n;
      	   
      	   cout<<"\n La matriz de Vandermonde esta representada de manera general por:"<<endl;
      	   cout<<"\n\t\t     1      1      1      1   ...    1";
      	   cout<<"\n\t\t    a1     a2     a3     a4   ...   an";
      	   cout<<"\n\t\t   a1^2   a2^2   a3^2   a4^2  ...  an^2";
      	   cout<<"\n\t\t   a1^3   a2^3   a3^3   a4^3  ...  an^3";
      	   cout<<"\n\t\t   a1^4   a2^4   a3^4   a4^4  ...  an^4";
      	   cout<<"\n\t\t    ...    ...    ...    ...  ...   ...";
      	   cout<<"\n\t\t  a1^n-1 a2^n-1 a3^n-1 a4^n-1 ... an^n-1";
      	   
			   cout<<"\n\n Digite la dimension de la matriz: "; cin>>n;
		      cout<<"\n Ingrese los valores de a1,a2,a3,...,an, dependiendo a la dimension de su matriz: "<<endl;
		      
		      for(int i=0;i<n;i++) {
		      	cout<<"\t\t a"<<i+1<<"= ";
		      	cin>>D[i];
            }
            system("cls");
            
            cout<<"\n La matriz generada es: "<<endl<<endl;
            
            for(int i=0;i<n;i++){
				   cout<<"\t\t  ";   
               for(int j=0;j<n;j++) {
            	   V[i][j]=pow(D[j],i);
            	   cout<<V[i][j]<<"   ";
               }
               cout<<endl;
            }
            
            
            
            det=determinante(V,n);
				cout<<"\n La determinante de la matriz es: "<<det<<endl;
				
				cout<<"\n\t\t¿Desea regresar al menu?"<<endl;
	         cout<<"  Escriba Si (s) o presione otra tecla en caso contrario"<<endl;
	         cin>>var;
	         system("cls");	
				break;	
				
		case 3: cout<<"Gracias! Hasta pronto!"<<endl;break;
		
				
   default: break;

         }

	
}while(var=='s', k!=3);

}

float determinante(float V[30][30], int n){
	
	float aux,pivote,pivote1,det=1;
	
	for(int i=0;i<n;i++) {
		pivote=V[i][i];
		for(int j=i+1;j<n;j++) {
			pivote1=V[j][i];
			aux=pivote1/pivote;
			for(int k=0;k<n;k++) {
				V[j][k]=V[j][k]-aux*V[i][k];
         }
      } 
   }
   for(int i=0;i<n;i++) {
   	det=det*V[i][i];
}
   /*for(int i=0;i<n;i++) {
   	for(int j=0;j<n;j++) {
   	   cout<<"\t"<<V[i][j]<<" ";
   	}
   	cout<<endl;
   }*/
	
	return det;
}

