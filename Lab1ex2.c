#include <stdio.h>
#include <math.h> //used for sqrt function
//function to calculate distance between coords
float distance(x1,y1,x2,y2){
  float dis = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
  float sqrtdis = sqrt(dis);
  return sqrtdis;
}
int main(void) {
	float x1 = 0;//change coordinate values here. float specified no string inputs please.
  float x2 = 0;
  float y1 = 0;
  float y2 = 0;
  float sqrtdis = 0;
  sqrtdis = distance(x1,y1,x2,y2);
  printf("Distance between the said points: %.2f", sqrtdis);
	printf("\n");
	return 0;
}