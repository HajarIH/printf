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

  if (n < 0) 
  {
    

    write(1, "-", 1);


    n = -n;
  }

  int i = 0;
 
  for (i = 10; i >= 0; i--) 
  {
    int digit = n / i;


    if (digit != 0) 
    {
      char digit_char = '0' + digit;
      write(1, &digit_char, 1);
    }
  }
}
