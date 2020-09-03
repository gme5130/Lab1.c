// Author: Griffin Edmunds gme5130@psu.Edmunds
// Collaborator: Julia Cable jfc5978@psu.edu
// Collaborator: Sujay Kandwal sfk5645@psu.edu
// Collaborator: Nicholas George ntg5067@psu.edu
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>


int main(void) {
  char *temp = readline("Enter temperature in celsius: ");
  double tempFloat = atof(temp);
  double tempCtoF = (tempFloat*9/5+32);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", tempFloat, tempCtoF);
  return 0;
}