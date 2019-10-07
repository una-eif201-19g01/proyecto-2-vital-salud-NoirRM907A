#ifndef NODO_INSTRUCTOR_H
#define NODO_INSTRUCTOR_H
#include<iostream>
#include"Instructor.h"
class NodoInstructor {
private:
	NodoInstructor * siguiente;
	Instructor* dato;
public:
	NodoInstructor(Instructor*, NodoInstructor*);
	~NodoInstructor();

	Instructor* obtenerDato();

	NodoInstructor* obtenerSiguiente();

	void definirDato(Instructor*);

	void fijarSiguiente(NodoInstructor*);



};
#endif //NODO_INSTRUCTOR_H