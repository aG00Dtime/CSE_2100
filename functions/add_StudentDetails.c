//
// Created by David on 12/25/2021.
//

#include "../headers/StudentDetailsStruct.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// removes the new line from the input var
void remove_n(char *var){

    var[strlen(var)-1]='\0';

}

// add student to the end of the list
void add_student() {
    // vars
    int continueChoice,i;

    while (1) {

        // set vars
         i=1;

        // new student p
        student *newStudent;

        // malloc student
        newStudent = (student *) malloc(sizeof(student));

        printf("\n-------------[ ADD STUDENT ]-------------\n");

        // get student details
        printf("Enter First Name:");
        fgets(newStudent->firstName, sizeof(newStudent->firstName), stdin);
        remove_n(newStudent->firstName);

        printf("Enter Last Name:");
        fgets(newStudent->lastName, sizeof(newStudent->lastName), stdin);
        remove_n(newStudent->lastName);

        printf("Enter Age:");
        fgets(newStudent->age, sizeof(newStudent->age), stdin);
        remove_n(newStudent->age);

        printf("Enter Address:");
        fgets(newStudent->address, sizeof(newStudent->address), stdin);
        remove_n(newStudent->address);

        printf("Enter Programme:");
        fgets(newStudent->programme, sizeof(newStudent->programme), stdin);
        remove_n(newStudent->programme);

        // set student->course to null @ the start
        newStudent->course = NULL;

        course *newCourse;
        // loop to add courses into another list within the student node
        while (1)
        {

            // malloc
            newCourse = (course *) malloc(sizeof(course));

            // get input
            printf("\n-------------[ ADD COURSE ]-------------\n");
            printf("\nEnter course # %d:", i);
            fgets(newCourse->name, sizeof(newCourse->name), stdin);
            remove_n(newCourse->name);
            i++;

            // set course next and newCourse p
            newCourse->next = newStudent->course;
            newStudent->course = newCourse;
            // menu

                while (1)
                {
                    continueChoice = 0;

                    printf("\n--------[ CONTINUE ? ]--------\n");
                    printf("1.ADD ANOTHER COURSE\n2.RETURN TO MENU\nCHOICE:");
                    scanf(" %d",&continueChoice);
                    fflush(stdin);

                    if (continueChoice < 1 || continueChoice > 2){
                        printf("\n[ ERROR - INVALID SELECTION ]\n");
                        continue;
                    } else{
                        break;
                    }
                }

                if (continueChoice==1){
                    continue;
                }
                else{
                    break;
                }
        }

        // students are inserted at the end of the list
        newStudent->next = NULL;

        //if empty
        if (head == NULL) {
            newStudent->prev = NULL;
            head = newStudent;
        } else {
            student *lastStudent = head;

            // traverse the list until the end -NULL is found
            while (lastStudent->next != NULL) {

                lastStudent = lastStudent->next;
            }
            // set the node next to the last as the new student
            lastStudent->next = newStudent;

            // set the previous student the last student
            newStudent->prev = lastStudent;
        }

            // continue or exit
        while (1)
        {
            continueChoice = 0;

            printf("\n--------[ CONTINUE ? ]--------\n");
            printf("1.ADD ANOTHER STUDENT\n2.RETURN TO MENU\nCHOICE:");
            scanf(" %d",&continueChoice);
            fflush(stdin);

            // check if input is 1  or 2 and ask for input until it is
            if (continueChoice < 1 || continueChoice > 2){
                printf("\n[ ERROR - INVALID SELECTION ]\n");
                continue;
            }

            // break out of this loop and return to insert student loop if 1
            else if (continueChoice == 1){
                break;

             // leave this function and return to the menu
            } else {
                return;
            }
        }
    }
}

