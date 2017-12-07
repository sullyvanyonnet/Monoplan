#include "pile.h"
#include <stdlib.h>
#include <stdio.h>

pile_t * pile_creer(int nb_places)
{
	pile_t * unePile = (pile_t*) malloc( sizeof(pile_t));

	if ( unePile == NULL)
	{
		return unePile ; 
	}
	
	unePile->el = malloc(sizeof(double) * nb_places) ;
	if ( unePile->el == NULL)
	{
		return NULL ; 
	}

	unePile->TailleT = nb_places-1;
	unePile->iterateur=0;
	unePile->limite=0;
	return unePile;
}

void pile_detruire(pile_t * p)
{
	free(p->el);
	free(p);
}

void pile_initialiser(pile_t * p){

	p->limite=0;
	p->iterateur=0;
}

int pile_places_occupees(const pile_t * p){

	return 	 p->limite ;
}

int pile_places_libres(const pile_t * p){

	return p->TailleT - p->limite ;
}

inline int pile_depiler(pile_t * p, double * el)
{
	if ( pile_places_occupees(p) == 0 ){
		return -1;
	}else{
		*el = p->el[pile_places_occupees(p)-1];
		p->el[pile_places_occupees(p)-1] = 0;
		p->limite = p->limite -1 ;
		return 0;
	}
}

inline int pile_empiler(pile_t * p, double  el)
{
	if ( pile_places_libres(p) == 0 ){
		return -1;
	}else{
		p->el[pile_places_occupees(p)] = el;
		p->limite = p->limite +1;
		return 0;
	}
}

void pile_initialiser_iterateur(pile_t * p){
		p->iterateur=0;
}

int pile_obtenir_element_suivant(pile_t * p , double * el)
{
	if ( p->iterateur == pile_places_occupees(p)+1)
	{
		return -1;
	}
	 *el = p->el[p->iterateur];
	p->iterateur = p->iterateur + 1 ;
	return 0;
}

//  © sullyvan Yonnet 16/11/2017




