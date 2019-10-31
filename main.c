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
    void s_house()              //South side
  {
  printf("\n\n\n\n");
  printf("#SOUTH OF HOUSE#\n");
  printf("You find yourself in a small valley, surrounded by mountains and a house to your north.\n\n");

  printf("There is a sign.\n\n");
  }


    void n_house()              //North side
  {
  printf("\n\n\n\n");
  printf("#NORTH OF HOUSE#\n");
  printf("You are in a field, in front of the house.\n");
  printf("There is a BIG HOLE to your north.\n\n");

  printf("You see a door on the house.\n\n");
  }

    void e_house()              //East side
  {
  printf("\n\n\n\n");
  printf("#EAST OF HOUSE#\n");
  printf("You are in a field.\n");
  printf("You see a small hole.\n");
  printf("There is an old fence with a hole in it to your north.\n\n");

  printf("There is a window on the house.\n\n");
  }
    
    void w_house()              //West side
  {
  printf("\n\n\n\n");
  printf("#WEST OF HOUSE#\n");

  printf("-- An EVIL SCARECROW attacks you! --\n\n");                             //INSERT FIGHT MECHANICS HERE!!!!!!!         #########

  printf("You are in the garden of the house.\n");
  printf("There is an old fence to your north.\n");
  printf("There is a brick wall to your west.\n\n");

  printf("You see a window on the house.\n\n");
  }


  // COMMAND READING //
  void readCommand(char command[20], char location[20])
  {
    scanf("%s", command);

    if(strcmp(command, "exit") == 0)
    {
        exit(0);
    }
    
    if (strcmp(location, "s_house") == 0)             //location check for south
    {
      if (strcmp(command, "north") == 0)
      {
        printf("You can't go north because there is an old fence.\n");
        printf("You decide to go back south.\n\n");

        nameString(location, "s_house");
        s_house();
        readCommand(command,location);
      }
      
      else if (strcmp(command, "east") == 0)
      {
        nameString(location, "e_house");
        e_house();
        readCommand(command,location);
      }
      else if (strcmp(command, "west") == 0)
      {
        nameString(location, "w_house");
        w_house();
        readCommand(command,location);
      }
      
      else if (strcmp(command, "south") == 0)
      {
        printf("Can't walk south, the mountaints are too steep.\n\n");

        nameString(location, "s_house");
        s_house();
        readCommand(command,location);
      }
    }


    if (strcmp(location, "n_house") == 0)             //location check for north
    {
      if (strcmp(command, "north") == 0)              //Should head to BIG HOLE
      {
        nameString(location, "n_house");
        printf("\n####Level not yet designed.####\n\n");
        n_house();
        readCommand(command,location);
      }
      
      else if (strcmp(command, "east") == 0)
      {
        nameString(location, "e_house");
        e_house();
        readCommand(command,location);
      }
      else if (strcmp(command, "west") == 0)
      {
        printf("You can't go west because there is an old fence.\n");
        printf("You decide to go back north.\n\n");

        nameString(location, "n_house");
        n_house();
        readCommand(command,location);
      }
      
      else if (strcmp(command, "south") == 0)
      {
        printf("You can't go south because there is an old fence.\n");
        printf("You decide to go back north.\n\n");

        nameString(location, "n_house");
        n_house();
        readCommand(command,location);
      }
    }


    if (strcmp(location, "w_house") == 0)             //location check for west
    {
        if (strcmp(command, "north") == 0)            
      {
        nameString(location, "w_house");
        printf("You can't go north because there is an old fence.\n");
        printf("You decide to go back west.\n\n");

        nameString(location, "w_house");
        w_house();
        readCommand(command,location);
      }
      
      else if (strcmp(command, "east") == 0)          
      {
        nameString(location, "e_house");
        e_house();
        readCommand(command,location);
      }
      else if (strcmp(command, "west") == 0)
      {
        printf("You can't go west because there is a brick wall.\n");           //###########OVDE BI TREBALA BITI IF FUNKCIJA KOJA PROVERAVA DA LI JE UNISTEN ZID ALI TOGA JOS NEMA
        printf("You decide to go back.\n\n");

        nameString(location, "w_house");
        w_house();
        readCommand(command,location);
      }
      
      else if (strcmp(command, "south") == 0)
      {
        nameString(location, "s_house");
        s_house();
        readCommand(command,location);
      }
    }


    if (strcmp(location, "e_house") == 0)             //location check for east
    {
        if (strcmp(command, "north") == 0)            
      {
        nameString(location, "w_house");
        printf("You crawl through the small hole in the fence.\n");

        nameString(location, "n_house");
        n_house();
        readCommand(command,location);
      }
      
      else if (strcmp(command, "east") == 0)          //OVDE BI TREBAO DA SE PREDJE MOST  
      {
        printf("\n####Level not yet designed.####\n\n");

        nameString(location, "e_house");
        e_house();
        readCommand(command,location);
      }
      else if (strcmp(command, "west") == 0)
      {
        nameString(location, "w_house");
        w_house();
        readCommand(command,location);
      }
      
      else if (strcmp(command, "south") == 0)
      {
        nameString(location, "s_house");
        s_house();
        readCommand(command,location);
      }
    }
  }


    //START//

    printf("#### Welcome to \"The Legend of The Fallen Warrior\"! ####\n\n");


    
    nameString(location, "s_house");
    s_house();
    readCommand(command,location);

    return 0;
}
