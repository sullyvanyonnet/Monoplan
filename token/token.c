#include "token.h"
#include "../FeuilleCal/feuilleCal.h"
#include "../Liste/liste.h"

s_token * Token_create(Type  leType,union value data ){
		s_token Token = malloc( sizeof(s_token));
		if ( Token == NULL)
		{
			return NULL ;
		}else{
			Token->type =  leType;
			 Token->value = data;
		}
}
