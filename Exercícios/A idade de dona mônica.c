#include <stdio.h>

int main(void){
  
  int monica, filhoA, filhoB, filhoC;
  
  scanf("%d %d %d", &monica, &filhoA, &filhoB);
  
  int maior = filhoA;
  
  if(monica >= 40 && monica <=110 && filhoA >= 1 && filhoA < monica && filhoB >= 1 && filhoB < monica && filhoA != filhoB){
      filhoC = monica - (filhoA + filhoB);
     
     if(filhoB > filhoA){
         maior = filhoB;
     }
     if(filhoC > maior){
         maior = filhoC;
     }
     
     printf("%d\n", maior);
      
  }

  return 0;
}