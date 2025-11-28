#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }
 
void rectangulo(int x,int y, int n){
 	for(int i=0; i<n; i++){
 		for(int j=0; j<n; j++){
 			if(i==0|| i==n-22 || j==0 || j==n-1){
 				gotoxy (x+j, y+i);
 				cout << "#";
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

int main(){
system("pause")	;
system("cls");
rectangulo(0,0,28);
DibujaDos (1,1,5);
DibujaCero(8,1,5);
DibujaCero(15,1,5);
DibujaSiete(22,1,5);
system("pause")	;
system("cls");
}
