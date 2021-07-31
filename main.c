/****************
lyeon ndegwa
community lab project
23/6/2021
**********************/
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<string.h>
#include<conio.h>

//Adding user:
//Name
//id
//Contact
// is_staff

//Data structures

struct user {
    char name[100];
    int id;
    char tel[13];
    int is_staff;
};

// Function prototype

void execute_action(int action);
void close();
int menu();
void add_user();
void view_users();
void delete_users();
void update_users();

int main()
{

    int action;
    while(1){
        action=menu();
        execute_action(action);
        printf("\nPress any key to continue");
        getchar();
        getch ();
        system("cls");
    }



    action = menu();
    execute_action(action);

    return 0;
}

void execute_action(int action){
switch(action) {
case 1:
    add_user();
break;

case 2:
    view_users();
break;

case 3:
    printf("adding book\n");
    break;

case 4:
    close();
    printf("*****Good Bye*****");
    break;

default:
    printf("Unknown function.\n");
}


}
void close() {
printf("Thank you for using the system\n");
printf("Bye");
Sleep(5000);
exit(0);
}

int menu (){

 //Navigation menu
 int action;
    do {
    printf("\t county library management system!\n");
    printf("welcome lyeon\n");
    printf("1. Add user\n");
    printf("2.view all users\n");
    printf("3. Add book\n");
    printf("4. Exit\n");
    printf("Select action(1-4): ");
    scanf("%d",&action);

    //Validate input
    if (action < 1 || action > 4){
        printf("Invalid action.Try again\n");
        Sleep(2000);
        system( "cls");
    }

    }while(action < 1 || action > 4);

	 return action;

}
void add_user(){
struct user u;
FILE *fp;

if ((fp=fopen("users","ab"))==NULL){
    printf("cannot open file.\n");
    exit(1);
}
printf("Name: ");
getchar();
gets(u.name);
printf("Id number: ");
scanf("%d",&u.id);
printf("Phone Number: ");
scanf("%s",u.tel);
printf("User type (1 for staff,0 for ordinary user:");
scanf("%d",&u.is_staff);

fwrite(&u, sizeof(struct user),1,fp);
fclose(fp);
printf("user successfully added\n");

}

void view_users() {
    struct user u;
    FILE *fp;

    fp = fopen("users","rb");
    if (!fp) {
        printf("Unable to open file");
        exit(0);
    }
    printf("id\t\tName\t\t\t\tPhone Number Is Staff\n");
    while(!feof(fp)) {
        fread(&u, sizeof(struct user), 1, fp);
        printf("%8d %20s %13s %1d\n",u.id,u.name,u.tel,u.is_staff);
    }
    fclose(fp);
}


