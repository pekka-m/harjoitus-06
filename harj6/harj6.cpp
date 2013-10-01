/*********************************************************************
Teht‰v‰: HARJOITUS 6
Tekij‰: Pekka Melgin
PVM: 10.9.2013
Kuvaus:
Kirjoita ohjelma, joka kysyy k‰ytt‰j‰lt‰ lompakossa olevan raham‰‰r‰n
ja lihapiirakan hinnan.

Ohjelma tutkii, onko k‰ytt‰j‰ll‰ varaa ostaa lihapiirakka.
Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon j‰‰ viel‰ rahaa.
Muuten ohjelma kehottaa k‰ytt‰j‰‰ paastoamaan.

K‰yt‰ vain kahta muuttujaa. ‰l‰ v‰henn‰ lompakon sis‰lt‰‰, ellet voi
ostaa lihapiirakkaa.
*********************************************************************/
#include <iostream>
using namespace std;
int raha;
int hinta;
void main ()
{
	cout<< "Paljonko sulla on massia? ";
	cin>> raha;
	cout<< "Paljonko lihis maksaa? ";
	cin>> hinta;
	if (raha >= hinta) {
		cout<< "Ja rahaa jÑÑ vielÑ ";
		cout<< raha - hinta;
	}
	else {
		cout<< "Paree sitten paastota";
	}
		
}