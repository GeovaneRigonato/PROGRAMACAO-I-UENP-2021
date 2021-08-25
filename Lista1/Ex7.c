#include <stdio.h>

int main(){
float celsius;

printf("\nDigite o valor em ºC: ");
scanf("%f", &celsius);

float kelvin = celsius + 273;
float fahrenheit = 1.8 * celsius + 32;

printf("\nKelvin = %.2f ºK", kelvin);
printf("\nFahrenheit = %.2f ºF", fahrenheit);
  return 0;
}