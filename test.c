#include <stdio.h>

int foo(){
  int x;
  int y = x;
  return y;
}

int main(){
  printf("%d\n",foo());
}
