#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
   int i,j;
   printf("Number\tNumber\tProduct\n");
   for (i=0; i<10;i++){
    for(j=0; j<10;j++){
        
        printf("%d\t%d\t%d\n", i, j, (i*j));

    }
    printf("\n");
    printf("=================\n\n");
   printf("Number\tNumber\tProduct\n");

   }
   
   return 0;
  
    

}