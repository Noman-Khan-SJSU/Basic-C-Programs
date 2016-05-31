/*

// "Simple betting game"
// "1-Jack 2-Queen 3-King" - computer shuffles the initial position of these cards.
// player has to guess the position of the queen.
// if the player wins, he takes 3 times of the bet.
// if the player looses, he looses the bet amount.
// player has $100 initially.

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int cash=100;                                   //Global variable available to all functions.

void Play(int bet){

    //char C[3] = {'J','Q','K'};                // This character array is created as local variable and therefore, is created on the Stack when the stack frame of the Play() function starts executing.
    char *C = (char*)malloc(3* sizeof(char));   // Creating character array on the heap.
    C[0]='J'; C[1]='Q'; C[2]='K';               // Initializing the dynamically allocated array.
    printf("Shuffling........");
    srand(time(NULL));                          // seeding random number generator (look up seeding,later).
    int i;
    for (i=0;i<5;i++){                          // looping 5 times and
        int x = rand() %3;                      // choosing any two random positions among 0,1 and 2.
        int y = rand() %3;
        char temp = C[x];                       // and then swap the letters (J,Q or K) at these positions in the array, C.
        C[x] = C[y];
        C[y] = temp;
    }
    int playersGuess;
    printf("What's the position of the Queen: 1,2 or 3?: ");
    scanf("%d", &playersGuess);
    if(C[playersGuess-1] == 'Q'){
        cash += 3*bet;
        printf("You Win! Actual Position was= /%c %c %c/ Total Cash Available= %d\n", C[0],C[1],C[2],cash);
    }
    else{
        cash -= bet;
        printf("You Loose! Actual Position was= /%c %c %c/ Total Cash Available= %d\n", C[0],C[1],C[2],cash);
    }
    free(C);                                    // This statement to de-allocate the dynamically created array on the heap, after its usage, is very important. Otherwise, Memory leak will happen.

}

void main(){

    printf("Welcome to the Betting Game!!!\n");
    printf("Total cash available = $%d\n", cash);
    int bet;
    while(cash>0){
        printf("What's your bet? ");
        scanf("%d", &bet);
        if (bet==0 || bet>cash) break;
        Play(bet);
        printf("\n");
    }

}
*/
