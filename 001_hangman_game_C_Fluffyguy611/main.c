#include "header.h"

int main(void) {
  int wybor;
  char c;
  struct haslo h;
  int used_count = 0;
  int bledy = 0;
  int wygrana = 0;

  powitanie();
  wybor = wybieranie_hasla();
  switch (wybor) {
  case 1: {
    wlasne_haslo(&h);
    break;
  }
  case 2: {
    randomizacja_hasla(&h);
    break;
  }
  }
  int length_of_word = strlen(h.slowo);
  wisielec(bledy);
  printf("\nTWOJE HASLO MA: %i LITER\n", length_of_word);
  // printf("%s\n", h.slowo);
  char niewiadome[strlen(h.slowo) - 1];
  char uzyte[26];
  for (int i = 0; i < 26; i++) {
    uzyte[i] = '\0';
  }
  for (int i = 0; i < strlen(h.slowo); i++) {
    niewiadome[i] = '_';
  }
  do {
    litera(&h, &c);
    uzyta_litera(&h, &c, &niewiadome, &uzyte, &used_count, &bledy, &wygrana);
  } while (bledy < 6);
  if (bledy == 6) {
    printf("\nKONIEC GRY\n");
    printf("TWOJE HASLO TO: %s\n", h.slowo);
  } else if (bledy == 10) {
    printf("\nWYGRALES! ODGADLES HASLO: %s\n", h.slowo);
    printf("KONIEC GRY\n");
  }

  return 0;
}