#include"ListaInstructor.h"
#include"NodoInstructor.h"

ListaInstructor::ListaInstructor(){}
ListaInstructor::~ListaInstructor(){}

void ListaInstructor::ListaInstructor::agregarInstructor(Instructor* p) {

	NodoInstructor* actual;
	NodoInstructor* nuevoNodo;
	if (primero == NULL) {
		primero = new NodoInstructor(p, NULL);
	}
	else {
		actual = primero;

		while (actual->obtenerSiguiente() != NULL) {
			actual = actual->obtenerSiguiente();
		}

		nuevoNodo = new NodoInstructor(p, NULL);
		actual->fijarSiguiente(nuevoNodo);
	}

}