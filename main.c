#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<string.h>
/****************
lyeon ndegwa
community lab project
23/6/2021
**********************/
int menu (){

 //Navigation menu
 int action;
    do {
    printf("1. Add user\n");
    printf("2. Add book\n");
    printf("3. Exit\n");
    printf("Select action(1-3): ");
    scanf("%d",&action);

    //Validate input
    if (action < 1 || action > 3){
        printf("Invalid action.Try again\n");
        Sleep(2000);
        system( "cls");
    }

    }while(action < 1 || action > 3);

	 return action;

}


// Function prototype

void execute_action(int action);
void close();
int menu();


int main()
{

    int action;

    printf("\t county library management system!\n");
    printf("welcome lyeon\n");

    action = menu();
    execute_action(action);

    return 0;
}
void execute_action(int action){

switch(action) {

case 1:
    printf("Enter your name:\n");
    scanf("%d",&action);
    printf("User added....");

    break;

case 2:
    printf("1.Computer\n");
    printf("2.Business\n");
    printf("3.Novel\n");
    printf("4.Back to main menu\n");
    printf("Select action(1-4):");
    scanf("%d",&action);


    break;

case 3:
    close();
    printf("*****Good Bye*****");
    break;

default:
    printf("Unknown function.\n");
}


}



