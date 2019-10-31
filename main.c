#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
  char check[3];
  char name[18];
  char location[20];
  char command[20];
  int i;

  void nameString(char location[20], char newLocation[20])
  {
    int i;
    for (i = 0; i < strlen(newLocation); i++)
    {
        location[i] = newLocation[i];
    }
  }

  //---LEVEL 1---//             //Starter area
  void s_house(char location[20])
  {
  printf("#SOUTH OF HOUSE#\n");
  printf("You find yourself in a small valley, surrounded by mountains and a house to your north.\n");
  printf("There is a sign.\n\n");
  }


  void n_house(char location[20])
  {
  location = "n_house";
  printf("#NORTH OF HOUSE#\n");
  printf("You are in a field, in front of the house.\n");
  printf("There is a BIG HOLE to your north.\n\n");
  printf("You see a door on the house.\n\n");
  }


  // COMMAND READING //
  void readCommand(char command[20], char location[20])
  {
    scanf("%s", command);
    if (strcmp(location, "s_house") == 0)             //location check for south
    {
      if (strcmp(command, "north") == 0)
      {


        nameString(location, "n_house");
        n_house(location);
        readCommand(command,location);
      }
      /*
      else if (strcmp(command[20], "east") == 0)
      {
        nameString(location, "e_house");
        e_house(location);
        readCommand(command,location);
      }
      else if (strcmp(command[20], "west") == 0)
      {
        nameString(location, "w_house");
        w_house(location);
        readCommand(command,location);
      }
      */
      else if (strcmp(command, "south") == 0)
      {
        printf("Can't walk south, the mountaints are too steep.");

        nameString(location, "s_house");
        s_house(location);
        readCommand(command,location);
      }
    }
    if (strcmp(location, "n_house") == 0)             //location check for north
    {
      if (strcmp(command, "north") == 0)              //Should head to BIG HOLE
      {
        nameString(location, "n_house");
        printf("Level not yet designed.\n\n");
        n_house(location);
        readCommand(command,location);
      }
      /*
      else if (strcmp(command[20], "east") == 0)
      {
        nameString(location, "e_house");
        e_house(location);
        readCommand(command,location);
      }
      else if (strcmp(command[20], "west") == 0)
      {
        nameString(location, "w_house");
        w_house(location);
        readCommand(command,location);
      }
      */
      else if (strcmp(command, "south") == 0)
      {
        nameString(location, "s_house");
        s_house(location);
        readCommand(command,location);
      }
    }
  }


    //START//

    printf("Hello!\nWelcome to \"The Legend of The Fallen Warrior\"!\n\n");


    nazivanje:
      printf("What will be the name of your character\?\n");

      scanf("%s", name);

      printf("Are you sure you want your name to be %s?\n", name);

    provera:
      printf("Answer with \"YES\" or \"NO\".\n");

      scanf("%s", check);
      //strupr(check);

      if(strcmp(check, "YES") == 0){                  //strcmp(str1,str2) proverava da li je svako slovo stringa 1 (zato sto je string niz karaktera) isto kao svako slovo stringa 2
          printf("Great!\n\n\n");                     //To radi tako sto proverava prvo slovo, zatim ako je prvo slovo isto onda proverava drugo, i tako redom.
        } else if(strcmp(check, "NO") == 0){          //Ako je svako slovo isto, vraca 0.
          goto nazivanje;
        } else{
          goto provera;
        }

    //location = "s_house";
    
    for (i = 0; i < strlen("s_house"); i++)
    {
        location[i] = "s_house"[i];
    }

    s_house(location);
    readCommand(command,location);

    return 0;
}
