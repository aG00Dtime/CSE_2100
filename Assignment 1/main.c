#include <stdio.h>
#include <stdlib.h>

// courses
struct courses {
    char name[25];
    struct courses *next;

};

// student struct
struct student {

    char first_name[25];
    char last_name[25];
    char age[5];
    char address[25];
    char programme[25];
    struct courses course;

};


// node
struct node {
    // stu struct
    struct student stu;

    //nxt / prev
    struct node *prev;
    struct node *next;

};

// pointer -> node
struct node *head;

//proto
void add_student();

void show();

// main
int main() {

    add_student();
    show();

    return 0;

}


//// add subject
//void add_subject() {
//
//}

// add student
void add_student() {

    //start

    // head
    head = NULL;

    // continue - run
    char run ;



    // loop
    while (1) {

        // new node
        struct node *newNode;

        // temp
        struct node *temp;

        // new node malloc
        newNode = (struct node *) malloc(sizeof(struct node)); // returns pointer

        // first name
        printf("\nEnter First Name:");
        scanf("%s", newNode->stu.first_name);
        fflush(stdin);

        // last name
        printf("Enter Last Name:");
        scanf("%s", newNode->stu.last_name);
        fflush(stdin);

        // age
        printf("Enter Age:");
        scanf("%s", newNode->stu.age);
        fflush(stdin);

        // address
        printf("Enter Address:");
        scanf("%[^\n]s", newNode->stu.address);
        fflush(stdin);


        // programme
        printf("Enter Programme:");
        scanf("%s", newNode->stu.programme);
        fflush(stdin);


        // ************************* //
        newNode->prev = NULL;
        newNode->next = NULL;

        if (head == NULL)
            // if no nodes set head as the both temp and new node
            head = temp = newNode;
        else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
        // ************************* //



        // continue of quit
        printf("Enter Q to quit OR C to continue :");
        scanf("%s",&run);
        fflush(stdin);

        if( run == 'q' || run == 'Q')
            break;

    }


    //end
}

// show stud
void show() {
    struct node *temp;
    temp = head;

    while (temp != NULL) {


        printf("\nName: %s %s\n", temp->stu.first_name, temp->stu.last_name);
        printf("Age: %s\n", temp->stu.age);\
        printf("Address: %s\n", temp->stu.address);
        printf("Programme: %s\n", temp->stu.programme);


        temp = temp->next;

    }

}