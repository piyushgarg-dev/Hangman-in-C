#include <stdio.h>
#include <stdlib.h>
#include "round2.c"
int main()
{
    char sat[8];
    int i;
    printf("***| HANG MAN |***\n");
    printf("__________________\n");
    printf("GUESS THE WORD! (STATE OF NORTH INDIA) \n\n");
    printf("  _ _ _ _ A _ \n");
    printf("ENTER THE FIRST CHARECTER -->\t");
    for(i=0;i<=1;i++)
    {
        scanf("%c",&sat[i]);
    }
    printf("%c _ _ _ A _",sat[0]);
    //////////////////////
    printf("\n");
    printf("ENTER THE second CHARECTER -->\t");
    for(i=1;i<=1;i++)
    {
        scanf("%c",&sat[i]);
    }
    printf("%c %c _ _ A _",sat[0],sat[1]);
    //////////////////////////////////
    printf("\n");
    printf("ENTER THE THIRD CHARECTER -->\t");
    for(i=2;i<=3;i++)
    {
        scanf("%c",&sat[i]);
    }
    printf("%c %c %c _ A _",sat[0],sat[1],sat[3]);
    //////////////////////////////////
    printf("\n");
    printf("ENTER THE FOURTH CHARECTER -->\t");
    for(i=4;i<=5;i++)
    {
        scanf("%c",&sat[i]);
    }
    printf("%c %c %c %c A _",sat[0],sat[1],sat[3],sat[5]);
    //////////////////////////////////////
    printf("\n");
    printf("ENTER THE LAST CHARECTER -->\t");
    for(i=6;i<=7;i++)
    {
        scanf("%c",&sat[i]);
    }
    printf("%c %c %c %c A %c",sat[0],sat[1],sat[3],sat[5],sat[7]);
    printf("\n");
    if(sat[0]=='p')
    {
        if(sat[1]=='u')
        {
            if(sat[3]=='n')
            {
                if(sat[5]=='j')
                {
                    if(sat[7]=='b')
                    {
                        printf("CORRECT ANS \n");
                    }
                }

            }
            else
            {
            
            }
        }
    }
    
    else
    {
        printf("*****************\n");
        printf("*    *       *\n");
       printf("*      *     *\n");
       printf("*       *   *\n");
       printf("*        * *\n");
       printf("*       * *\n");
       printf("*      *   *\n");
       printf("*     *     *\n");
       printf("*    *       *\n");
       printf("*   *         *\n");
    }
    printf("\n\n\n");
   // ro();


    return 0;
}
