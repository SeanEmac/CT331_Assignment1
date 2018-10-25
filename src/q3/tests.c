#include <stdio.h>
#include "genericLinkedList.h"

void printChar(void* data){ 
  printf("%c\n", *(char*)data);
}
void printInt(void* data){
  printf("%d\n", *(int*)data);
}
void printDouble(void* data){
  printf("%f\n", *(double*)data);
}
void printString(void* data){
  printf("%s\n", data);
}

void runTests(){
  printf("Tests running...\n");

  int i = 5;
  double d = 14.124;
  char c = 'a';
  char s[] = "String";
  
  printf("\nQuestion 3:\n");
  listElement* l = createEl(&i, sizeof(i), &printInt);
  push(&l, &c, sizeof(c), &printChar);
  enqueue(&l, &d, sizeof(d), &printDouble);
  enqueue(&l, &s, sizeof(s), &printString);

  traverse(l);

  printf("\nTests complete.\n");
}
