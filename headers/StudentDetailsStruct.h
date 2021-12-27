//
// Created by David on 12/25/2021.
//

#ifndef CSE_2100_STUDENTDETAILSSTRUCT_H
#define CSE_2100_STUDENTDETAILSSTRUCT_H

// course struct singly linked
typedef struct courses
{
    char name[25];
    struct courses *next;

} course;

// student struct doubly linked
typedef struct student
{
    char firstName[25];
    char lastName[25];
    char age[10];
    char address[50];
    char programme[25];

    course *course;

    // next and prev of the node
    struct student *next;
    struct student *prev;

} student;

// student head p
student *head;

#endif //CSE_2100_STUDENTDETAILSSTRUCT_H
