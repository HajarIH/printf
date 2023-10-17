#include "main.h"
/*
* fonction for string
*/
void afficher_chaine(char *chaine) 
{
 while (*chaine != '\0') 
	 {
		 write(1, chaine, 1);
		 chaine++;
		 }
}


/*
* fonction for %
*/

void afficher_pourcentage() 
{
  write(1, "%", 1);
}
