#ifndef HOLAMUNDO_H
#define HOLAMUNDO_H

class HolaMundo
{
	int x,y;
	char saludo[20];
	public:
		HolaMundo();
		HolaMundo(int x,int y,char saludo[]);
		void cargarDato();
		void mostarDato();
		void gotoxy(int x,int y);
		void color(int c);
		~HolaMundo();
		void setX(int x);
		void setY(int y);
		void setSaludo(char saludo[]);
		int getX();
		int getY();
		char *getSaludo();
	protected:
};

#endif
