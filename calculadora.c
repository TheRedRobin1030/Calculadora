#include<stdio.h>
#include<stdlib.h>
#include<math.h>


float multiplicacion(float valor1, float valor2);
float suma(float valor1, float valor2);
float resta(float valor1, float valor2);
float division(float valor1, float valor2);
float potencia(float valor1, float valor2);
float valor();
int main ()
{
  int op;
  printf("que operacion desea realizar?\n");
  printf("1.suma\n");
  printf("2.resta\n");
  printf("3.multiplicacion\n");
  printf("4.Division\n");
  printf("5. potencia\n");
  scanf("%d",&op);
  switch (op)
  {
  case 1: printf("%.2f:",suma(valor(),valor()));
    break;
  case 2: printf("%.2f:",resta(valor(),valor()));
    break;
  case 3: printf("%.2f:",multiplicacion(valor(), valor()));
    break;
  case 4 :printf("%.2f:",division(valor(), valor()));
    break;
  case 5: printf("%.2f:",potencia(valor(),valor()));
  }

  
  
  return 0;
}
float suma(float valor1, float valor2){
    
}
float resta(float valor1, float valor2){
    
}
float potencia(float valor1, float valor2){
     return pow(valor1,valor2);
}

float multiplicacion(float valor1, float valor2){
  return valor1*valor2;
}
float division(float valor1, float valor2){
  if(valor2!=0){
  return valor1/valor2;}else{
    printf("no se puede dividir sobre 0 cambie el valor\n");
    scanf("%f",&valor2);
    division(valor1,valor2);
  }
}
float valor(){
  float valor;
  printf("Inserte un numero\n");
  scanf("%f",&valor);
  return valor;
}