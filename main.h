#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);
void afficher_pourcentage();
void afficher_chaine(char *chaine);
void afficher_int(int n);

#endif
