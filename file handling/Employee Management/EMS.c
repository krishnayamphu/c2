#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
FILE *f, *fp;
#include "employee.c"
#include "menu.c"
#include "show-employees.c"
#include "add-employee.c"
#include "edit-employee.c"
#include "remove-employee.c"
#include "search-employee.c"
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
            addEmployee();
            getch();
            break;
        case 3:
            updateEmployee();
            getch();
            break;
        case 4:
            removeEmployee();
            getch();
            break;
        case 5:
            searchEmployee();
            getch();
            break;
        case 6:
            printf("Press ANY KEY to CONTINUE");
            exit(0);
        default:
            printf("Invalid choice number");
            getch();
            break;
     }
    }


}
