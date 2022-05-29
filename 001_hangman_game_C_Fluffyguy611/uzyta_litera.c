#include "header.h"


void uzyta_litera(struct haslo *h, char *c, char *niewiadome, char *uzyte, int *used_count, int *bledy, int *wygrana){
  int count=0;
  //printf("\n%c\n", *c);
  char haslo[strlen(h->slowo)];
  for(int i = 0; i<strlen(h->slowo); i++){
    //printf("char: %c\tTab: %c\n", *c, h->slowo[i]);
    if(*c == uzyte[i]){
      printf("Litera zostala juz uzyta\n");
      printf("HASLO: %s\nUZYTE: %s\n", niewiadome, uzyte);
      printf("ILOSC BLEDOW %i\n", *bledy);
      return;
    }
    else if(*c == h->slowo[i]){
      *(niewiadome+i) = *c;
      *wygrana = *wygrana + 1;
    }
    else{
      count++;
    }
  }
  printf("%i\n", count);
  if (count == strlen(h->slowo)){
    *bledy+=1;
  }
  uzyte[*used_count] = *c;
  *used_count = *used_count + 1;
  wisielec(*bledy);
  printf("USED_COUNT: %i\n", *used_count);
  printf("HASLO: %s\nUZYTE: %s\n", niewiadome, uzyte);
  printf("ILOSC BLEDOW %i\n", *bledy);
  if(*wygrana == strlen(h->slowo)){
    *bledy = 10;
  }
}