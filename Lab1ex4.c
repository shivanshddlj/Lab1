#include <stdio.h>
//function to show the remainder when num is divided by div using recursion
int modulo(num,div){
    if (num>=div) {
      num = modulo(num - div,div);
    }
  return num;
}
int main(void) {
  int num = 0; //input values here! specified as int don't put anyhting other than int values in here please.
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