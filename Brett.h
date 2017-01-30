#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED


/*
 * Funktion:
 * Definiert ein Struct "Board" mit den Variablen boardSize und einem int Pointer
 *
 * Parameter:
 * brettGroesse: Brettgroesse
 * data: um den Wert zu bekommen
 *
 *
 */

typedef struct Brett
{
    unsigned int brettGroesse;
    int* data;
} Brett;


/*
 * Funktion:
 * Initialisiert das Brett mit den zwei Variablen
 *
 * Parameter:
 * brett: Pointer auf das Brett
 * brettgroesse: Brettgroesse
 *
 * R�ckgabewert: void
 *
 */

void brettInitialisieren(Brett* brett, unsigned int brettGroesse);


/*
 * Funktion:
 * Gibt zuvor reservierten Speicher wieder frei
 *
 * Parameter:
 * brett: Pointer auf das Brett
 *
 * R�ckgabewert: void
 *
 */

void brettSpeicherFreigeben(Brett* brett);


/*
 * Funktion:
 * Gibt den Wert von dem Board an der Stelle x und y zur�ck
 *
 * Parameter:
 * brett: Pointer auf das Brett
 * x: X - Koordinate
 * Y: Y - Koordinate
 *
 * R�ckgabewert: int - Wert der Position
 *
 */

int brettGetPositionswert(Brett* brett, unsigned int x, unsigned int y);


/*
 * Funktion:
 * Setzt den Wert von dem Board an der Stelle x und y zur�ck
 *
 * Parameter:
 * brett: Pointer auf das Brett
 * x: X - Koordinate
 * Y: Y - Koordinate
 * wert: Wert des Feldes
 *
 * R�ckgabewert: void
 *
 */

void brettSetPositionswert(Brett* brett, unsigned int x, unsigned int y, int wert);


/*
 * Funktion:
 * Gibt das Board aus
 *
 * Parameter:
 * brett: Pointer auf das Brett
 *
 * R�ckgabewert: void
 *
 */

void brettAusgeben(Brett* brett);

/*
 * Funktion:
 * Nimmt das geloeste Brett mit dem Startwert 0|0 und verschiebt die ganzen Werte um den Wert der auf der eigentlichen Startposition steht
 *
 * Parameter:
 * brett: Pointer auf das Brett
 * x: X - Koordinate
 * Y: Y - Koordinate
 *
 * R�ckgabewert: void
 *
 */

void brettWiederbeschreiben(Brett* brett, unsigned int x, unsigned int y);

#endif // BOARD_H_INCLUDED
