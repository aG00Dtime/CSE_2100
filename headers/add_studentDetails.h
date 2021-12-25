//
// Created by David on 12/25/2021.
//

#ifndef CSE_2100_ADD_STUDENTDETAILS_H
#define CSE_2100_ADD_STUDENTDETAILS_H

#include "structs.h"
// add student to the end of the list
void add_student(){

    int ch;char ch2;

    student * newStudent;

    newStudent = (student * ) malloc (sizeof(student));

    printf("\nEnter First Name:");
    scanf("%s",newStudent->firstName);
    fflush(stdin);

    printf("Enter Last Name:");
    scanf("%s",newStudent->lastName);
    fflush(stdin);

    printf("Enter Age:");
    scanf("%d",&newStudent->age);
    fflush(stdin);

    printf("Enter Address:");
    scanf(" %s",newStudent->address);
    fflush(stdin);

    printf("Enter Programme:");
    scanf(" %s",newStudent->programme);
    fflush(stdin);

// loop to add courses into another list within the student node
    while (1){

        courseList *newCourse ;
        newCourse=(courseList *)malloc(sizeof(courseList));

        printf("Enter course name:");
        scanf(" %s",newCourse->name);
        fflush(stdin);

        //set course next and newCourse pointers
        newCourse->next=newStudent->course;
        newStudent->course=newCourse;

        printf("Enter another course? [Y] or [N]:");
        scanf("%s",&ch2);
        fflush(stdin);

        if (ch2=='n' || ch2=='N'){
            break;
        }
    }

    newStudent->next=NULL;

    if (head==NULL){
        newStudent->prev=NULL;
        head=newStudent;

    }
    else{
        student *lastStudent = head;

        // traverse the list until the end -NULL is found
        while (lastStudent->next!=NULL){

            lastStudent=lastStudent->next;

        }
        // set the node next to the last as the new student
        lastStudent->next=newStudent;

        // set the previous student the last student
        newStudent->prev=lastStudent;

    }
    // continue or return to menu

    printf("\n1.ADD ANOTHER STUDENT\n2.RETURN TO MENU\nChoice:");
    scanf("%d",&ch);

    if(ch==1){
        add_student();
    } else{
        return;
    }

}
#endif //CSE_2100_ADD_STUDENTDETAILS_H
