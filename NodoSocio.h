#ifndef NODO_SOCIO_H
#define NODO_SOCIO_H
#include<iostream>
#include"Socio.h"
class NodoSocio {
private:
	NodoSocio * siguiente;
	Socio* dato;
public:
	NodoSocio(Socio*, NodoSocio*);

	~NodoSocio();
	
	Socio* obtenerDato();

	NodoSocio* obtenerSiguiente();

	void definirDato(Socio*);

	void fijarSiguiente(NodoSocio*);



};
#endif //NODO_SOCIO_H