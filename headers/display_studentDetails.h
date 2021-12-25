//
// Created by David on 12/25/2021.
//

#ifndef CSE_2100_DISPLAY_STUDENTDETAILS_H
#define CSE_2100_DISPLAY_STUDENTDETAILS_H

// find student by name and delete the related node
void search_student(char *name)
{
    printf("\n");
    // set head
    student *temp = head;

    // return of list is empty
    if (temp == NULL)
    {
        printf("\n[List empty]\n");
        return;
    }
    // print names in the list until the end
    while (temp != NULL)
    {
        if (strcmp(temp->firstName, name) == 0)
        {

            printf("-------------[ Student Details ]-------------\n");

            printf("Name: %s %s\n", temp->firstName, temp->lastName);

            printf("Age: %d\n", temp->age);

            printf("Address: %s\n", temp->address);

            printf("Programme: %s\n", temp->programme);

            printf("Courses:\n");

            // pointer to curr student courseList
            courseList *curr_course = temp->course;

            while (curr_course != NULL)
            {

                printf("    %s\n", curr_course->name);
                fflush(stdout);
                curr_course = curr_course->next;
            }

            printf("---------------------------------------------\n");

            break;
        }

        temp = temp->next;
    }
}

// print the names of all the students int the list
void display_list()
{
    printf("\n");

    student *temp = head;

    // return of list is empty
    if (temp == NULL)
    {
        printf("\n[List empty]\n");
        return;
    }
    // print names in the list until the end
    while (temp != NULL)
    {

        printf("\nName:[%s]\n", temp->firstName);

        temp = temp->next;
    }
}

#endif // CSE_2100_DISPLAY_STUDENTDETAILS_H
