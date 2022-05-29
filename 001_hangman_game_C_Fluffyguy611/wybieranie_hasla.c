#include "header.h"

int wybieranie_hasla()
{
  int wybor = 0;
  int zmienna = 0;
  int count =0; //zmienna ktora moze zakonczy program
  printf("Witaj graczu w grze WISIELEC\n");
  printf("Wybiesz 1. aby wprowadzic wlasnie haslo\n");
  printf("Wybierz 2. aby wybrac haslo z listy\n");
  do{
    scanf("%i", &wybor);
    if(wybor == 1 || wybor == 2){
      break;
    }
    else{
      count++;
      if(count >=3){
      printf("Zbyt wiele niepoprawnych opcji\nKONIEC PROGRAMU\n");
      getchar();
      exit(0);
      }
      printf("Niepoprawny wybor, sprobuj jeszcze raz\n");
    }
  }while (zmienna == 0);

  return wybor;
}