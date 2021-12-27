// David Henry - 1007604

#include "headers/StudentDetailsStruct.h"
#include "headers/functions.h"

#include <stdio.h>
#include <stdlib.h>

// set head to null for list creation
student *head = NULL;

// main cli
int main() {

    // choice flag
    int switchChoice;
    char name[25];

    // menu loop
    while (1) {

        // choice flag
            switchChoice=0;

            printf("\n-------------[ MENU ]-------------");
            printf("\n"
                   "1.ADD STUDENT\n"
                   "2.SEARCH LIST\n"
                   "3.DELETE STUDENT\n"
                   "4.PRINT FULL STUDENT LIST\n"
                   "5.EXIT\n"
                   "CHOICE:");

            scanf("%d", &switchChoice);
            fflush(stdin);

        // switch
        switch (switchChoice) {

            case 1:

                add_student();

                break;

            case 2:
                printf("\n--------[ SEARCH ]--------\n");
                printf("\nENTER STUDENT FIRST NAME:");

                fgets(name, sizeof(name), stdin);
                remove_n(name);

                search_student(name);
                break;

            case 3:
                printf("\n--------[ DELETE ]--------\n");
                printf("\nENTER STUDENT FIRST NAME:");

                fgets(name, sizeof(name), stdin);
                remove_n(name);

                delete_student(name);
                break;

            case 4:
                printf("\n-------------[ LIST ]-------------\n");
                display_list();
                break;

            case 5:
                return 0;

            default:
                printf("\n[ ERROR - INVALID SELECTION ]\n");
                break;


        }
    }

}
