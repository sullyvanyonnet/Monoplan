#include "cellules.h"
#include "../FeuilleCal/feuilleCal.h"

s_cell * Cellules_create(double num ){
		node_t * node = (node_t*) malloc( sizeof(s_cell));
		if ( node == NULL)
		{
			return NULL ;
		}else{
			node->Num = num;
		}
}

s_cell * Cellules_insert(s_cell * cell , char * data , FeuilleCal Feuille){
	if ( cell == NULL ){

		node_t * node = (node_t*) malloc( sizeof(s_cell));
		if ( node == NULL)
		{
			return NULL ;
		}else{
			cell->data * = strdup(data);
			Feuille->Headcell  =  list_insert( Feuille->Headcell , cell);
		}
	}
}
