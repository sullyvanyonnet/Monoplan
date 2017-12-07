#include "pile.h"
#include <stdio.h>
main(){
	//test fonction pile_creer(10);
	pile_t * unePile = pile_creer(10);
	if (unePile == NULL){
		printf("echec : la variable << unePile >> est null\n");
	}else
	{
		if(unePile->TailleT != 9)
		{
			printf("echec :la taille du tableau n'est pas la meme 9 != %d\n",unePile->TailleT);
		}
		//test fonction pile_initialiser(unePile);
		pile_initialiser(unePile);
		if (unePile->limite !=0){
		
			printf("echec : le tableau est male initialisé\n");
		}

		//test fonction pile_places_occupees(unePile) sans element;
		int places_occupees= pile_places_occupees(unePile);
		if(places_occupees != 0)
		{
			printf("echec : il n'y a pas le bon nombre de place aucupé 0 !=%d\n ",places_occupees);
		}

		//test fonction pile_places_libres(unePile) sans element;
		int places_libres= pile_places_libres(unePile);
		if(places_libres != 9)
		{
			printf("echec : il n'y a pas le bon nombre de place libre 9 !=%d\n ",places_libres);
		}
		double elementDepile;
		int result ;
		result = pile_depiler( unePile , &elementDepile );
		//test fonction pile_depiler(unePile) avec une pile vide ;
		if (result == 0)
		{
			printf("echec : on ne peut pas trouver d'element dans une pile vide element trouvé %lf\n",elementDepile );
		}
		//test fonction pile_empiler(unePile);
		if (pile_empiler(unePile, 20) == -1)
		{
			printf("echec : la pile est plein et ne peut donc pas ajouter un element\n");		
		}else 
		{

			//test fonction pile_places_occupees(unePile) avec  1 element;;
			int places_occupees= pile_places_occupees(unePile);
			if(places_occupees !=1)
			{
				printf("echec : il n'y a pas le bon nombre de place aucupé 1 !=%d\n ",places_occupees);
			}

			//test fonction pile_places_libres(unePile) avec  1 element;
			int places_libres= pile_places_libres(unePile);
			if(places_libres != 8)
			{
				printf("echec : il n'y a pas le bon nombre de place libre 8 !=%d\n ",places_libres);
			}

				pile_empiler(unePile, 10);
				pile_empiler(unePile, 50);
				pile_empiler(unePile, 50);
				pile_empiler(unePile, 50);
				pile_empiler(unePile, 50);
				pile_empiler(unePile, 50);
				pile_empiler(unePile, 50);
				pile_empiler(unePile, 50);
				pile_empiler(unePile, 50);
				//test fonction pile_empiler(unePile) avec  une pile plein;
				if(pile_empiler(unePile, 50) == 0){
					printf("echec : le programe arrive a empiler dans une pile pleine\n");
				}
				double elementDepile;
				int result ;
				result = pile_depiler( unePile , &elementDepile );
				//test fonction pile_depiler(unePile);
			
				if (result == -1)
				{
					printf("echec : la pile est vide et ne peut donc pas depilé un element\n");
			
				}else 
				//test  elementDepile;			
				if( elementDepile != 50)
				{ 
					printf("echec : l'element depilé n'est pas le bon 50 != %lf\n", elementDepile);	
				}
				//test fonction pile_initialiser_iterateur(unePile);
				pile_initialiser_iterateur(unePile);
				if(unePile->iterateur != 0){
					printf("echec : lors de l'inisialisation  0 !=%d\n", unePile->iterateur);	
				}else 
				{
					double elementlu;
	
					if(pile_obtenir_element_suivant(unePile,&elementlu) == -1){
						printf("echec : toutes la pile a etait lu\n");
					}else if ( elementlu != 20){
						printf("echec : l'element lu n'est pas le bon 20 != %lf\n", elementlu);	
					}
			
	
				}
		}
	}
	
}

//  © sullyvan Yonnet 16/11/2017
