typedef int VARTYPE;
#include <stdio.h>
#include <stdlib.h>

#include "duallink.h"

void insertAtoN(VARTYPE *arr);
void printN();

int main(int argc, char *argv[])
{
  VARTYPE a[] = {5,1,3,2,5,6};
  insertAtoN(a);

  //insertNa(findNode(5),9);

  printN();
  reversel();
  printN();
  return 0;
}


void printN(){
  node *s = root;
  while (s != NULL) {
    printf("%d ",s->element);
    s = s->next;
  }
  printf("\n");
}


void insertAtoN(VARTYPE *arr){
  int i;
  int num = *arr;arr++;
  for (i = 0; i < num; i++) {
    insertE(*arr);
    arr++;
  }
}

