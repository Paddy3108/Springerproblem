#ifndef ALGORITHMUS_H_INCLUDED
#define ALGORITHMUS_H_INCLUDED

#include <stdbool.h>

 /*
 * Funktion:
 * Initialisieren des Boards mit den uebergebenen Variablen
 * Methode f�r geschlossenenen bzw, offenen Weg aufrufen
 *
 * Parameter:
 * brettGroesse: Groesse des Boards
 * x : Start X - Koordinate
 * y : Start Y - Koordinate
 * geschlossen: Geschlosser oder offener Weg
 *
 * R�ckgabewert: void
 */
void knightsTour(unsigned int brettGroesse, unsigned int x, unsigned int y, bool geschlossen);

#endif // ALGORITHMUS_H_INCLUDED
