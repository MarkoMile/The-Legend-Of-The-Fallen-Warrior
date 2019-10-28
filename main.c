#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Hello!\nWelcome to \"The Legend of The Fallen Warrior\"!\n\n");
    char check[3];
    char name[99];

    nazivanje:
      printf("What will be the name of your character\?\n");

      scanf("%s", &name);

      printf("Are you sure you want your name to be %s?\n", name);

    provera:
      printf("Answer with \"YES\" ili \"NO\".\n");

      scanf("%s", &check);
      strupr(check);

      if(strcmp(check, "YES") == 0){                  //strcmp(str1,str2) proverava da li je svako slovo stringa 1 (zato sto je string niz karaktera) isto kao svako slovo stringa 2
          printf("Great!\n\n\n");                        //To radi tako sto proverava prvo slovo, zatim ako je prvo slovo isto onda proverava drugo, i tako redom.
        } else if(strcmp(check, "NO") == 0){         //Ako je svako slovo isto, vraca 0.
          goto nazivanje;
        } else{
          goto provera;
        }


    //---LEVEL 1---//
    level1:
      printf("You find yourself in a small valley, surrounded by mountains and a house to your north.\n");
      printf("There is a sign.\n");



    return 0;
}
