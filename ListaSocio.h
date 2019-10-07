#ifndef LISTA_SOCIO_H
#define LISTA_SOCIO_H
#include<iostream>
#include"Socio.h"
class ListaSocio {
private:
	NodoSocio * primero;
public:
	ListaSocio();
	~ListaSocio();

	void agregarSocio(Socio*);

};
#endif //LISTA_SOCIO_H