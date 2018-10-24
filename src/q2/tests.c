#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void runTests(){
  printf("Tests running...\n\n");
  printf("QUESTION 2:\n");

  listElement* l = NULL;
  // Test pop and Dequeue on empty list
  printf("Testing on an empty list:\n");
  dequeue(l);
  pop(&l);

  // Test push 
  push(&l, "first", 30);
  push(&l, "second", 30);
  printf("\nTesting push:\n");
  traverse(l);


  enqueue(&l, "third", 30);
  enqueue(&l, "fourth", 30);
  enqueue(&l, "fifth", 30);
  printf("\nTesting Enqueue:\n");
  traverse(l);

  // Test Length
  int len = length(l);
  printf("\nTesting Length:\n");
  printf("Length: %d\n", len);

  // Test pop on not-empty list
  // Should pop "fifth"
  printf("\nTesting Pop:\n");
  pop(&l);
  traverse(l);

  // Test Dequeue on not-empty list
  // Should Dequeue "first"
  printf("\nTesting Dequeue:\n");
  dequeue(l);
  traverse(l);

  printf("\n\nTests complete.\n");
}
