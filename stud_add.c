#include "student.h"
int get_roll()
{
    int roll = 1;
    STUDENT *temp;

    while(1)
    {
        int found = 0;
        temp = head;

        while(temp)
        {
            if(temp->roll == roll)
            {
                found = 1;
                break;
            }
            temp = temp->next;
        }

        if(found == 0)
            return roll;

        roll++;
    }
}

void stud_add(void)
{
    STUDENT *newnode, *temp;

    newnode = (STUDENT *)malloc(sizeof(STUDENT));

    if(newnode == NULL)
    {
        printf("\nMemory Allocation Failed!\n");
        return;
    }

    newnode->roll = get_roll();

    printf("\nAssigned Roll Number : %d\n", newnode->roll);

    printf("Enter Student Name : ");
    scanf(" %[^\n]", newnode->name);

    printf("Enter Percentage : ");
    scanf("%f", &newnode->per);

    newnode->next = NULL;

    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
            temp = temp->next;

        temp->next = newnode;
    }

    printf("\nRecord Added Successfully.\n");
}
