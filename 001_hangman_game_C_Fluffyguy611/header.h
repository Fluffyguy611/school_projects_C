#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

#define MINUS -1

//Projekt gry w wisielca
void powitanie(void); //przywitanie gracza
int wybieranie_hasla();//wybieranie hasla, zwraca wybor 1 lub 2
void randomizacja_hasla(); //wybiera haslo z listy, zwraca haslo
//Struktura hasla i numeru
void wlasne_haslo();
//sprawdza czy wprowadzona litera jest poprawna
void litera();
//sprawdza czy litera zostala uzyta
void uzyta_litera();
void wisielec();


//struktura hasla oraz randowmowej liczby
struct haslo{
  int random;
  char slowo[30];
};