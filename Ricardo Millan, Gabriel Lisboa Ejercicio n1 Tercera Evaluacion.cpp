#include <iostream>
#include <windows.h>
#include <conio.h>
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
 
 void OcultarCursor(){
 	HANDLE hCon;
 	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
 	CONSOLE_CURSOR_INFO cci;
 	cci.dwSize = 2;
 	cci.bVisible = FALSE;
 	SetConsoleCursorInfo(hCon, &cci);
 }
 
 void laberinto(int x,int y, int n){
 	for(int i=0; i<n; i++){
 		for(int j=0; j<n; j++){
 			if(i==0|| i == n-1 || j == 0 || j == n-1 || (i == n/3 && j <= n/2) ||(i == (n*2)/3 && j >= n/2)){
 				gotoxy (x+j, y+i);
 				cout << "#";
			 }
		 }
	 }
 }
 
 int main(){
 	int y=7;
 	int x=7;
 	char tecla;
 	OcultarCursor();
 	laberinto(5,5,20);
 	gotoxy(x, y);
 	cout << "#";
 	
 	while (true){
 		if (kbhit()){
 			
 			gotoxy(x, y);
 			cout << " ";
 			
 			tecla = getch();
 			
 			if (tecla == 'a') x--;
 			if (tecla == 'd') x++;
 			if (tecla == 'w') y--;
 			if (tecla == 's') y++;
 			
 			if (tecla == 27) break;
 			
 	gotoxy(x, y);
 	cout << "#";
		 }
	 }
	 
	 return 0;
 }
 
