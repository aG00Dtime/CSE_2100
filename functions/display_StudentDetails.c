//
// Created by David on 12/25/2021.
//
#include "../headers/StudentDetailsStruct.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// find student by name and delete the related node
void search_student(char *name)
{
    printf("\n");
    // set head
    student *temp = head;
    int found=0;

    // return of list is empty
    if (temp == NULL)
    {
        printf("\n[ LIST IS EMPTY ]\n");
        return;
    }
    // print names in the list until the end
    while (temp != NULL)
    {
        if (strcmp(temp->firstName, name) == 0)
        {
            found=1;

            printf("-------------[ Student Details ]-------------\n");

            printf("Name: %s %s\n", temp->firstName, temp->lastName);

            printf("Age: %s\n", temp->age);

            printf("Address: %s\n", temp->address);

            printf("Programme: %s\n", temp->programme);

            printf("Courses:\n");

            // pointer to curr student course
            course *curr_course = temp->course;

            // print until end
            while (curr_course!=NULL)
            {
                printf("    %s\n", curr_course->name);
                // move to next course in the list
                curr_course = curr_course->next;
            }

            printf("---------------------------------------------\n");

            break;
        }

        temp = temp->next;
    }
    if (!found){
        printf("[No student found by that name]");
    }
}

// print the details of all the students the list
void display_list()
{
    printf("\n");

    student *temp = head;
    int i = 1;

    // return of list is empty
    if (temp == NULL)
    {
        printf("\n[ LIST IS EMPTY ]\n");
        return;
    }
    // print names in the list until the end
    while (temp != NULL)
    {

        printf("\n-------------[ Student Details # %d ]-------------\n", i);

        printf("Name: %s %s\n", temp->firstName, temp->lastName);

        printf("Age: %s\n", temp->age);

        printf("Address: %s\n", temp->address);

        printf("Programme: %s\n", temp->programme);

        printf("Courses:\n");

        // pointer to curr student course
        course *curr_course = temp->course;

        while (curr_course!=NULL)
        {

            printf("    %s\n", curr_course->name);

            // move to next course in the list
            curr_course = curr_course->next;

        }

        printf("--------------------------------------------------\n");

        temp = temp->next;
        i++;

    }

}
