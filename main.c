#include <stdio.h>

int main () {

  char comida;
  int bolo, canjica, milho, pamonha, moleque = 0;

  do {
    scanf("%c", &comida);
    switch(comida) {
        case 'B' : bolo++; break;
        case 'C' : canjica++; break;
        case 'M' : milho++; break;
        case 'P' : pamonha++; break;
        case 'Q' : moleque++; break;
    }
  
  
  }
  while (comida != 'F' );

  printf("Bolo: %d\n", bolo);
  printf("Canjica: %d\n", canjica);
  printf("Milho: %d\n", milho);
  printf("Pamonha: %d\n", pamonha);
  printf("Pé de moleque: %d\n", moleque);




  return 0;
}