#ifndef MONOPLAN_PILE_H
#define MONOPLAN_PILE_H

struct pile{
    double 	*el;
    int TailleT;
    int iterateur;
    int limite ;
};
typedef struct pile pile_t;

pile_t * pile_creer(int nb_places);
// return null if error
void pile_detruire(pile_t * p);
void pile_initialiser(pile_t * p);
int pile_places_occupees(const pile_t * p);
int pile_places_libres(const pile_t *p);

int pile_depiler(pile_t * p, double * el);
//return -1 if plein else 0 if vide else *el l'element depilé
int pile_empiler (pile_t * p, double el );
//return -1 if plein else 0
void pile_initialiser_iterateur(pile_t * p);
int pile_obtenir_element_suivant(pile_t * p , double * el);
// return -1 il y a plus 'element dans la pile , 0 sionon * el donne l'element lu

#endif //MONOPLAN_PILE_H
