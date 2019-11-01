#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "nameString.h"
#include "levels.h"
#include "readCommand.h"





int main()
{
  char location[20];
  char command[20];

    //START//

    printf("#### Welcome to \"The Legend of The Fallen Warrior\"! ####\n\n");


    
    nameString(location, "s_house");
    s_house();
    readCommand(command,location);

    return 0;
}
