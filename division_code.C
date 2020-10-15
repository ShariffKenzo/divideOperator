#include<stdio.h>
#include <stdlib.h>

int main(){


    int a,b,x,y;
    int i= 0;


    printf("enter the dividend: ");
    scanf("%d", &a);
    printf("enter the dividend:");
    scanf("%d", &b);

    if (a>=0 && b>0 || a<0 && b<0){

      for( x=abs(a);x>=0; x-=abs(b) ){
      i++;

      }
      i--;
      printf("%d",i);

      return 0;
    }

    if (a>=0 && b<0 || a<0 && b>0){

      for( x=abs(a);x>=0; x-=abs(b) ){
      i++;

      }
      i--;
      printf("-%d",i);

      return 0;

    }

    if (b==0){
        printf("Error, divisor cannot be zero value");
    }

}
