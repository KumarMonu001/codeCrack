#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// Rock, paper and sessior game
// Games Rules :
//		Rock & scissor  -->> 	Rock
//  	scissor & Paper -->> 	scissor
//  	Paper & Rock	-->>	Paper

int game(char,char);
int main()
{
	// Store the random number
	int n;
	
	char your_choice , comp_choice, result;
	
	// Chose a random number every time
	srand(time(NULL));
	
	// create a rendom number less than 100 , divided it by 100
	n = rand() % 100;
	
	if( n < 33 ){
		// computer choose rock here ( rock == r) 
		comp_choice = 'r';
	}
	else if( n > 33 && n < 66 ){
		// computer choose paper here ( paper ==  p)
		comp_choice = 'p';
	}
	else{
		// computer choose scissor here ( scissor == s)
		comp_choice = 's';
	}
	
	printf("\n\n\n\n\t\tEnter r for ROCK, p for PAPER and s for SCISSOR \n\t\t\t\t\t");
	
	// Input from the user 
	scanf("%c", &your_choice);
	
	result = game( your_choice , comp_choice);
	
	if( result == -1 ){
		printf("\n\n\n\t\tGame draw! \n");
	}
	else if( result == 1){
		printf("\n\n\n\t\tWow! You have won the game ! \n");
	}
	else{
		printf("\n\n\n\t\toh! You have lost the game ! \n");
	}
	
	printf("\t\tYour choice : %c and Computer choice : %c", your_choice, comp_choice);
	
	return 0;
}

int game( char your_choice, char comp_choice ){
	
	// if both the user and computer has choose the same thing
	if ( your_choice == comp_choice )
		return -1;
		
	// If user choice is rock and computer choice is scissor
	if ( your_choice == 'r' && comp_choice == 's')
		return 1;
		
		// If user choice is scissor and computer choice is rock
		else if ( your_choice == 's' && comp_choice == 'r')
				return 0;
				
	// If user choice is scissor and computer choice is paper
	if ( your_choice == 's' && comp_choice == 'p')
		return 1;
		
		// If user choice is paper and computer choice is scissor
		else if( your_choice == 'p' && comp_choice == 's')
				return 0;
				
	// If user choice is paper and computer choice is rock
	if ( your_choice == 'p' && comp_choice == 'r')
		return 1;
		
		// If your choice is rock and computer choice is paper 
		else if( your_choice == 'r' && comp_choice == 'p')
				return 0;						
		
		
}
