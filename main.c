#include <stdio.h>

int ValidaPrimerValor()
{
  int valor;
  valor = 0;
    while (valor<50 || valor>100)
    {
    printf("Ingrese entero entre 50 y 100: ");
    scanf("%i", &valor);
    }
return valor;
}
float ValidaSegundoValor()
{
  float valor;
  valor = 0;
    while (valor<=0)
    {
    printf("\nIngrese real positivo: ");
    scanf("%f", &valor);
    }
return valor;
}
int ValidaTercerValor()
{
  int valor;
  valor = 0;
    while (valor>=0)
    {
    printf("\nIngrese entero negativo: ");
    scanf("%i", &valor);
    }
return valor;
}
void ImprimeMensaje(int dato1, float dato2, int dato3)
{
  printf("\nSe ingreso correctamente los valores: %i, %f, %i",dato1, dato2, dato3);
}

int main()
{
  int dato1, dato3;
  float dato2;
  
  dato1 = ValidaPrimerValor();
  dato2 = ValidaSegundoValor();
  dato3 = ValidaTercerValor();

  ImprimeMensaje(dato1, dato2, dato3);

printf("\n\n");
  
  return 0;
}