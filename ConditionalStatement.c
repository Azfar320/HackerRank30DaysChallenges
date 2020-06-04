#include <stdio.h>
#include <math.h>

int main(){

  int a;

  scanf("%d",&a);

  if(a%2!=0){
    printf("Weird");
  }
  else if(a%2==0 && a>2 && a<5){
    printf("Not Weird");
  }
  else if(a%2==0 && a>6 && a<20){
    printf("Weird");
  }
  else if(a%2==0 && a>20){
    printf("Not Weird");
  }

   return 0;

}
