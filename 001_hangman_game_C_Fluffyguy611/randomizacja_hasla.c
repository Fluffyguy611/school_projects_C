#include "header.h"



void randomizacja_hasla(struct haslo *h){
  FILE *fp;
  char buff[255];
  int count = 1;
  fp = fopen("hasla.txt", "r");
  if (fp == NULL){
    printf("Error plik nie istnieje");
    exit(0);
  }
   while(!feof(fp)){
    fscanf(fp, "%s", buff);
    count++;
  }
  rewind(fp); //ustawia pointer spowrotem na poczatek
  srand(time(0)); //randomowa liczba od 1 do konca pliku
  h->random = rand() % count + 1;
  //printf("%i\n", h->random);
  //printf("%i\n", count);
  int current_line = 1;
  //wybieranie hasla zgodnie z liczba
  bool keep_reading = true;
  do{
    fgets(buff, 30, fp);
    if (current_line == h->random){
      sscanf(buff, "%s", h->slowo);
      keep_reading = false;
    }
    current_line++;
  } while (keep_reading);
  fclose(fp);
}