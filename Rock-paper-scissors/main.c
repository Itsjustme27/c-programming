//Rock Paper Scissors game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //store playerChoice() in player_choice variable.
    int player_choice = playerChoice();

    //store compChoice() in comp_choice variable.
    int comp_choice = compChoice();


    //Call the function to get the results!
    determineWinner(player_choice,comp_choice);
    return 0;
}

//function to get player's choice
int playerChoice(){
    int player_choice;
    printf("--------------- Welcome to the Rock-Paper-Scissors game! ---------------\n");
    printf("1.Rock\n 2.Paper\n 3.Scissors\n");
    printf("Enter your choice: ");

    scanf("%d", &player_choice);

    //validate players choice
    while (player_choice < 1 || player_choice > 3)
    {
        printf("Invalid Choice!Please Enter the number from 1-3: ");
        scanf("%d", &player_choice);
    }

    return player_choice;
    
}

//function to get computer's choice
int compChoice(){
    srand(time(NULL)); 
    /*srand(time(NULL)); is used to seed the random number generator provided by the rand() 
    time(NULL): The time() function is part of the <time.h> header and returns the current calendar time as a time_t object. 
    Passing NULL as an argument means that it returns the current time without modifying any existing value. 
    This effectively gives you a unique seed value each time the program runs.
    srand(): The srand() function is also part of <stdlib.h> and is used to seed the random number generator. 
    It initializes the internal state of the random number generator based on the provided seed value.*/
    return rand() % 3 + 1;
}

//determine the winner
void determineWinner(int player_Choice, int comp_Choice){

    switch (player_Choice)
    {
    case 1:
        printf("You chose Rock\n");
        break;
    case 2:
        printf("You chose Paper\n");
        break;
    case 3:
        printf("You chose Scissors\n");
        break;
    }

    switch (comp_Choice)
    {
    case 1:
        printf("Computer chose Rock\n");
        break;
    case 2:
        printf("Computer chose Paper\n");
        break;
    case 3:
        printf("Computer chose Scissors\n");
        break;
    }
    

    if (player_Choice == comp_Choice)
    {
        printf("It's a tie!");
    }else if((player_Choice == 1 && comp_Choice == 3) || (player_Choice == 2 && comp_Choice == 1) || (player_Choice == 3 && comp_Choice == 2)){
        printf("Player wins! Congratulations!");   
    }else{
        printf("Computer wins!Try again!");
    }
}

