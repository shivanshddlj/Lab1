#include <stdio.h>
//function to show remainder when num is divided by div using iteration
int modulo(num,div){
  while (num>=div) {
    num = num - div;
  }
  return num;
}
int main(void) {
  int num = 0; //input values here! int specified don't put values that aren't int please.
  int div = 0;
  int rem = 0;
  if (num<=0 || div<=0) { //make sure inputs are within limits
    printf("invalid input\n");
    return 1;
  }
  rem = modulo(num,div);
  printf("%d", rem);
  return 0;
}