//Programa que calcula los tres datos restantes con tres datos de un triangulo
//cualquiera, ademas de su area.
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <stdlib.h>

using namespace std;

//Funcion para darle color a los pixeles:
void cambiarcolor(int X){
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),X);
}
int main(){
	//Variable para la sentencia swich
	int k;
	//Varible para el ordenamiento:
	int aux;
	//Varible para facilitar el retorno:
	char var,v1;
	//Variable que siempre usaremos:
	long double pi=3.14159265358979;
	
	//Ciclo de condicionales para que los datos se ingresen correctamente
	//dependiendo del tipo de dato que se ingrese:
	
	do{ 
		cout<<"\n **************** CALCULADORA DE TRIANGULOS ****************"<<endl;
	   cout<<"\n  Para triangulos de la forma:"<<endl;
	   int x=219;
	
	   //Dibujo de referencia para la interfaz xdd
	   cambiarcolor(8);
	   cout<<"\n\t\t\t"<<char(x);
	   cambiarcolor(7);
	   cout<<char(x);
	   cambiarcolor(8);
 	   cout<<char(x);
	
	   cambiarcolor(8);
	   cout<<"\n\t\t       "<<char(x);
	   cambiarcolor(7);
	   cout<<char(x);
	   cambiarcolor(7);
	   cout<<"  "<<char(x);
	   cambiarcolor(8);
	   cout<<char(x);
	
	   cambiarcolor(8);
	   cout<<"\n\t\t      "<<char(x);
	   cambiarcolor(7);
	   cout<<char(x);
	   cambiarcolor(7);
	   cout<<"     "<<char(x);
	   cambiarcolor(8);
	   cout<<char(x);
	
	   cambiarcolor(8);
	   cout<<"\n\t\t     "<<char(x);
	   cambiarcolor(7);
	   cout<<char(x);
	   cambiarcolor(7);
	   cout<<" GAMMA  "<<char(x);
	   cambiarcolor(8);
	   cout<<char(x);
	
	   cambiarcolor(8);
	   cout<<"\n\t\t ";
	   cambiarcolor(7);
	   cout<<"A  ";
	   cambiarcolor(8);
	   cout<<char(x);
	   cambiarcolor(7);
	   cout<<char(x);
	   cambiarcolor(7);
	   cout<<"           "<<char(x);
	   cambiarcolor(8);
	   cout<<char(x);
	   cambiarcolor(7);
	   cout<<"   B";
	
	   cambiarcolor(8);
	   cout<<"\n\t\t   "<<char(x);
	   cambiarcolor(7);
	   cout<<char(x);
	   cambiarcolor(7);
	   cout<<"              "<<char(x);
	   cambiarcolor(8);
	   cout<<char(x);
	
	   cambiarcolor(8);
	   cout<<"\n\t\t  "<<char(x);
	   cambiarcolor(7);
	   cout<<char(x);
	   cambiarcolor(7);
	   cout<<"                 "<<char(x);
	   cambiarcolor(8);
	   cout<<char(x);
	
	   cambiarcolor(8);
	   cout<<"\n\t\t "<<char(x);
	   cambiarcolor(7);
	   cout<<char(x);
	   cout<<" BETA";
	   cambiarcolor(7);
	   cout<<"\t ALPHA "<<char(x);
	   cambiarcolor(8);
	   cout<<char(x);
	
	   cambiarcolor(8);
	   cout<<"\n\t\t"<<char(x);
	   cambiarcolor(7);
	   cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	   cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	   cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	   cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	   cambiarcolor(8);
	   cout<<char(x);
	
	   cambiarcolor(7);
	   cout<<"\n\t\t\t    C"<<endl;
	
	   cout<<"  Dependiendo a la figura de arriba, que datos contiene su triangulo?"<<endl<<endl;
	   cout<<"\t\t 1. TRES LADOS (Ej. A,B,C)."<<endl;
	   cout<<"\t\t 2. DOS LADOS Y EL ANGULO ENTRE ELLOS (Ej. A,B,GAMMA)."<<endl;
	   cout<<"\t\t 3. DOS LADOS Y UN ANGULO OPUESTO DE LOS MISMOS (Ej. A,B,ALPHA)"<<endl;
	   cout<<"\t\t 4. UN LADO, SU ANGULO OPUESTO Y UNO DE SUS ADYACENTES.(Ej. A,ALPHA,GAMMA)"<<endl;
	   cout<<"\t\t 5. UN LADO Y SUS DOS ANGULOS ADYACENTES (Ej. A,BETA,GAMMA)."<<endl;
	   cout<<"\t\t 6. SALIR"<<endl;
	   cout<<"\n  Digite un numero de acuerdo a las sentencias: ";
	   cin>>k;
	
	   system("cls");
	   
	   switch(k) {
	   	case 1 ://1Varibles para los datos:
	              float a,b,c,L[3],L1[3],alpha,beta,gamma;
	              //1Variables para los calculos:
	              double A,B,C,AF,BF,CF;
			
			   do{
		      	cout<<"\n\tIngrese los valores de: "<<endl;
			      cout<<"\t\tA= ";cin>>L[0];
	            cout<<"\t\tB= ";cin>>L[1];
	            cout<<"\t\tC= ";cin>>L[2];
			      if(L[0]>0,L[1]>0,L[2]>0) {
      
                  //Guardamos los datos en un nuevo vector
	            for(int i=0;i<3;i++) {
		            L1[i]=L[i];
               }
               //Guardamos los datos en variables para facilitar los calculos:
               a=L1[0];
               b=L1[1];
               c=L1[2];
               //Realizamos el ordenamiento de mayor a menor para la primera condicional:
	            for(int i=0;i<3;++i){
		            for(int j=0;j<3;++j){
			            if(L[j]>L[j+1]){
				            aux=L[j];
				            L[j]=L[j+1];
				            L[j+1]=aux;
			            }	
		            }	
	            }
	            //Primera condicion de lados de un triangulo:
	            if(L[3]<L[2]+L[1]) {
		            cout<<"\n  Los angulos del triangulo son: "<<endl<<endl;
		            A=(pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c);
		            alpha=alpha+acos(A);
		            cout<<"\tALPHA= "<<(alpha*180)/pi<<endl;
		            B=(pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c);
		            beta=beta+acos(B);
		            cout<<"\tBETA= "<<(beta*180)/pi<<endl;
		            C=(pow(b,2)+pow(a,2)-pow(c,2))/(2*b*a);
		            gamma=gamma+acos(C);
		            cout<<"\tGAMMA= "<<(gamma*180)/pi<<endl;
		            
		            //Dibujo de referencia para la interfaz xdd
	               cambiarcolor(8);
	               cout<<"\n\t\t\t"<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(8);
 	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t       "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"  "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t      "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"     "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t     "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<" GAMMA= "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t        ";
	               cambiarcolor(7);
	               cout<<"A="<<a<<" ";
	               cambiarcolor(8);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout.precision(4);
	               cout<<"   "<<(gamma*180)/pi<<"   "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<" B="<<b;
	
	               cambiarcolor(8);
	               cout<<"\n\t\t   "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"              "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t  "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"                 "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	               
	               cambiarcolor(8);
	               cout<<"\n\t\t "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"                   "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	               
	               cambiarcolor(8);
	               cout<<"\n\t\t"<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"                      "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t       "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cout<<"BETA="<<(beta*180)/pi<<"   ";
	               cambiarcolor(7);
	               cout<<"ALPHA= "<<(alpha*180)/pi<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t      "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(7);
	               cout<<"\n\t\t\t   C= "<<c<<endl<<endl;
	               
	               cout<<"\t    (Figura de referencia, no a escala)"<<endl<<endl;
		            
			         //Preguntamos al usuarios si desea seguir usando el programa
						cout<<"\n\t\t?Desea regresar al menu?"<<endl;
	               cout<<"  Escriba Si (s) o presione otra tecla en caso contrario"<<endl;
	               cin>>var;
	               system("cls");	
						break;		
               }else{
	            cout<<"\n\tLa suma de dos lados debe ser mayor a la longitud del tercer lado"<<endl;
	            cout<<"\tRevise sus datos y vuelva a ingresarlos por favor."<<endl<<endl;
	            cout<<"\t\t?Desea ingresar nuevos datos?"<<endl;
	            cout<<"\tIngrese Si (s) o presione otra tecla en caso contrario"<<endl;
	            cin>>v1;
	            system("cls");
               }
            }
			}while(v1=='s');
			break;
		case 2://2Varibles para los datos:
	          float a4,b4,c4,alpha4,beta4,gamma4;
	          //2Variables para los calculos:
	          double A4,B4,C4,AF4,BF4,CF4;
	          do{
	            cout<<"\n\tIngrese los valores de: "<<endl;
		         cout<<"\t\tA= "; cin>>a4;
		         cout<<"\t\tB= "; cin>>b4;
		         cout<<"\t\tGAMMA= "; cin>>gamma4;
		         
		         if(a4>0,b4>0,gamma4>0){
		         	//Despejamos c del teorema de cosenos:
		         	c4=sqrt(pow(a4,2)+pow(b4,2)-(2*a4*b4*cos((gamma4*pi)/180)));
		         	cout<<"\n\tEl lado y los otros dos angulos del triangulo son: "<<endl;
                  cout<<"\t\tC= "<<c4<<"[u]"<<endl;
                  //Para los angulos usamos el teorema de senos:
                  A4=sin((gamma4*pi)/180);
                  AF4=(asin((a4*A4)/c4)*180)/pi;
                  alpha4=alpha4+AF4;
                  cout<<"\t\tALPHA= "<<alpha4<<"[grados]"<<endl;
                  beta4=beta4+180-alpha4-gamma4;
                  cout<<"\t\tBETA= "<<beta4<<"[grados]"<<endl<<endl;
                  
                  //Dibujo de referencia para la interfaz xdd
	               cambiarcolor(8);
	               cout<<"\n\t\t\t"<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(8);
 	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t       "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"  "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t      "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"     "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t     "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<" GAMMA= "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t        ";
	               cambiarcolor(7);
	               cout<<"A="<<a4<<" ";
	               cambiarcolor(8);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout.precision(4);
	               cout<<"    "<<gamma4<<"     "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<" B="<<b4;
	
	               cambiarcolor(8);
	               cout<<"\n\t\t   "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"              "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t  "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"                 "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	               
	               cambiarcolor(8);
	               cout<<"\n\t\t "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"                   "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	               
	               cambiarcolor(8);
	               cout<<"\n\t\t"<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"                      "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t       "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cout<<"BETA="<<beta4<<"   ";
	               cambiarcolor(7);
	               cout<<"ALPHA= "<<alpha4<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t      "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(7);
	               cout<<"\n\t\t\t   C= "<<c4<<endl<<endl;
	               
	               cout<<"\t    (Figura de referencia, no a escala)"<<endl<<endl;
                  
                  //Preguntamos al usuario si desea seguir usando el programa
						cout<<"\t\t?Desea regresar al menu?"<<endl;
	               cout<<"  Escriba Si (s) o presione otra tecla en caso contrario"<<endl;
	               cin>>var;
	               system("cls");
						break;
				   }else {
				   	cout<<"\tVerifique que los valores ingresados seran mayores a cero, que"<<endl;
                  cout<<"\t el angulo sea menor a 180 grados y sus datos tengan coherencia "<<endl;
						cout<<"\t con su triangulo."<<endl<<endl;
                  cout<<"\t\t?Desea ingresar nuevos datos?"<<endl;
	               cout<<" Escriba Si (s) o presione otra tecla en caso contrario"<<endl;
	               cin>>v1;
	               system("cls");
					}
				 }while(v1=='s');
				 break;
		case 3://2Varibles para los datos:
	          float a2,b2,c2,alpha2,beta2,gamma2;
	          //2Variables para la ecuacion de segundo grado:
	          long double m2,n2,D2;
	          double x2;
	          //2Variables para los calculos:
	          double A2,B2,C2,AF2,BF2,CF2;
	   	
	   	   do{
		      	cout<<"\n\tIngrese los valores de: "<<endl;
		         cout<<"\t\tA= "; cin>>a2;
		         cout<<"\t\tB= "; cin>>b2;
		         cout<<"\t\tALPHA= "; cin>>alpha2;
		         
		      	if(a2>0,b2>0,alpha2>0) {
                  //Resolvemos una ecuacion de segundo grado para hallar el valor de c:
                  m2=-2*b2*cos((alpha2*pi)/180);
                  n2=pow(b2,2)-pow(a2,2);
                  D2=pow(m2,2)-4*n2;
	               if(D2>=0) {
	                  //Solo tomamos la solucion positiva:
		               x2=(-m2+sqrt(D2))/(2);
							c2=c2+x2;
                     cout<<"\n\tEl lado y los otros dos angulos del triangulo son: "<<endl;
                     cout<<"\t\tC= "<<c2<<"[u]"<<endl;
                     //Calculo para los angulos por teorema de senos:
                     B2=sin((alpha2*pi)/180);
                     BF2=(asin((b2*B2)/a2)*180)/pi;
                     beta2=beta2+BF2;
                     cout<<"\t\tBETA= "<<beta2<<"[grados]"<<endl;
                     gamma2=gamma2+180-alpha2-beta2;
                     cout<<"\t\tGAMMA= "<<gamma2<<"[grados]"<<endl<<endl;
                     
                     //Dibujo de referencia para la interfaz xdd
	               cambiarcolor(8);
	               cout<<"\n\t\t\t"<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(8);
 	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t       "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"  "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t      "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"     "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t     "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<" GAMMA= "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t        ";
	               cambiarcolor(7);
	               cout<<"A="<<a2<<" ";
	               cambiarcolor(8);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout.precision(4);
	               cout<<"    "<<gamma2<<"     "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<" B="<<b2;
	
	               cambiarcolor(8);
	               cout<<"\n\t\t   "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"              "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t  "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"                 "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	               
	               cambiarcolor(8);
	               cout<<"\n\t\t "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"                   "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	               
	               cambiarcolor(8);
	               cout<<"\n\t\t"<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"                      "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t       "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cout<<"BETA="<<beta2<<"   ";
	               cambiarcolor(7);
	               cout<<"ALPHA= "<<alpha2<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t      "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(7);
	               cout<<"\n\t\t\t   C= "<<c2<<endl<<endl;
	               
	               cout<<"\t    (Figura de referencia, no a escala)"<<endl<<endl;
                     
                     //Preguntamos al usuario si desea seguir usando el programa
						   cout<<"\t\t?Desea regresar al menu?"<<endl;
	                  cout<<"  Escriba Si (s) o presione otra tecla en caso contrario"<<endl;
	                  cin>>var;
	                  system("cls");
						   break;
                  }else{
                     cout<<"  ***Lado A insuficiente para formar un triangulo**"<<endl;
                     cout<<"\t\t?Desea ingresar nuevos datos?"<<endl;
	                  cout<<" Escriba Si (s) o presione otra tecla en caso contrario"<<endl;
	                  cin>>v1;
	                  system("cls");
		               }
				   }else{
                     cout<<"\tVerifique que los valores ingresados seran mayores a cero, que"<<endl;
                     cout<<"\t el angulo sea menor a 180 grados y sus datos tengan coherencia "<<endl;
							cout<<"\t con su triangulo."<<endl<<endl;
                     cout<<"\t\t?Desea ingresar nuevos datos?"<<endl;
	                  cout<<" Escriba Si (s) o presione otra tecla en caso contrario"<<endl;
	                  cin>>v1;
	                  system("cls");
		               }
			   }while(v1=='s');
			   break;
	default: break;
}
switch(k) {
	case 4://3Varibles para los datos:
	         float a3,b3,c3,alpha3,beta3,gamma3;
	         //3Variables para la ecuacion de segundo grado:
	         long double m3,n3,D3;
	         double x3;
	         //3Variables para los calculos:
	         double A3,B3,C3,AF3,BF3,CF3;
	   	
	   	   do{
		      	cout<<"\n\tIngrese los valores de: "<<endl;
		         cout<<"\t\tA= "; cin>>a3;
		         cout<<"\t\tALPHA= "; cin>>alpha3;
		         cout<<"\t\tGAMMA= "; cin>>gamma3;
		         
		      	if(a3>0,alpha3>0,gamma3>0) {
					   if(alpha3+gamma3<170){
					   	//Por teorema de senos:
						   c3=(a3*sin((gamma3*pi)/180))/sin((alpha3*pi)/180);
						   //por propiedad de angulos:
						   beta3=180-alpha3-gamma3;
						   //Despejamos b del teorema de cosenos:
		         	   b3=sqrt(pow(a3,2)+pow(c3,2)-(2*a3*c3*cos((beta3*pi)/180)));
		         	   cout<<"\n\tLos otros dos lados y el angulo del triangulo son: "<<endl;
                     cout<<"\t\tB= "<<b3<<"[u]"<<endl;
							cout<<"\t\tC= "<<c3<<"[u]"<<endl;
							cout<<"\t\tBETA= "<<beta3<<"[grados]"<<endl;
							
						//Dibujo de referencia para la interfaz xdd
	               cambiarcolor(8);
	               cout<<"\n\t\t\t"<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(8);
 	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t       "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"  "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t      "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"     "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t     "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<" GAMMA= "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t        ";
	               cambiarcolor(7);
	               cout<<"A="<<a3<<" ";
	               cambiarcolor(8);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout.precision(4);
	               cout<<"    "<<gamma3<<"     "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<" B="<<b3;
	
	               cambiarcolor(8);
	               cout<<"\n\t\t   "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"              "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t  "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"                 "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	               
	               cambiarcolor(8);
	               cout<<"\n\t\t "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"                   "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	               
	               cambiarcolor(8);
	               cout<<"\n\t\t"<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"                      "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t       "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cout<<" BETA="<<beta3<<"       ";
	               cambiarcolor(7);
	               cout<<"ALPHA= "<<alpha3<<" "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t      "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(7);
	               cout<<"\n\t\t\t   C= "<<c3<<endl<<endl;
	               
	               cout<<"\t    (Figura de referencia, no a escala)"<<endl<<endl;
	               
						//Preguntamos al usuario si desea seguir usando el programa
						cout<<"\t\t?Desea regresar al menu?"<<endl;
	               cout<<"  Escriba Si (s) o presione otra tecla en caso contrario"<<endl;
	               cin>>var;
	               system("cls");
						break;
							
					   }else{
					   	cout<<"  Los angulos son demasiado grandes para formar un triangulo,"<<endl;
					   	cout<<"  revise sus datos y vuelva a ingresalos por favor."<<endl;
					   	cout<<"\t\t?Desea ingresar nuevos datos?"<<endl;
	                  cout<<"  Escriba Si (s) o presione otra tecla en caso contrario"<<endl;
	                  cin>>v1;
	                  system("cls");
		            }
					}else{
						cout<<"\tVerifique que los valores ingresados seran mayores a cero, que"<<endl;
                  cout<<"\t el angulo sea menor a 180 grados y sus datos tengan coherencia "<<endl;
						cout<<"\t con su triangulo."<<endl<<endl;
                  cout<<"\t\t?Desea ingresar nuevos datos?"<<endl;
	               cout<<" Escriba Si (s) o presione otra tecla en caso contrario"<<endl;
	               cin>>v1;
	               system("cls");
		            }
					}while(v1=='s');
					break;
	case 5://3Varibles para los datos:
	         float a5,b5,c5,alpha5,beta5,gamma5;
	         //3Variables para la ecuacion de segundo grado:
	         long double m5,n5,D5;
	         double x5;
	         //3Variables para los calculos:
	         double A5,B5,C5,AF5,BF5,CF5;
	   	
	   	   do{
		      	cout<<"\n\tIngrese los valores de: "<<endl;
		         cout<<"\t\tA= "; cin>>a5;
		         cout<<"\t\tBETA= "; cin>>beta5;
		         cout<<"\t\tGAMMA= "; cin>>gamma5;
		         
		      	if(a5>0,beta5>0,gamma5>0) {
					   if(alpha3+gamma3<170){
					   	//por propiedad de angulos:
						   alpha5=180-beta5-gamma5;
					   	//Por teorema de senos:
						   c5=(a5*sin((gamma5*pi)/180))/sin((alpha5*pi)/180);
						   //Despejamos b del teorema de cosenos:
		         	   b5=sqrt(pow(a5,2)+pow(c5,2)-(2*a5*c5*cos((beta5*pi)/180)));
		         	   cout<<"\n\tLos otros dos lados y el angulo del triangulo son: "<<endl;
                     cout<<"\t\tB= "<<b5<<"[u]"<<endl;
							cout<<"\t\tC= "<<c5<<"[u]"<<endl;
							cout<<"\t\tALPHA= "<<alpha5<<"[grados]"<<endl;
							
						//Dibujo de referencia para la interfaz xdd
	               cambiarcolor(8);
	               cout<<"\n\t\t\t"<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(8);
 	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t       "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"  "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t      "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"     "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t     "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<" GAMMA= "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t        ";
	               cambiarcolor(7);
	               cout<<"A="<<a5<<" ";
	               cambiarcolor(8);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout.precision(4);
	               cout<<"    "<<gamma5<<"     "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<" B="<<b5;
	
	               cambiarcolor(8);
	               cout<<"\n\t\t   "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"              "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t\t  "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"                 "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	               
	               cambiarcolor(8);
	               cout<<"\n\t\t "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"                   "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	               
	               cambiarcolor(8);
	               cout<<"\n\t\t"<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cambiarcolor(7);
	               cout<<"                      "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t       "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x);
	               cout<<" BETA="<<beta5<<"       ";
	               cambiarcolor(7);
	               cout<<"ALPHA= "<<alpha5<<" "<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(8);
	               cout<<"\n\t      "<<char(x);
	               cambiarcolor(7);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cout<<char(x)<<char(x)<<char(x)<<char(x)<<char(x)<<char(x);
	               cambiarcolor(8);
	               cout<<char(x);
	
	               cambiarcolor(7);
	               cout<<"\n\t\t\t   C= "<<c5<<endl<<endl;
	               
	               cout<<"\t    (Figura de referencia, no a escala)"<<endl<<endl;
	               
						//Preguntamos al usuario si desea seguir usando el programa
						cout<<"\t\t?Desea regresar al menu?"<<endl;
	               cout<<"  Escriba Si (s) o presione otra tecla en caso contrario"<<endl;
	               cin>>var;
	               system("cls");
						break;
							
					   }else{
					   	cout<<"  Los angulos son demasiado grandes para formar un triangulo,"<<endl;
					   	cout<<"  revise sus datos y vuelva a ingresalos por favor."<<endl;
					   	cout<<"\t\t?Desea ingresar nuevos datos?"<<endl;
	                  cout<<"  Escriba Si (s) o presione otra tecla en caso contrario"<<endl;
	                  cin>>v1;
	                  system("cls");
		            }
					}else{
						cout<<"\tVerifique que los valores ingresados seran mayores a cero, que"<<endl;
                  cout<<"\t el angulo sea menor a 180 grados y sus datos tengan coherencia "<<endl;
						cout<<"\t con su triangulo."<<endl<<endl;
                  cout<<"\t\t?Desea ingresar nuevos datos?"<<endl;
	               cout<<" Escriba Si (s) o presione otra tecla en caso contrario"<<endl;
	               cin>>v1;
	               system("cls");
		            }
					}while(v1=='s');
					break;	
   case 6: cout<<"\n\t\t Gracias! Hasta pronto!"<<endl; break;	      	
	default:break;
}

}while(var=='s',k!=6);
}

