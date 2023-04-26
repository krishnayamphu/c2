#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
FILE *f, *fp;
#include "employee.c"
#include "menu.c"
#include "show-employees.c"
void main()
{
    int choice;
    while(1){
            system("cls");
        menu();
     scanf("%d",&choice);
     switch(choice){
        case 1:
            showEmployees();
            getch();
            break;
        case 2:
            //add employees
            break;
        default:
            printf("Invalid choice number");
            getch();
            break;
     }
    }


}
