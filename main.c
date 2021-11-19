#include <stdio.h>
#include <string.h>

int main()
{
  char choice[10];
  while (strcmp(choice, "quit") != 0)
  {
    printf("You are stuck in a dungeon cell. Which direction do you want to look?\n");
    scanf("%s", choice);
    if (strcmp(choice, "north") == 0)
    {
      printf("You see a window with bars on it.\n");
    }
    if (strcmp(choice, "east") == 0)
    {
      printf("You see stone wall.\n");
    }
    if (strcmp(choice, "west") == 0)
    {
      printf("You see a monster.\n");
    }
    if (strcmp(choice, "south") == 0)
    {
      printf("You see an open door. You escape through the door and win the game!\n");
      break;
    }
  }
  printf("Bye!");
  return 0;
}
