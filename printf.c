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
if ( *format ==  '%' )
{
afficher_pourcentage();
nombre++ ;
}

elseif ( *format == 'c' )
{
char a = va_arg ( argument , char ) ;
 write ( 1 , &a , 1 ) ;
nombre++ ;
}

elseif ( *format == 's' )
{
char *string = va_arg ( argument , char* ) ; 
afficher_chaine( char *string ) ;
nombre = nombre + strlen(string) ;
}
}
format++ ;
}
va_end ( argument ) ;
return ( nombre ) ;
}
i