/*
 * Author: Cristian Cerroni
 * Title: Game
 * Creating a text based story with if and else if statements
 * Created on November 25, 2015, 12:36 PM
 */
#include <stdio.h>
#include <stdlib.h>


/**The way this program is commented is to coencide with my flow chart.
 * Each branch has a number and outputs the number showing which path of the branch you are in.
 * Its a slightly messy way to do this but ¯\_(ツ)_/¯
 */

int main()
{
int opt1, opt2, opt3, opt4;
printf("Story\n");

printf("More story\n");

printf("Pick 1 or 2\n");
scanf("%d",&opt1);

if (opt1 == 1)					//this is the if statement that contains the entire program. if 1, it loads the first branch
{
    //Branch 1
    printf("Branch 1\n");
    printf("Pick 1 or 2\n");
	scanf("%d",&opt2);
		if (opt2 == 1)
		{
			//Branch 1 option 1
			printf("11\n");

            printf("Pick 1 or 2\n");
            scanf("%d",&opt3);
                if (opt3 == 1)
                {
                    //Branch 1 option 1 option 1
                    printf("111\n");

                    printf("Pick 1 or 2\n");
                    scanf("%d", &opt4);
                        if (opt4 == 1)
                        {
							//Branch 1 option 1 option 1 option 1
                            printf("1111\n");

                            printf("end");
                            return 0;
                        }
                        else if (opt4 == 2)
                        {
							//Branch 1 option 1 option 1 option 2
                            printf("1112\n");

                            printf("end");
                            return 0;
                        }

                }
			else if (opt3 == 2)
				//Branch 1 option 1 option 2
				printf("112\n");

				printf("Pick 1 or 2\n");
				scanf("%d",&opt4);
				if (opt4 == 1)
				{
					//Branch 1 option 1 option 2 option 1
					printf("1121\n");

					printf("end\n");
					return 0;
				}
				else if (opt4 == 2)
				{
					//Branch 1 option 1 option 2 option 2
					printf("1122\n");

					printf("end\n");
					return 0;
				}
		}
	else if (opt2 == 2)
	{
		//Branch 1 option 2
		printf("12\n");

        printf("Pick 1 or 2\n");
        scanf("%d",&opt3);
        if (opt3 == 1)
        {
			//Branch 1 option 2 option 1
           printf("121\n");

           printf("Pick 1 or 2\n");
           scanf("%d", &opt4);
           if (opt4 == 1)
           {
			   //Branch 1 option 2 option 1 option 1
               printf("1211\n");

               printf("end");
           }
           else if (opt4 == 2)
           {
			   //Branch 1 option 2 option 1 option 2
               printf("1212\n");

               printf("end\n");
           }
        }
		else if (opt3 == 2)
		{
			//Branch 1 option 2 option 2
			printf("122\n");

			printf("Pick 1 or 2\n");
			scanf("%d", &opt4);
			if (opt4 == 1)
			{
				//Branch 1 option 2 option 2 option 1
				printf("1221\n");

				printf("end\n");
				return 0;
			}
			else if (opt4 = 2)
			{
				//Branch 1 option 2 option 2 option 2
				printf("1222\n");

				printf("end\n");
				return 0;
			}
		}
	}
}
else if (opt1 == 2)
{
//Branch 2
    printf("Branch two\n");

	printf("Pick 1 or 2\n");
	scanf("%d", &opt2);
	if (opt2 == 1)
		{
			//Branch 2 option 1 option 1 option 1
			printf("21\n");

            printf("Pick 1 or 2\n");
            scanf("%d",&opt3);
                if (opt3 == 1)
                {
                    //Branch 2 option 1 option 1
                    printf("211\n");

                    printf("Pick 1 or 2\n");
                    scanf("%d", &opt4);
                        if (opt4 == 1)
                        {
							//Branch 2 option 1 option 1 option 1
                            printf("2111\n");

                            printf("end");
                            return 0;
                        }
                        else if (opt4 == 2)
                        {
							//Branch 2 option 1 option 1 option 2
                            printf("2112\n");

                            printf("end");
                            return 0;
                        }

                }
			else if (opt3 == 2)
				//Branch 2 option 1 option 2
				printf("212\n");

				printf("Pick 1 or 2\n");
				scanf("%d",&opt4);
				if (opt4 == 1)
				{
					//Branch 2 option 1 option 2 option 1
					printf("2121\n");

					printf("end\n");
					return 0;
				}
				else if (opt4 == 2)
				{
					//Branch 2 option 1 option 2 option 2
					printf("2122\n");

					printf("end\n");
					return 0;
				}
		}
	else if (opt2 == 2)
	{
		//Branch 2 option 2
		printf("22\n");

        printf("Pick 1 or 2\n");
        scanf("%d",&opt3);
        if (opt3 == 1)
        {
			//Branch 2 option 2 option 1
           printf("221\n");

           printf("Pick 1 or 2\n");
           scanf("%d", &opt4);
           if (opt4 == 1)
           {
			   //Branch 2 option 2 option 1 option 1
               printf("2211\n");

               printf("end");
           }
           else if (opt4 == 2)
           {
			   //Branch 2 option 2 option 1 option 2
               printf("2212\n");

               printf("end\n");
           }
        }
		else if (opt3 == 2)
		{
			//Branch 2 option 2 option 2
			printf("222\n");

			printf("Pick 1 or 2\n");
			scanf("%d", &opt4);
			if (opt4 == 1)
			{
				//Branch 2 option 2 option 2 option 1
				printf("2221\n");

				printf("end\n");
				return 0;
			}
			else if (opt4 = 2)
			{
				//Branch 2 option 2 option 2 option 2
				printf("2222\n");

				printf("end\n");
				return 0;
			}
		}
	}
}

else															//Simple error check at main loop in case anything but 1 or 2 is entered
{
    printf("ERROR. PLEASE PICK PROPER NUMBER");
}
}
