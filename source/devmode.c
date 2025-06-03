#include <stdlib.h>
#include "devmode.h"
#include "functions.h"
#include <string.h>

void devMode()
{
  char optionDev[35];
  system("clear");
  printf("devmode Activated (Type help for Help)\n");
  devmenu:
  printf(">");
  scanf("%s", optionDev);

  if(strcmp(optionDev, "help") == 0)
  {
    printf("calc: Opens the calculator\n");
    printf("mem_address-(variable here): Prints the memory address of a variable\n");
    printf("debug_(file here): Opens a file of the multitool in Neovim\n");
    printf("cat_(file here): Displays the content of a file\n");
    printf("clear: Clears the screen\n");
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
    system("nvim source/main.c");
  }
  else if(strcmp(optionDev, "debug_calc.c") == 0)
  {
    system("nvim source/calc.c");
  }
  else if(strcmp(optionDev, "debug_devmode.c") == 0)
  {
    system("nvim source/devmode.c");
  }
  else if(strcmp(optionDev, "exit") == 0)
  {
    exit(0);
  }
  else if(strcmp(optionDev, "cat_main.c") == 0)
  {
    system("cat source/main.c");
    goto devmenu;
  }
  else if(strcmp(optionDev, "cat_calc.c") == 0)
  {
    system("cat source/calc.c");
    goto devmenu;
  }
  else if(strcmp(optionDev, "cat_devmode.c") == 0)
  {
    system("cat source/devmode.c");
    goto devmenu;
  }
  else if(strcmp(optionDev, "cat_functions.h") == 0)
  {
    system("cat source/functions.h");
    goto devmenu;
  }
  else if(strcmp(optionDev, "cat_devmode.h") == 0)
  {
    system("cat source/devmode.h");
    goto devmenu;
  }
  else
  {
   printf("Unknown Command\n");
    goto devmenu;
  }
}
