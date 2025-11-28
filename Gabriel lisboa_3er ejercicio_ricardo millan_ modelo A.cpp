#include <iostream>
#include <stdio.h>  
#include <windows.h>  

using namespace std;

 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
  }


void DibujaNueve (int x, int y, int n){
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==0|| i== n-1 || i==n/2|| (j== n-1)||(j==0 && i <= n/2)){
				gotoxy (x+j, y+i);
				cout << "*";
			}
		}	
	}
}
void DibujaOcho (int x, int y, int n){
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==0|| i== n-1 || i==n/2|| (j== n-1)||(j==0)){
				gotoxy (x+j, y+i);
				cout << "*";
			}
		}	
	}
}
void DibujaSiete (int x, int y, int n){
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==0|| (j== n-1)||(j==0 && i <= n/2)){
				gotoxy (x+j, y+i);
				cout << "*";
			}
		}	
	}
}
void DibujaSeis (int x, int y, int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==0|| i== n/2 || i== n-1 || (j== n-1 && i >= n/2)||(j==0)){
				gotoxy (x+j, y+i);
				cout << "*";
			}
		}	
	}
}
void DibujaCinco (int x, int y, int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==0|| i== n/2 || i== n-1 || (j== n-1 && i >= n/2)||(j==0 && i <= n/2)){
				gotoxy (x+j, y+i);
				cout << "*";
			}
		}	
	}
}
void DibujaCuatro (int x, int y, int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if((j==0 && i<= n/2)|| i== n/2 || j== n-1){
				gotoxy (x+j, y+i);
				cout << "*";
			}
		}	
	}
}
void DibujaTres (int x, int y, int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==0|| i== n/2 || i== n-1 || (j== n-1 )){
				gotoxy (x+j, y+i);
				cout << "*";
			}
		}	
	}
}
void DibujaDos (int x, int y, int n){
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==0||i == n-1 || i == n/2 || (j==n-1 && i<= n/2) || (j==0 && i>= n/2)){
				gotoxy (x+j, y+i);
				cout << "*";
			}
		}	
	}
}
void DibujaUno (int x, int y, int n){
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(j==n/2 || i == n-1){
				gotoxy (x+j, y+i);
				cout << "*";
			}
		}	
	}
}
void DibujaCero (int x, int y, int n){
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==0|| i == n-1 || j == 0 || j == n-1){
				gotoxy (x+j, y+i);
				cout << "*";
			}
		}	
	}
}

bool separador (char x){
	
		if (x !='0' || x !='1' || x !='2' ||x !='3' ||x !='4' ||x !='5' ||x !='6' ||x !='7' ||x !='8' ||x !='9'){
			return true;
		}
		else return false;
}

string solicitarNumero(){
	
	string numero;
	char divisor;
	
	cout<<"Ingrese el numero a graficar"<<endl;
	cin>>numero;
	
	if (numero.length()>4){
		while (numero.length()>4 || numero[0]=='-'  ){
			for (int i=0; i <numero.length(); i++){
				divisor = numero[i];
				if (separador(divisor)){
					cout << "numero invalido intente de nuevo" << endl;
					cin>>numero;	
				}
			}
		}
	}
	
	return numero;
}

void graficar (string numero, int x, int y,int n){
	
	char digito;
	
	for (int i=0; i<numero.length(); i++){
		
		digito = numero[i];
		
		switch (digito){
		
		case '0':
			DibujaCero (x,y,n);
		break;
		
		case '1':
			DibujaUno (x,y,n);
		break;
		
		case '2':
			DibujaDos (x,y,n);
		break;
		
		case '3':
			DibujaTres (x,y,n);
		break;
		
		case '4':
			DibujaCuatro (x,y,n);
		break;
		
		case '5':
			DibujaCinco (x,y,n);
		break;
		
		case '6':
			DibujaSeis (x,y,n);
		break;
		
		case '7':
			DibujaSiete (x,y,n);
		break;
		
		case '8':
			DibujaOcho (x,y,n);
		break;
		
		case '9':
			DibujaNueve (x,y,n);
		break;
	}
	x = x + n +2;

	}
	
}

int main ( ){
	do{
	system("cls");
	string numero;	
	numero = solicitarNumero();
	int x=5,y=5,n=5;
	graficar (numero,x,y,n);
	cout << endl;
	system("pause");
	system("cls");
	int salida = 0;
	cout <<  "quieres salir" << endl<< "utilize su valor en numero"<< endl;
	cout <<  "1) si" << endl;
	cout <<  "2) no" << endl;
	cin >> salida;
	
	if (salida == 1){
		return 0;
	}
	else if (salida != 1 && salida != 2){
		while (salida != 1 && salida != 2 )	{
		
			system("cls");
			cout <<  "valor invalido intente de nuevo" << endl;
			cout <<  "quieres salir" << endl<< "utilize su valor en numero"<< endl;
			cout <<  "1) si" << endl;
			cout <<  "2) no" << endl;
			cin >> salida;
			}
		}
	}while(true);
}
