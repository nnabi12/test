/*
 * game.c
 *
 *  Created on: 16 сент. 2018 г.
 *      Author: админ
 */
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int main (){
	srand(time(NULL));
	printf("WELCOME to the quessing game!\n");
	setvbuf(stdout,NULL,_IONBF,0);
	char ch;
	int secret;
	int max=9999;
	int c,d=0;
	int rep=0;
	int a;
	int Average;
	do{
	printf("MENU: (s) to start a game, (n) to set a new range, or (q) to quit:\n ");
	scanf(" %c",&ch);
	if (ch == 's'){
	c=0;
		secret = rand() % max+1;
		printf("The secret number is BETWEEN 0 AND %i. Guess:\n",max);
		scanf("%i",&a);
again:
	run:

	if (a<secret){
			printf("Too LOW! Guess:\n");
		scanf("%i",&a);
			c++;
			d++;
			goto run;
			}
			else if (a>secret){
				printf("Too HIGH! Guess:\n");
		scanf("%i",&a);
				c++;
				d++;
goto run;
			}else if (a==secret){
printf("Correct: You TOOK %i guesses!\n", c);
		rep++;
			}
	}else if (ch == 'n'){
			printf("Enter a new MAXIMUM:\n");
		scanf("%i",&max);

		if (ch == 's'){
			c=0;
				secret = rand()%max;
				printf("The secret number is BETWEEN 0 AND %i. Guess:\n",max);
				scanf("%i",&a);
goto again;
		}
	else if (ch=='q'){
	Average = d/rep;
				printf("Thanks for playing. Your guess AVERAGE %d\n",Average);
				return 0;
	}
	}
	else if (ch=='q'){
		Average = d/rep;
					printf("Thanks for playing. Your guess AVERAGE %d\n",Average);
	return 0;
	}
	else if(ch!='s' && ch!='q' && ch!='n'&& ch!='\n'){
		printf("UNRECOGNIZED command.\n");
	}
	}while(ch!='q');
	return 0;
}

