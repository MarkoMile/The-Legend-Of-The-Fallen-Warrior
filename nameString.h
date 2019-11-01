void nameString(char location[20], char newLocation[20])
  {
    unsigned long int i;
    for (i = 0; i < strlen(newLocation); i++)
    {
        location[i] = newLocation[i];
    }
  }