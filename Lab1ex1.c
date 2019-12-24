#include <stdio.h>
//function to check if number n is prime even or odd
int iswhat(n) {   
  int m = 0;
  int i = 0;
  if(n % 2 == 0)
        printf("%d is even\n", n);
    else
        printf("%d is odd\n", n);
    return 0;
  m=n/2;
    for(i=2;i<=m;i++){
      if (n%i==0) {
        return 0;
        break;
      }
    }
  return 1;
}

int main(void) {
  int n = 4; //change value here!
  if (n<=1) { //invalid entry acknowledged also since it is int specified no other inputs please
    printf("invalid entry");
  }
  else if(iswhat(n)==1){
    printf("%d is prime\n", n);
  }
  else {
    printf("%d is not prime\n", n);
  }
  return 0;
}