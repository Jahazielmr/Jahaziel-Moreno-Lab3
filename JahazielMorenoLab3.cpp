#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdlib>

using namespace std;

int main(){

int Binario(int n);
int sumaDigitos(int n);
void pedirDatos();
int **puntero_matriz,nFilas,nCol;
void mostrarMatriz(int **, int, int);

   
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
                                //Segundo ejercicio matriz recorsiva con punteros
					
				pedirDatos();
				mostrarMatriz(puntero_matriz, nFilas,nCol);
        			for(int i=0;i<nFilas;i++){
           				delete[] puntero_matriz[i];

        			}
        			delete[];
				
                              	 	
   			       break;

                          }
                }
                cout<<"Desea continuar? S o N"<<endl;
                cin >> resp;
        }

        cout<<"Bye";
   
   return 0;
} 

void pedirDatos(){
	cout<<"Digite el numero de filas: ";	
	cin<<nFilas;
  	cout<<"Digite el numero de columnas: ";
  	cin<<nCol;

  	puntero_matriz = new int*[nFilas];
  		for(int=0;i<nFilas;i++){
        		puntero_matriz[i]= new int[nCol];
  		}
  		cout<<"\nDigitando elementos de la matriz: ";
	
  	for(int i=0;i<nFilas;i++){
        	for(int j=0;j<nCol;j++){
                	cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
                	cin>>*(*(puntero_matriz+i)+j);
        	}
  	}

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
