// *( int* )
#include "liste.h"
#include <stdio.h>
#include <stdlib.h>
main(){
	//test fonction pile_creer(10);
	node_t * node = list_create();

		//test fonction list_get_data(unePile);
		void * result = list_get_data(node);


		if (result != NULL){

			printf("echec : result aurai du etre null %d ", *( int* ) result );
		}

		int Num1 = 3;
		void * data1 = &Num1;


		 node = list_insert( node ,  data1);
		if (node == NULL){

			printf("echec : result5  aurai du etre null");
		}

		int Num2 = 5;
		void * data2 = &Num2;
		node = list_insert( node , data2 );


		void * result2 = list_get_data(node);

		if (*( int* )result2 != 5){
			printf("echec : result aurai du etre 5 \n %d", *( int* ) result2 );
		}

		int Num3 = 10;
		void * data3 = &Num3;
		node = list_append( node , data3 );





		if (*( int* )node->Precedant->Precedant->data != 10){

			printf("echec : result aurai du etre 5 \n %d", *( int* ) node->data );
			printf("echec : result aurai du etre 3 \n %d", *( int* ) node->Precedant->data  );
			printf("echec : result aurai du etre 10 \n %d", *( int* ) node->Precedant->Precedant->data);

		}

		node = list_remove( node ,data2);

		if (*( int* )node->Precedant->data != 10){

			printf("echec : result aurai du etre 5  %d \n", *( int* ) node->data );
			printf("echec : result aurai du etre 10 %d \n ", *( int* ) node->Precedant->data);

		}

		node = list_headRemove(node);

		if (*( int* )node->data != 10){

			printf("echec : result aurai du etre 10  %d \n", *( int* ) node->data );
		}

		node = list_destroy(node);

		if ( node != NULL){

			printf("La suppression n'est pas effectuer ");
		}
}

//  © sullyvan Yonnet 16/11/2017
