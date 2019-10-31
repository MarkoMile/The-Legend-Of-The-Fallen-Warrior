#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
  char location[20];
  char command[20];

  void nameString(char location[20], char newLocation[20])
  {
    unsigned long int i;
    for (i = 0; i < strlen(newLocation); i++)
    {
        location[i] = newLocation[i];
    }
  }

  //---LEVEL 1---//             //Starter area
  void s_house()
  {
  printf("#SOUTH OF HOUSE#\n");
  printf("You find yourself in a small valley, surrounded by mountains and a house to your north.\n");
  printf("There is a sign.\n\n");
  }


  void n_house()
  {
  
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

    printf("#### Welcome to \"The Legend of The Fallen Warrior\"! ####\n\n");


    
    nameString(location, "s_house");
    s_house(location);
    readCommand(command,location);

    return 0;
}
