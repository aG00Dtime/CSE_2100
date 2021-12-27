//
// Created by David on 12/25/2021.
//


#include "../headers/StudentDetailsStruct.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// delete student
void delete_student(char *name) {

    student *curr = head;
    int found=0;



    // check if list is empty
    if (curr == NULL) {
        printf("\n[ LIST IS EMPTY ]\n");
        return;
    }

    while (curr != NULL) {
        // search nodes for the firstName
        if (strcmp(curr->firstName, name) == 0) {
            found=1;

            if (curr == head) {
                head = curr->next;
            }
            if (curr->next != NULL) {
                curr->next->prev = curr->prev;
            }
            if (curr->prev != NULL) {
                curr->prev->next = curr->next;
            }
            free(curr);
            printf("\n-----[ Deleted [%s] ]----- \n", name);

        }
        else{

            curr=curr->next;
        }

    }

    if (!found){
        printf("[No student found by that name]\n");
    }
}


