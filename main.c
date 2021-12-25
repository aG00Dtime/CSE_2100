#include <stdio.h>
#include "functions/delete_studentDetails.h"
#include "functions/add_studentDetails.h"
#include "functions/display_studentDetails.h"


// main cli
int main() {
    // choice flag
    int ch;
    char name[25];

    // menu loop
    while (1) {

        printf("\n\n1.ADD STUDENT\n2.SEARCH LIST\n3.DELETE STUDENT\n4.PRINT FULL STUDENT LIST\n5.EXIT\nChoice:");

        scanf("%d", &ch);
        fflush(stdin);

        // switch
        switch (ch) {

            case 1:
                add_student();
                break;

            case 2:
                printf("\nENTER STUDENT FIRST NAME:");
                scanf("%s", name);
                fflush(stdin);

                search_student(name);
                break;

            case 3:
                printf("\nENTER STUDENT FIRST NAME:");
                scanf("%s", name);
                fflush(stdin);

                delete_student(name);
                break;


            case 4:
                display_list();
                break;

            case 5:
                return 0;


            default:
                printf("Error");

        }

    }

}

