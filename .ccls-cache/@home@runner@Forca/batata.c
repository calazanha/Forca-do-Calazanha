#include <stdio.h>

void calcula(int *batata) {
  printf("calcula %d %d\n", (*batata), batata);
  (*batata)++;
  printf("calcula %d %d\n", (*batata), batata);
}
int main() {

  int c = 10;
  printf("main %d %d\n", c, &c);
  calcula(&c);
  printf("main %d %d\n", c, &c);
}