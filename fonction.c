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

void afficher_int(int n) 
{
  // Vérifie si le nombre est négatif

  if (n < 0) 
  {
    // Affiche le signe moins

    write(1, "-", 1);
    // Convertit le nombre en positif

    n = -n;
  }

  // Affiche chaque chiffre du nombre

  for (int i = 10; i >= 0; i--) 
  {
    int digit = n / i;

    // Si le chiffre est non nul, l'affiche

    if (digit != 0) 
    {
      char digit_char = '0' + digit;
      write(1, &digit_char, 1);
    }
  }
}
