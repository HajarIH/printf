#include "main.h"
int _printf (const char *format, ...)
{
	int nombre = 0 ;
	va_list argument ;
	
	if (format == NULL )
		return ( -1 ) ;

	va_start ( argument , format ) ;
	while ( *format )
	{
		if  ( *format != '%' )
		{
			write ( 1 , format, 1) ;
			nombre++ ;
		}
		else
		{
			format++ ;
			if ( *format == '%' )
			{
				afficher_pourcentage();
				nombre++ ;
			}
			else if (*format == 'c')
			{
				char a = va_arg ( argument , int );
			       	write ( 1 , &a , 1 ) ;
				nombre++ ;
			}
			else if ( *format == 's' )
			{
				char *string = va_arg ( argument , char* ) ; 
				afficher_chaine(string) ;
				nombre = nombre + strlen(string) ;
			}
			else if ( *format == 'd' )
                        {
                                int n = va_arg ( argument , n ) ;
                                afficher_int(n) ;
                                nombre = nombre + n % 10 ;
                        }
		}
		format++ ;
	}
	va_end ( argument ) ;
	return ( nombre ) ;
}
