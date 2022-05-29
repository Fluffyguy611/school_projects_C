#include "header.h"


void wlasne_haslo(struct haslo *h){
  printf("Podaj własne hasło:\n");
  char tab[30];
  int x =0;
  int count;
  do{
    count = 0;
    scanf("%29s", tab);
    
    for(int i=0; i<strlen(tab); i++){
      if(tab[i] >=65 && tab[i] <= 90 || tab[i] >=97 && tab[i] <= 122){
        if(tab[i] >= 65 && tab[i] <= 90){
          count++;
        }
        else{
          tab[i] = tab[i]-32;
          count++;
          }
      }
      else{
        printf("Wyraz zawiera znaki niedozwolone\n");
        printf("Wprowadz haslo jeszcze raz\n");
        break;
        }
   }
  }while(strlen(tab) != count);
   sprintf(h->slowo, "%s", tab);
   //dodawanie hasla do listy hasel.txt
   printf("Czy chcesz dodac haslo do listy?\n");
   printf("1 = TAK, 2 = NIE\n");
  do{
    scanf("%i", &x);
    if(x != 1 && x!=2){
      printf("Niepoprawna opcja\n");
    }
  }while(x != 1 && x != 2);
  if (x == 1){
    
    FILE *fp;
    FILE *fp2;
    
    char buff[255];
    
    fp = fopen("hasla.txt", "r");
    fp2 = fopen("hasla.txt", "a");
    
    if (fp == NULL){
      printf("Error plik nie istnieje");
      exit(0);
      }
    
    fscanf(fp, "%s", buff);
    //sprawdzanie czy haslo jest w bazie hasel
    while(!feof(fp)){
    count = 0;
    fscanf(fp, "%s", buff);
      for(int i = 0; i<strlen(tab); i++){
        if(buff[i] == tab[i]){
          count++;
      }
        if(count == strlen(tab)){
          printf("Podane haslo juz jest w bazie danych\n");
          return;
        }
      }
    }
   fprintf(fp2, "\n%s", h->slowo);
   fclose(fp); fclose(fp2);
  }
}