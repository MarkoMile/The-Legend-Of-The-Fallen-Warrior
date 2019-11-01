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
      else if (strcmp(command, "look") == 0)
      {
        s_house();
        readCommand(command,location);
      }
      else if (strcmp(command, "open_door") == 0)
      {
        printf("No doors around.\n");
        readCommand(command,location);
      }
      else if (strcmp(command, "enter_house") == 0)
      {
        printf("Can't enter the house from here.\n");
        readCommand(command,location);
      }
      else if (strcmp(command, "leave_house") == 0)
      {
        printf("You are not in a house, dummy.\n");
        readCommand(command, location);
      }
      else
      {
        printf("Unknown command.\n");
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
      else if (strcmp(command, "look") == 0)
      {
        n_house();
        readCommand(command,location);
      }
      else if (strcmp(command, "enter_house") == 0)
      {
        if (doorOpen == false)
        {
          printf("The door is closed, dummy.\n");
          readCommand(command,location);
        }
        else if (doorOpen == true)
        {
          nameString(location, "kitchen");
          kitchen();
          readCommand(command,location);
        }
      }
      else if (strcmp(command, "open_door") == 0)
      {
        if (doorOpen == true)
        {
          printf("The door is already open.\n");
          readCommand(command,location);
        }
        else if (doorOpen == false)
        {
          doorOpen = true;
          printf("Opened the door.\n");
          readCommand(command,location);
        }
      }
      else if (strcmp(command, "enter_house") == 0)
      {
        printf("Can't enter the house from here.\n");
        readCommand(command,location);
      }
      else if (strcmp(command, "leave_house") == 0)
      {
        printf("You are not in a house, dummy.\n");
        readCommand(command, location);
      }
      else
      {
        printf("Unknown command.\n");
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
      else if (strcmp(command, "look") == 0)
      {
        w_house();
        readCommand(command,location);
      }
      else if (strcmp(command, "open_door") == 0)
      {
        printf("No doors around.\n");
        readCommand(command,location);
      }
      else if (strcmp(command, "enter_house") == 0)
      {
        printf("Can't enter the house from here.\n");
        readCommand(command,location);
      }
      else if (strcmp(command, "leave_house") == 0)
      {
        printf("You are not in a house, dummy.\n");
        readCommand(command, location);
      }
      else
      {
        printf("Unknown command.\n");
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
      else if (strcmp(command, "look") == 0)
      {
        e_house();
        readCommand(command,location);
      }
      else if (strcmp(command, "open_door") == 0)
      {
        printf("No doors around.\n");
        readCommand(command,location);
      }
      else if (strcmp(command, "enter_house") == 0)
      {
        printf("Can't enter the house from here.\n");
        readCommand(command,location);
      }
      else if (strcmp(command, "leave_house") == 0)
      {
        printf("You are not in a house, dummy.\n");
        readCommand(command, location);
      }
      else
      {
        printf("Unknown command.\n");
        readCommand(command,location);
      }
    }


    //INSIDE HOUSE//

    //KITCHEN//
    if (strcmp(location, "kitchen") == 0)       
    {
      if (strcmp(command, "bedroom") == 0)
      {
        nameString(location, "bedroom");
        bedroom();
        readCommand(command,location);
      }
      else if (strcmp(command, "livingroom") == 0)
      {
        nameString(location, "livingroom");
        livingroom();
        readCommand(command,location);
      }
      else if (strcmp(command, "kitchen") == 0)
      {
        printf("You are already in the kitchen.\n");
        readCommand(command,location);
      }
      else if ((strcmp(command, "north") == 0 ) || (strcmp(command, "east") == 0 ) || (strcmp(command, "west") == 0 ) || (strcmp(command, "south") == 0 ))
      {
        printf("You can't use that command in here.\n");
        readCommand(command,location);
      }
      else if (strcmp(command, "look") == 0)
      {
        kitchen();
        readCommand(command,location);
      }
      else if (strcmp(command, "open_door") == 0)
      {
        if (doorOpen == true)
        {
          printf("The door is already open.\n");
          readCommand(command,location);
        }
        else if (doorOpen == false)
        {
          doorOpen = true;
          printf("Opened the door.\n");
          readCommand(command,location);
        }
      }
      else if (strcmp(command, "leave_house") == 0)
      {
        if (doorOpen == false)
        {
          printf("The door is closed, dummy.\n");
          readCommand(command,location);
        }
        else if (doorOpen == true)
        {
          nameString(location, "n_house");
          n_house();
          readCommand(command, location);
        }
      }
      else if (strcmp(command, "enter_house") == 0)
      {
        printf("You are already in the house.\n");
        readCommand(command,location);
      }
      else
      {
        printf("Unknown command.\n");
        readCommand(command,location);
      }
    }

    //BEDROOM//
    if (strcmp(location, "bedroom") == 0)
    {
      if (strcmp(command, "kitchen") == 0)
      {
        nameString(location, "kitchen");
        kitchen();
        readCommand(command,location);
      }
      else if (strcmp(command, "livingroom") == 0)
      {
        nameString(location, "livingroom");
        livingroom();
        readCommand(command,location);
      }
      else if (strcmp(command, "bedroom") == 0)
      {
        printf("You are already in the bedroom.\n");
        readCommand(command,location);
      }
      else if ((strcmp(command, "north") == 0 ) || (strcmp(command, "east") == 0 ) || (strcmp(command, "west") == 0 ) || (strcmp(command, "south") == 0 ))
      {
        printf("You can't use that command in here.\n");
        readCommand(command,location);
      }
      else if (strcmp(command, "look") == 0)
      {
        bedroom();
        readCommand(command,location);
      }
      else if (strcmp(command, "open_door") == 0)
      {
        printf("No doors around.\n");
        readCommand(command,location);
      }
      else if (strcmp(command, "leave_house") == 0)
      {
        if (doorOpen == false)
        {
          printf("The door is closed, dummy.\n");
          readCommand(command,location);
        }
        else if (doorOpen == true)
        {
          nameString(location, "n_house");
          n_house();
          readCommand(command, location);
        }
      else if (strcmp(command, "enter_house") == 0)
      {
        printf("You are already in the house.\n");
        readCommand(command,location);
      }
      else
      {
        printf("Unknown command.\n");
        readCommand(command,location);
      }
    }

    //LIVINGROOM//
    if (strcmp(location, "livingroom") == 0)
    {
      if (strcmp(command, "kitchen") == 0)
      {
        nameString(location, "kitchen");
        kitchen();
        readCommand(command,location);
      }
      else if (strcmp(command, "bedroom") == 0)
      {
        nameString(location, "bedroom");
        bedroom();
        readCommand(command,location);
      }
      else if (strcmp(command, "livingroom") == 0)
      {
        printf("You are already in the livingroom.\n");
        readCommand(command,location);
      }
      else if ((strcmp(command, "north") == 0 ) || (strcmp(command, "east") == 0 ) || (strcmp(command, "west") == 0 ) || (strcmp(command, "south") == 0 ))
      {
        printf("You can't use that command in here.\n");
        readCommand(command,location);
      }
      else if (strcmp(command, "look") == 0)
      {
        livingroom();
        readCommand(command,location);
      }
      else if (strcmp(command, "open_door") == 0)
      {
        printf("No doors around.\n");
        readCommand(command,location);
      }
      else if (strcmp(command, "leave_house") == 0)
      {
        if (doorOpen == false)
        {
          printf("The door is closed, dummy.\n");
          readCommand(command,location);
        }
        else if (doorOpen == true)
        {
          nameString(location, "n_house");
          n_house();
          readCommand(command, location);
        }
      else if (strcmp(command, "enter_house") == 0)
      {
        printf("You are already in the house.\n");
        readCommand(command,location);
      }
      else
      {
        printf("Unknown command.\n");
        readCommand(command,location);
      }
    }
  }
}
}
