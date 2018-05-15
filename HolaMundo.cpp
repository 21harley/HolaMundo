#include "HolaMundo.h"
#include<iostream>
#include<string.h>
#include<windows.h>
#include<stdio.h>
using namespace std;

HolaMundo::HolaMundo()
{
	x=0;y=0;strcpy(saludo," ");
}

HolaMundo::HolaMundo(int x,int y,char saludo[]){
	this->x=x;this->y=y;strcpy(this->saludo,saludo);
}

void HolaMundo::cargarDato(){
	cout<<"Ingrese Saludo"<<endl;
	cin.sync();cin.getline(saludo,19);
}

void HolaMundo::mostarDato(){
	cout<<saludo;
}

void HolaMundo::gotoxy(int x,int y){
	HANDLE hCon;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hCon,dwPos);
}

void HolaMundo::color(int c){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

HolaMundo::~HolaMundo()
{
}

void HolaMundo::setX(int x){
	this->x=x;
}

void HolaMundo::setY(int y){
	this->y=y;
}

void HolaMundo::setSaludo(char saludo[]){
	strcpy(this->saludo,saludo);
}

int HolaMundo::getX(){
	return x;
}

int HolaMundo::getY(){
	return y;
}

char *HolaMundo::getSaludo(){
	return saludo;
}
