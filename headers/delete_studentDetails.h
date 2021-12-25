//
// Created by David on 12/25/2021.
//

#ifndef CSE_2100_DELETE_STUDENTDETAILS_H
#define CSE_2100_DELETE_STUDENTDETAILS_H

#include "structs.h"
#include <string.h>

// delete student
void delete_student(char * name) {

    student *curr = head;


    while (1) {
        // check if list is empty
        if (curr == NULL){
            printf("\nNothing to delete\n");
            return;
        }

        // search nodes for first firstName
        if (strcmp(curr->firstName, name) == 0) {

            // if curr student is the first
            if (curr == head){
                head=curr->next;
            }
            // if curr stud is not the last
            if (curr->next != NULL){
                curr->next->prev=curr->prev;
            }
            // change prev if curr  is not the first node;
            if (curr->prev != NULL){
                curr->prev->next=curr->next;

            }
            // free memory of current node
            free(curr);

            // print message
            printf("\nDeleted [%s] \n", name);

            // return to menu
            break;

        } else {
            // if student isn't found move to the next node
            curr = curr->next;
        }


    }
}
#endif //CSE_2100_DELETE_STUDENTDETAILS_H
