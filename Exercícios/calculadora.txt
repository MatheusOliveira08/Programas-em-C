#include <stdio.h>
#include <math.h>

int main(void){ 

  int n, sai = 0; 
  float x, y, soma, sub, mult, div;
  double A, B, C, delta, X1, X2;

  do{
    printf("Digite um dos numeros a seguir para fazer sua conta\nDigite 1 para somar\nDigite 2 para subtrair\nDigite 3 para multiplicar\nDigite 4 para dividir\nDigite 5 para Baskhara\nDigite 6 para sair do programa\n");
    scanf("%d", &n);

    switch(n){
      case 1: printf("Digite dois numeros para somar: ");
                scanf("%f %f", &x, &y);
                soma = x+y;
                printf("\n%.2f + %.2f = %.2f\n\n", x, y, soma);
                break;
      case 2: printf("Digite dois numeros para subtrair: ");
                scanf("%f %f", &x, &y);
                sub = x-y;
                printf("\n%.2f - %.2f = %.2f\n\n", x, y, sub);
                break;
      case 3: printf("Digite dois numeros para multiplicar: ");
                scanf("%f %f", &x, &y);
                mult = x*y;
                printf("\n%.2f * %.2f = %.2f\n\n", x, y, mult);
                break;
      case 4: printf("Digite dois numeros para multiplicar: ");
                scanf("%f %f", &x, &y);
                div = x/y;
                printf("\n%.2f / %.2f = %.2f\n\n", x, y, div);
                break;
      case 5: printf("Digite A, B e C: ");
              	scanf("%lf %lf %lf)", &A, &B, &C);

              	delta = (B*B) - (4*A*C);

		printf("\nDelta = %.2lf\n\n", delta);

              	if(delta >= 0 && A != 0){ 

              		X1 = (-B + sqrt(delta))/(2*A);
                	X2 = (-B - sqrt(delta))/(2*A);

               		printf("\nRaiz 1 = %.5lf\nRaiz 2 = %.5lf\n\n", X1, X2);
	      	}
              	else{
         		printf("\nImpossivel calcular\n\n");
              	}
              	break;
      case 6: printf("Saindo...\n");
              sai = 1;
              break;       
      default: printf("\nVocê não escolheu uma das opções\n\n");       
    }

  } while (!sai);

  

  return 0;
}
