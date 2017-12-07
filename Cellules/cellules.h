#include "../Liste/liste.h"
#include "../Pile/pile.h"

typedef struct cell s_cell;

struct cell{
	char *  data;
	double  Num;
	node_t * HeadToken; 
	node_t * Headcell;
};
