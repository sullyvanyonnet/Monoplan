
#include "liste.h"
#include <stdlib.h>
#include <stdio.h>

node_t * list_create(){


    return NULL;
}

inline void * list_get_data(node_t * node){
	if (node == NULL){
		return NULL;
	}else{

		return node->data ;
	}
}

inline void list_set_data(node_t * head , void * data ){
	if (head == NULL){
	}else{

		head->data = data; ;
	}


}

node_t * list_insert(node_t * head , void * data ){


		
	node_t * node = (node_t*) malloc( sizeof(node_t));
	if ( node == NULL)
	{
		return head ;
	}else{
		node->Precedant = head ;
		node->data = data;
		return node ;
	}
}


node_t * list_append(node_t * head, void * data){
	if (head != NULL ){
		if (head->data = data){
			return list_insert(head ,data );
		}else{
	
			node_t * nodeEncoure = head ;
			while (nodeEncoure->Precedant != NULL){
				nodeEncoure = nodeEncoure->Precedant;
			}

			node_t * node = (node_t*) malloc( sizeof(node_t));
			if ( node == NULL)
			{
				return node ;
			}
			nodeEncoure->Precedant = node;
			node->data = data;
			return head;
		}
	}else{
		return NULL;


	}
}

node_t * list_remove(node_t * head , void * data){
	if (head != NULL ){
		if (head->data = data){
			return list_headRemove (head);
		}else{

		
		 node_t * nodeEncoure = head ;
		while (nodeEncoure->data != data && nodeEncoure->Precedant != NULL){
			nodeEncoure = nodeEncoure->Precedant;
		}
		//sauvegarder le lien de la donnée a supprimer
		node_t * nodeSuppr = nodeEncoure->Precedant;
		//mis a jour du chainage
		nodeEncoure->Precedant = nodeEncoure->Precedant->Precedant;
		// liberation de la memoire de l'element a suppr
		free(nodeSuppr);

		return head;
		}
	}else{

		return NULL;
	}

}

node_t * list_headRemove ( node_t * head){
	if (head != NULL){
		node_t * newHead = head->Precedant ;
		free(head);
		return newHead;
	}else{
		return NULL;
	}

}

node_t * list_destroy(node_t * head ) {
	if (head != NULL){
		node_t * nodeEncoure = head ;

		while (head->Precedant != NULL){

			nodeEncoure = head->Precedant;
			free(head);
			node_t * head = nodeEncoure;
		}
		free(head);
		head = NULL;
		return head;
	}else{
		return NULL;
	}

}
