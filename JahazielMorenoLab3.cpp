#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdlib>
#include<stdlib.h>

//LAB3 JAHAZIEL

using namespace std;


int main(){
int **puntero_matriz,nFilas,nCol;
void mostrarMatrizRecursiva(int **, int, int);
int Binario(int n);
int sumaDigitos(int n);
               
char resp ='s';
        int option;
        while(resp=='s'||resp=='S'){
                cout <<"Menu"<<endl;
                cout <<"1-Ejercicio 1"<<endl;
                cout <<"2-Ejercicio 2"<<endl;
                cin>> option;
                switch (option){
                        case 1:{
                                //Primer Ejercicio Numero malvado;
				int contador=0;
				int n=0;
				int binario=0;
				cout<<"Ingrese hasta que n quiere que aparescan sus numeros malvados"<<endl;	
				cin >> n;				
					
				for(int i=0;i<n;i++){
					
					binario =Binario(i);
					if(sumaDigitos(binario)%2==0)	{
						cout<<"El numero: "<<i<<" Es malvado";
						cout<<i<<"="<<binario<<endl;
						
					}else{
						cout<<"El numero: "<<i<<" No es malvado"<<endl;
					}	
  				    	
				}	
				
								                               
                        break;
                        }

                        case 2:{
                                //Segundo ejercicio matriz recursiva con punteros
				
				int n;
				cout<<"Digite el numero de matriz n*n: ";
  				cin>>n;
				int matriz [n][n];
				int matriz2[n][n];
				int columna = n-1;
				

				//Creando e imprimiendo matriz 1
  				cout<<"\nDigitando elementos de la matriz: ";
				int nDigitado;
				
				//Rellenando matriz 2;
				
  				for(int i=0;i<n;i++){
        				for(int j=0;j<n;j++){
                				cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
						cin>>nDigitado;
                				matriz[i][j]=nDigitado;
					}
				}
			
				cout<<"Matriz Original"<<endl;
				cout<<endl;
				
				//Imprimiendo matriz 2;
				
				for(int i=0;i<n;i++){
                                        for(int j=0;j<n;j++){
						cout<<matriz[i][j];
					
					}
					cout<<endl;
				}
				
				//Matriz 2

				cout<<endl;	
				cout<<"La matriz dada vuelta es: "<<endl;

				//Rellenando matriz 2
 				for(int i = 0; i < n; i++){
   					for(int j = 0; j < n ; j++){
        					matriz2[j][columna] = matriz[i][j];
					}
 					columna--;
				}
				
				//imprimiendo matriz 2;

				for(int i=0;i<n;i++){
                                        for(int j=0;j<n;j++){
                                                cout<<matriz2[i][j];

                                        }
                                        cout<<endl;
                                }

				
   			       break;

                          }
                }
                cout<<"Desea continuar? S o N"<<endl;
                cin >> resp;
        }

        cout<<"Bye";
  
    
   return 0;
} 







int sumaDigitos(int n){

	if (n==0)
		return 0;
	else
		return ((n%10)+sumaDigitos(n/10));

}


int Binario(int numero){
    
	int binario2;   
    	int dividendo, resto, divisor = 2;
    	string binario = "";
    	dividendo = numero;

    	while(dividendo >= divisor){
   		resto = dividendo % 2;
  			if(resto == 1)
   	   			binario = "1" + binario; 
  			else
   	   			binario = "0" + binario;
   	   			dividendo = dividendo/divisor;
 	}

  	if(dividendo == 1)
   		binario = "1" + binario; 
  	else
   		binario = "0" + binario;
  		   
	 	binario2 = atoi (binario.c_str()); 
	  
	return binario2;

}

//Lab3 Jahaziel BYE


