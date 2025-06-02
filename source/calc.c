
#include "functions.h"
#include <stdio.h>
#include <string.h>

void add() 
{
calc:
  char type[50];
  int x, y;

  printf("Enter type of calculation (Type help for a list): ");
  scanf("%s", type);

  if (strcmp(type, "help") == 0)
  {
    printf("\nAvailable Operations:\n");
    printf("Addition\n");
    printf("Subtraction\n");
    printf("Multiplication\n");
    printf("Division\n\n");
    goto calc;
  }
  else if (strcmp(type, "addition") == 0)
  {
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Result: %d\n", x + y);
  }
  else if (strcmp(type, "subtraction") == 0)
  {
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Result: %d\n", x - y);
  }
  else if (strcmp(type, "multiplication") == 0)
  {
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Result: %d\n", x * y);
  }
  else if (strcmp(type, "division") == 0)
  {
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (y == 0) {
      printf("Error: Division by zero\n");
    } else {
      printf("Result: %d\n", x / y);
    }
  }
  else
  {
    printf("Unknown type of calculation.\n");
    goto calc;
  }
}

