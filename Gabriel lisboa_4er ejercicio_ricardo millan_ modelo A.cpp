#include <iostream>


using namespace std;

int main(){

do{

int opcion = 0,valor = 0;
float meta = 0;


cout << "¿Que desea Convertir?\n[1]$ a Bs\n[2]Bs a Euros\n[3] meta financiera a alzar\n[4] peso a alcanzar\n[5] salida"<< endl;
cin >> opcion;

system("cls");

float cambio = (opcion == 1)? 245.67 : 284.88;


if (opcion == 1){
cout << "Ingrese un valor $ ";
cin >> valor;

cout << "Su valor en bolivares es de: " << valor * cambio ;
system ("pause");
system ("cls");
}


else if (opcion == 2){
cout << "Ingrese un valor Bs ";
cin >> valor;

cout << "Su valor en euros es de: " << valor / cambio ;
system ("pause");
system ("cls");
}

else if (opcion == 3){

int sueldo=0,gastos=0;
cout << "Ingrese el valor de la meta deseada ";
cin >> meta;

cout << "Ingrese el valor de su salario mensual ";
cin >> sueldo;

cout << "Ingrese el valor de su gasos mensuales ";
cin >> gastos;

cout << "tendra que ahorra alrededor de " << meta / (sueldo-gastos) << " meses" <<endl;
system ("pause");
system ("cls");
}

else if (opcion == 4){
float peso=0,gastos=0;
cout << "Ingrese su peso deseado ";
cin >> meta;

cout << "Ingrese su peso actual ";
cin >> peso;

cout << "Ingrese promedio de perdida de eso mensual ";
cin >> gastos;

int result = (peso-meta)/gastos;

cout << "tendra que entrenar alrededor de " << result << " meses" <<endl;
system ("pause");
system ("cls");
}

else if (opcion == 5){
	cout << "gracias por su tiempo";
	return 0;
}

else {
	cout << "valor invalido, intente un numero valido\n";
}
}while(true);
}
