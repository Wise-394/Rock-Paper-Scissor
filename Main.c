#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int player,npc,counter,score=0;
srand(time(NULL));

do 
{
npc = rand() %3;
printf ("\n×××××××××××\n1.rock\n2.paper\n3.scissors");
printf ("\nenter your choice:");
scanf("%d",&player);
if (player != npc )
 {
    if (player ==1)
      { 
              if (npc ==2)
         {
         printf ("\n You lose,NPC choose PAPER");          score--;
         }
         else 
         { 
          printf ("\nYou won,NPC choose scissors");
       score++;
           }
               
          
     }
    if (player ==2)
    { 
              if (npc ==3)
         {
         printf ("\n You lose,NPC choose SCISSORS"); 
         score--;
}
         else 
         { 
          printf ("\nYou won,NPC choose ROCK");
       score++;
           }
               
          
     }
          if (player ==3)
      { 
              if (npc ==1)
         {
         printf ("\n You lose,NPC choose ROCK");
         score--; }
         else 
         { 
          printf ("\nYou won,NPC choose PAPER");
       score++;  }
               
          
              }
  }
  else 
  {
      printf ("its a tie!");
  }
  printf ("\n\n-----------------------------\ncontinue?");
  printf ("\n1.yes\n2.No\nENTER HERE:");
  scanf ("%d",&counter);
}
while (counter==1);
printf ("\n==================\nDONE\nYour total score is %d",score);
}
