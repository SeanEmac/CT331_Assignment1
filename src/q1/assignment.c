#include <stdio.h>

int a;
int* b;
long c;
double* d;
char** e;

int main(int arg, char* argc[]){
  printf("Hello assignment1.\n");

  printf("int: %ld \n", sizeof(a));
  printf("int*: %ld \n", sizeof(b));
  printf("long: %ld \n", sizeof(c));
  printf("double: %ld \n", sizeof(d));
  printf("char**: %ld \n", sizeof(e));

  return 0;
}
