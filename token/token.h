#ifndef MONOPLAN_TOKEN_H
#define MONOPLAN_TOKEN_H

#include "../Cellules/cellules.h"

typedef enum Type Type;
typedef struct Feuille FeuilleCal;

enum Type {VALUE , REF , OPERATOR};

struct Token {

	Type type;

	union {
		double  cst;
		s_cell * ref;
		void (* operator ) ( pile_t * eval);
	}value;			
}s_token;

#endif //MONOPLAN_TOKEN_H