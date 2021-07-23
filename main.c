#include <stdio.h>
#include <stdlib.h>
/****************
lyeon ndegwa
community lab project
23/6/2021
**********************/
int main()
{
    int action;

    printf("\tcounty library management system!\n");
    printf("welcome lyeon\n");
    //Navigation menu
    do {
    printf("1. Add user\n");
    printf("2. Add book\n");
    printf("3. Exit\n");
    printf("Select action(1-3): ");
    scanf("%d",&action);

    //Validate input
    if (action < 1 || action > 3)
    printf("Invalid action.Try again\n");

    }while(action < 1 || action > 3);







    return 0;
}
