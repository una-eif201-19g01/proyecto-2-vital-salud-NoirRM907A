#ifndef NODO_RUTINA_H
#define NODO_RUTINA_H
#include<iostream>
#include"Rutina.h"
class NodoRutina {
private:
	NodoRutina* siguiente;
	Rutina* dato;
public:
	NodoRutina(Rutina*, NodoRutina*);

	~NodoRutina();

	Rutina* obtenerDato();

	NodoRutina* obtenerSiguiente();

	void definirDato(Rutina*);

	void fijarSiguiente(NodoRutina*);


};
#endif //#define NODO_RUTINA_H