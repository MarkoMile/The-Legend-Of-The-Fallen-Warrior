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
      printf("Answer with \"YES\" or \"NO\".\n");

      scanf("%s", &check);
      strupr(check);

      if(strcmp(check, "YES") == 0){                  //strcmp(str1,str2) proverava da li je svako slovo stringa 1 (zato sto je string niz karaktera) isto kao svako slovo stringa 2
          printf("Great!\n\n\n");                     //To radi tako sto proverava prvo slovo, zatim ako je prvo slovo isto onda proverava drugo, i tako redom.
        } else if(strcmp(check, "NO") == 0){          //Ako je svako slovo isto, vraca 0.
          goto nazivanje;
        } else{
          goto provera;
        }

    // GAME PREP //
    char location[20];
    char command[20];


    // COMMAND READING //
    void readCommand(char command[20], char location[20])
    {
      scanf("%s", &command);
      strlwr(command);

      if (strcmp(location, "s_house") == 0)             //location check
      {
        if (strcmp(command, "walk north") == 0)
        {
          n_house(location);
        }
        //else if (strcmp(command[20], "walk east") == 0)
        //{
        //  e_house(location[20]);
        //}
        //else if (strcmp(command[20], "walk west") == 0)
        //{
        //  w_house(location[20]);
        //}
        else if (strcmp(command, "walk south") == 0)
        {
          printf("Can't walk south, the mountaints are too steep.");
          s_house(location);
        }
      }
    }

    //---LEVEL 1---//             //Starter area
    void s_house(char location[20]);
    {
      location[20] = "s_house";
      printf("#SOUTH OF HOUSE#\n");
      printf("You find yourself in a small valley, surrounded by mountains and a house to your north.\n");
      printf("There is a sign.\n\n");

      readCommand(command, location);
    }


    void n_house(char location[20]);
      location[20] = "n_house";
      printf("#NORTH OF HOUSE#\n");
      printf("You are in a field, in front of the house.\n");
      printf("There is a BIG HOLE to your north.\n\n");
      printf("You see a door on the house.\n\n");

      readCommand(command, location);


    return 0;
}
