//Programa que calcula lo divicion de un polinomio 
//division de una variante
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    int X,divi;
    printf("Por favor, INTRODUCIR EL GRADO DE LA FUNCION POLINOMINAL: ");
    scanf("%d",&X);
    int A['X'];
    printf("Inserte el numero para cual va a dividir: ");
    scanf("%d",&divi);
    for(int i=0;i<=X;i++){
        int x1=X;
        x1=x1-i;
        
    printf("Inserte el valor de x%d\n",x1);
    scanf("%d",&A[i]);
    }
    int Acumulador=A[0];
    for(int i=1;i<=X;i++){
        int aux = Acumulador*divi;
        Acumulador = A[i]+aux;
    cout <<" Valor : "<< Acumulador; 
    }
    cout <<" Resultado : " <<Acumulador;
    system("pause");
}

using namespace std;
