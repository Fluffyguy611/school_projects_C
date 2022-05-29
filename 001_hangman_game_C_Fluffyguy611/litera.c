#include "header.h"

void litera(struct haslo *h, char *c){
  
  printf("Podaj litere:\n");
  char trash;
  bool count = true;
  do{
    scanf("%c", &trash);
    scanf("%c", c);
      if(*c >= 65 && *c <= 90 || *c >= 97 && *c <= 122){
        if(*c >= 65 && *c <= 90){
          count = false;
        }
        else{
          *c = *c-32;
          count = false;
          }
      }
      else{
        printf("Znak niedozwolony\n");
        printf("Wprowadz haslo jeszcze raz\n");
      }
  }while(count);
}
