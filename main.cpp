#include <iostream>
#include "HolaMundo.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	HolaMundo hola;
	
	hola.cargarDato();
	for(int i=1;i<17;i++){
		hola.gotoxy(i,i+2);hola.color(i);hola.mostarDato();
	}
	
    cout<<endl;cin.sync();cin.get();
    
	return 0;
}
