#include <stdio.h>
#include <string.h>
void main()
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
{ char Name[50], G[5], answer[70]; #Add2
=======
{ char Name[50], G[50], answer[10];
>>>>>>> 065bab87dfa66341280854e3e3f28d5af1df8b96
=======
{ char Name[50], G[50], answer[10]; #ADD
>>>>>>> 4790df7a49a2efd10fafc3a389793f2d8f80f926
=======
{ char Name[50], G[50], answer[10]; #ADD1
>>>>>>> 6bf963b0af04a2ae502fe5c53af4cb8753a009de
  int i;
  do
  {
    printf("What is your Name? ");
    scanf("%s", Name);
    do
    {
      printf("What is your blood group [A, B, AB, or O]? ");
      scanf("%s", G);

      if (strcmp(G, "A") !=0  &&
                            strcmp(G, "B") !=0  &&
                            strcmp(G, "AB") !=0   &&
                            strcmp(G, "O") !=0 )
        printf("Blood group %s is incorrect! Please try again.\n", G);
    }  while (strcmp(G, "A") !=0  &&
                            strcmp(G, "B") !=0  &&
                            strcmp(G, "AB") !=0   &&
                            strcmp(G, "O") !=0 );
    if (strcmp(G,"A") ==0)
    {
      printf("%s, A. Hey, you can give blood to: A, AB.\n", Name);
      printf("  You can receive blood from: A, O.\n");
    }
    else if (strcmp(G, "B") ==0)
    {
      printf("%s, B. Well, you can give blood to: B, AB.\n", Name);
      printf("  You can receive blood from: B, O.\n");
    }
    else if (strcmp(G, "AB") == 0)
    {
      printf("%s, AB. Oh my God, you can give blood only to: AB.\n", Name);
      printf("  Wow, you can receive blood from all: O, A, B, AB.\n");
    }
    else
    {
      printf("%s, O. Nice! You can give blood to all: O, A, B, AB\n", Name);
      printf("  But Sad! You can receive blood only from: O\n");
    }
    printf("\nContinue (YES for Yes)? ");
    scanf("%s", answer);
  } while (strcmp(answer, "YES") == 0);
  printf("Goodbye\n");
}
