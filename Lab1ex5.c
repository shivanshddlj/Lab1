#include <stdio.h>
//function to find the square of the sum of the first 100 natural numbers
int sumnatsqr() {
  int sum = 0;
  int n = 100;
  for(int i=0; i<=n; i++){
    sum = sum + i;
  }
  sum = sum*sum;
  return sum;
}
//function to find the sum of the square of the first 100 natural numbers
int sumsqr() {
  int sum = 0;
  int n = 100;
  for (int i=0;i<=n;i++) {
    sum = sum + i*i;
  }
  return sum;

}
int main(void) {
  int sumofsquares = sumsqr();
  int squareofsum = sumnatsqr();
  int answer = squareofsum - sumofsquares; //print answer by substracting value returned from the 2 functions above
  printf("%d", answer);
}