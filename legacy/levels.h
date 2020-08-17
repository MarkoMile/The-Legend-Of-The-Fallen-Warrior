  //---LEVEL 1 (OUTSIDE)---//             //Starter area
    void s_house()              //South side
  {

  printf("#SOUTH OF HOUSE#\n");
  printf("You find yourself in a small valley, surrounded by mountains and a house to your north.\n\n");

  printf("There is a sign.\n\n");
  }


    void n_house()              //North side
  {

  printf("#NORTH OF HOUSE#\n");
  printf("You are in a field, in front of the house.\n");
  printf("There is a BIG HOLE to your north.\n\n");

  printf("You see a door on the house.\n\n");
  }

    void e_house()              //East side
  {

  printf("#EAST OF HOUSE#\n");
  printf("You are in a field.\n");
  printf("You see a small hole.\n");
  printf("There is an old fence with a hole in it to your north.\n\n");

  printf("There is a window on the house.\n\n");
  }
    
    void w_house()              //West side
  {

  printf("#WEST OF HOUSE#\n");

  printf("-- An EVIL SCARECROW attacks you! --\n\n");                             //INSERT FIGHT MECHANICS HERE!!!!!!!         #########

  printf("You are in the garden of the house.\n");
  printf("There is an old fence to your north.\n");
  printf("There is a brick wall to your west.\n\n");

  printf("You see a window on the house.\n\n");
  }

  //---LEVEL 1 (INSIDE HOUSE)---//

  bool doorOpen = false;

  void kitchen()
  {
    printf("#KITCHEN#\n");
    printf("There is a cupboard with some water bottles.\n");
    printf("There is a table with an old DULL KNIFE on it.\n\n");

    printf("There is a door to the bedroom,\nand a door to the living room.\n\n");
  }

  void bedroom()
  {
    printf("#BEDROOM#\n");
    printf("There is a bed and a book shelf with a DUSTY BOOK on it.\n\n");
  }

  void livingroom()
  {
    printf("#LIVINGROOM#\n");
    printf("This room is very messy.\n");
    printf("It looks like someone left in a rush.\n\n");
  }