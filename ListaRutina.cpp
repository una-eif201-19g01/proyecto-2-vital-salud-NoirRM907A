#include"listaRutina.h"
#include"NodoRutina.h"

ListaRutina::ListaRutina(){}

ListaRutina::~ListaRutina(){}

void ListaRutina::ListaRutina::agregarRutina(Rutina* p) {

	NodoRutina* actual;
	NodoRutina* nuevoNodo;
	if (primero == NULL) {
		primero = new NodoRutina(p, NULL);
	}
	else {
		actual = primero;

		while (actual->obtenerSiguiente() != NULL) {
			actual = actual->obtenerSiguiente();
		}

		nuevoNodo = new NodoRutina(p, NULL);
		actual->fijarSiguiente(nuevoNodo);
	}

}