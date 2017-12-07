#ifndef MONOPLAN_TOKEN_H
#define MONOPLAN_TOKEN_H

typedef struct node node_t;

struct node{
	void *  data;
	node_t * Precedant;
};


node_t * list_create();

void * list_get_data(node_t * node);

void list_set_data(node_t * head , void * data );

node_t * list_append(node_t * head, void * data);

node_t * list_remove(node_t * head , void * data);

node_t * list_headRemove ( node_t * head);

node_t * list_destroy(node_t * head ) ;

#endif // MONOPLAN_TOKEN_H