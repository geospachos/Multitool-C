#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"
#include "devmode.h"

int main();

int main() 
{
  system("clear");
  char option[15];
  char* ptr = option;

  printf("MULTITOOL C by DS10320/@geospachos\n");
  printf("Enter your option (Hint: Type Help for Help)\n");
  mainmenu:
  printf(">");
  scanf("%s", option);

    if (strcmp(option, "help") == 0) {
        printf("calc or calculator: Opens the Calculator\n");
        printf("devmode: Enables Developer mode\n");
        printf("clear: Clears the screen\n");
        goto mainmenu;
    } else if (strcmp(option, "calc") == 0 || strcmp(option, "calculator") == 0) {
        add();
        goto mainmenu;
    } else if (strcmp(option, "exit") == 0) {
        printf("End Session\n");
        exit(0);
    } else if (strcmp(option, "clear") == 0) {
      system("clear");
      goto mainmenu;
    } else if(strcmp(option, "devmode") == 0)
    {
      devMode();
    }
    else {
      printf("Unknown command: %s\n", option);
      goto mainmenu;  
    }
   return 0; 
}


