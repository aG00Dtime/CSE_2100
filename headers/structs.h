//
// Created by David on 12/25/2021.
//

#ifndef CSE_2100_STRUCTS_H
#define CSE_2100_STRUCTS_H

#include <stdlib.h>

// course struct
typedef struct courses{
    char name[25];
    struct courses *next;

} courseList;

// student struct
typedef struct student {

    char firstName [25];
    char lastName [25];
    int age;
    char address [50];
    char programme [25];

    courseList * course;

    // pointers to prev and next elements in the list
    struct student *next;
    struct student *prev;

}student;

// set head as null on creation
student *head = NULL;

#endif //CSE_2100_STRUCTS_H
