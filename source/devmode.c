#include <stdlib.h>
#include "devmode.h"
#include "functions.h"
#include "string.h"

void devMode()
{
  char optionDev[50];
  system("clear");
  printf("devmode Activated (Type help for Help)\n");
  devmenu:
  printf(">");
  scanf("%s\n", optionDev);

  if(strcmp(optionDev, "help") == 0)
  {
    printf("calc: Opens the calculator\n");
    printf("mem_address-(variable here): Prints the memory address of a variable\n");
    printf("debug_(file here): Opens NeoVim for the selected file");
    printf("\nclear: Clears the screen\n");
    goto devmenu;

  }
  else if(strcmp(optionDev, "calc") == 0)
  {
    add();
    goto devmenu;
  }
  else if(strcmp(optionDev, "clear") == 0)
  {
    system("clear");
    goto devmenu;
  }
  else if (strcmp(optionDev, "mem_address-(optionDev)") == 0)
  {
    printf("%p", &optionDev);
      goto devmenu;
  }
  else if(strcmp(optionDev, "debug_main.c") == 0)
  {
    exit(0);
    system("nvim source/main.c");
  }
  else if(strcmp(optionDev, "debug_calc.c") == 0)
  {
    exit(0);
    system("nvim source/calc.c");
  }
  else if(strcmp(optionDev, "exit") == 0)
  {
    exit(0);
  }
  else 
  {
   printf("Unknow Command");
    goto devmenu;
  }
}
