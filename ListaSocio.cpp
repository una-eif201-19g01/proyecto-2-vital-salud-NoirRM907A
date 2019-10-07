#include"ListaSocio.h"
#include"NodoSocio.h"

ListaSocio::ListaSocio(){}
ListaSocio::~ListaSocio(){}
void ListaSocio::ListaSocio::agregarSocio(Socio* p) {

		NodoSocio* actual;
		NodoSocio* nuevoNodo;
		if (primero == NULL) {
			primero = new NodoSocio(p, NULL);
		}
		else {
			actual = primero;

			while (actual->obtenerSiguiente() != NULL) {
				actual = actual->obtenerSiguiente();
			}

			nuevoNodo = new NodoSocio(p, NULL);
			actual->fijarSiguiente(nuevoNodo);
		}

	}